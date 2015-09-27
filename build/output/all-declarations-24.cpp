#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-24.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_strictGreaterExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_strictGreaterExpressionForGeneration * p = (const cPtr_strictGreaterExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_strictGreaterExpressionForGeneration::GALGAS_strictGreaterExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_strictGreaterExpressionForGeneration::GALGAS_strictGreaterExpressionForGeneration (const cPtr_strictGreaterExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_strictGreaterExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_strictGreaterExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictGreaterExpressionForGeneration * p = (const cPtr_strictGreaterExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_strictGreaterExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_strictGreaterExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictGreaterExpressionForGeneration * p = (const cPtr_strictGreaterExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_strictGreaterExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @strictGreaterExpressionForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_strictGreaterExpressionForGeneration::cPtr_strictGreaterExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_strictGreaterExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration ;
}

void cPtr_strictGreaterExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@strictGreaterExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_strictGreaterExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_strictGreaterExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @strictGreaterExpressionForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration ("strictGreaterExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_strictGreaterExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_strictGreaterExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_strictGreaterExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_strictLowerExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_strictLowerExpressionForGeneration * p = (const cPtr_strictLowerExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_strictLowerExpressionForGeneration::GALGAS_strictLowerExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_strictLowerExpressionForGeneration::GALGAS_strictLowerExpressionForGeneration (const cPtr_strictLowerExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_strictLowerExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_strictLowerExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictLowerExpressionForGeneration * p = (const cPtr_strictLowerExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_strictLowerExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_strictLowerExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictLowerExpressionForGeneration * p = (const cPtr_strictLowerExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_strictLowerExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @strictLowerExpressionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_strictLowerExpressionForGeneration::cPtr_strictLowerExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_strictLowerExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration ;
}

void cPtr_strictLowerExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@strictLowerExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_strictLowerExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_strictLowerExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @strictLowerExpressionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration ("strictLowerExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_strictLowerExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_strictLowerExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_strictLowerExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structFieldAccessExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structFieldAccessExpressionForGeneration * p = (const cPtr_structFieldAccessExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structFieldAccessExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
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


typeComparisonResult GALGAS_structFieldAccessExpressionForGeneration::objectCompare (const GALGAS_structFieldAccessExpressionForGeneration & inOperand) const {
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

GALGAS_structFieldAccessExpressionForGeneration::GALGAS_structFieldAccessExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessExpressionForGeneration::GALGAS_structFieldAccessExpressionForGeneration (const cPtr_structFieldAccessExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessExpressionForGeneration GALGAS_structFieldAccessExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                  const GALGAS_location & inAttribute_mLocation,
                                                                                                                  const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                                  const GALGAS_string & inAttribute_mStructFieldName
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structFieldAccessExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_structFieldAccessExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessExpressionForGeneration * p = (const cPtr_structFieldAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessExpressionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_structFieldAccessExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_structFieldAccessExpressionForGeneration::reader_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessExpressionForGeneration * p = (const cPtr_structFieldAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessExpressionForGeneration) ;
    result = p->mAttribute_mStructFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_structFieldAccessExpressionForGeneration::reader_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @structFieldAccessExpressionForGeneration class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structFieldAccessExpressionForGeneration::cPtr_structFieldAccessExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                              const GALGAS_location & in_mLocation,
                                                                                              const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                              const GALGAS_string & in_mStructFieldName
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mStructFieldName (in_mStructFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structFieldAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration ;
}

void cPtr_structFieldAccessExpressionForGeneration::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@structFieldAccessExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structFieldAccessExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structFieldAccessExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mExpression, mAttribute_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @structFieldAccessExpressionForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration ("structFieldAccessExpressionForGeneration",
                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structFieldAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structFieldAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessExpressionForGeneration GALGAS_structFieldAccessExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessExpressionForGeneration result ;
  const GALGAS_structFieldAccessExpressionForGeneration * p = (const GALGAS_structFieldAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_subExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionForGeneration * p = (const cPtr_subExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subExpressionForGeneration::GALGAS_subExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subExpressionForGeneration::GALGAS_subExpressionForGeneration (const cPtr_subExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionForGeneration * p = (const cPtr_subExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionForGeneration * p = (const cPtr_subExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @subExpressionForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_subExpressionForGeneration::cPtr_subExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_subExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionForGeneration ;
}

void cPtr_subExpressionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@subExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_subExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @subExpressionForGeneration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionForGeneration ("subExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_subExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_subExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_subExpressionNoOverflowForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionNoOverflowForGeneration * p = (const cPtr_subExpressionNoOverflowForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subExpressionNoOverflowForGeneration::GALGAS_subExpressionNoOverflowForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subExpressionNoOverflowForGeneration::GALGAS_subExpressionNoOverflowForGeneration (const cPtr_subExpressionNoOverflowForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionNoOverflowForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowForGeneration * p = (const cPtr_subExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionNoOverflowForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionNoOverflowForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowForGeneration * p = (const cPtr_subExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionNoOverflowForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @subExpressionNoOverflowForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_subExpressionNoOverflowForGeneration::cPtr_subExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_subExpressionNoOverflowForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration ;
}

void cPtr_subExpressionNoOverflowForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@subExpressionNoOverflowForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_subExpressionNoOverflowForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @subExpressionNoOverflowForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration ("subExpressionNoOverflowForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_subExpressionNoOverflowForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_subExpressionNoOverflowForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionNoOverflowForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_testDynamicClassInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeComparisonKind.objectCompare (p->mAttribute_mTypeComparisonKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCastType.objectCompare (p->mAttribute_mCastType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (const cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_testDynamicClassInExpressionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionForGeneration::reader_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    result = p->mAttribute_mTypeComparisonKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind cPtr_testDynamicClassInExpressionForGeneration::reader_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_testDynamicClassInExpressionForGeneration::reader_mCastType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    result = p->mAttribute_mCastType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_testDynamicClassInExpressionForGeneration::reader_mCastType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @testDynamicClassInExpressionForGeneration class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mCastType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mTypeComparisonKind (in_mTypeComparisonKind),
mAttribute_mCastType (in_mCastType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

void cPtr_testDynamicClassInExpressionForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@testDynamicClassInExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCastType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_testDynamicClassInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mReceiverExpression, mAttribute_mTypeComparisonKind, mAttribute_mCastType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @testDynamicClassInExpressionForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ("testDynamicClassInExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_tildeExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tildeExpressionForGeneration * p = (const cPtr_tildeExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (const cPtr_tildeExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_tildeExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tildeExpressionForGeneration * p = (const cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_tildeExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @tildeExpressionForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_tildeExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

void cPtr_tildeExpressionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@tildeExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_tildeExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tildeExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @tildeExpressionForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tildeExpressionForGeneration ("tildeExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tildeExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tildeExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tildeExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_trueExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_trueExpressionForGeneration * p = (const cPtr_trueExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_trueExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_trueExpressionForGeneration::objectCompare (const GALGAS_trueExpressionForGeneration & inOperand) const {
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

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_trueExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (const cPtr_trueExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                        const GALGAS_location & inAttribute_mLocation
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_trueExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @trueExpressionForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_trueExpressionForGeneration::cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                    const GALGAS_location & in_mLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_trueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

void cPtr_trueExpressionForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@trueExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_trueExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @trueExpressionForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionForGeneration ("trueExpressionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_trueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_trueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration result ;
  const GALGAS_trueExpressionForGeneration * p = (const GALGAS_trueExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_unaryMinusExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryMinusExpressionForGeneration * p = (const cPtr_unaryMinusExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_unaryMinusExpressionForGeneration::objectCompare (const GALGAS_unaryMinusExpressionForGeneration & inOperand) const {
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

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (const cPtr_unaryMinusExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryMinusExpressionForGeneration * p = (const cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_unaryMinusExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @unaryMinusExpressionForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

void cPtr_unaryMinusExpressionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@unaryMinusExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_unaryMinusExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @unaryMinusExpressionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ("unaryMinusExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unaryMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration result ;
  const GALGAS_unaryMinusExpressionForGeneration * p = (const GALGAS_unaryMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_unaryMinusExpressionNoOverflowForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryMinusExpressionNoOverflowForGeneration * p = (const cPtr_unaryMinusExpressionNoOverflowForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_unaryMinusExpressionNoOverflowForGeneration::objectCompare (const GALGAS_unaryMinusExpressionNoOverflowForGeneration & inOperand) const {
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

GALGAS_unaryMinusExpressionNoOverflowForGeneration::GALGAS_unaryMinusExpressionNoOverflowForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unaryMinusExpressionNoOverflowForGeneration::GALGAS_unaryMinusExpressionNoOverflowForGeneration (const cPtr_unaryMinusExpressionNoOverflowForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unaryMinusExpressionNoOverflowForGeneration GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                        const GALGAS_location & inAttribute_mLocation,
                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionNoOverflowForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionNoOverflowForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_unaryMinusExpressionNoOverflowForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryMinusExpressionNoOverflowForGeneration * p = (const cPtr_unaryMinusExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_unaryMinusExpressionNoOverflowForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @unaryMinusExpressionNoOverflowForGeneration class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_unaryMinusExpressionNoOverflowForGeneration::cPtr_unaryMinusExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                    const GALGAS_location & in_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionNoOverflowForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration ;
}

void cPtr_unaryMinusExpressionNoOverflowForGeneration::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@unaryMinusExpressionNoOverflowForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_unaryMinusExpressionNoOverflowForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionNoOverflowForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @unaryMinusExpressionNoOverflowForGeneration type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration ("unaryMinusExpressionNoOverflowForGeneration",
                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionNoOverflowForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unaryMinusExpressionNoOverflowForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionNoOverflowForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unaryMinusExpressionNoOverflowForGeneration GALGAS_unaryMinusExpressionNoOverflowForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionNoOverflowForGeneration result ;
  const GALGAS_unaryMinusExpressionNoOverflowForGeneration * p = (const GALGAS_unaryMinusExpressionNoOverflowForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryMinusExpressionNoOverflowForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionNoOverflowForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionForGeneration * p = (const cPtr_varInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppVarName.objectCompare (p->mAttribute_mCppVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForCheckingFormalParameterUsing.objectCompare (p->mAttribute_mNameForCheckingFormalParameterUsing) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInExpressionForGeneration::objectCompare (const GALGAS_varInExpressionForGeneration & inOperand) const {
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

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                          const GALGAS_string & inAttribute_mCppVarName,
                                                                                          const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mCppVarName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mCppVarName, inAttribute_mNameForCheckingFormalParameterUsing COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_varInExpressionForGeneration::reader_mCppVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionForGeneration * p = (const cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    result = p->mAttribute_mCppVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_varInExpressionForGeneration::reader_mCppVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_varInExpressionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionForGeneration * p = (const cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    result = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_varInExpressionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForCheckingFormalParameterUsing ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @varInExpressionForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_string & in_mCppVarName,
                                                                      const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mCppVarName (in_mCppVarName),
mAttribute_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

void cPtr_varInExpressionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@varInExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mCppVarName, mAttribute_mNameForCheckingFormalParameterUsing COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @varInExpressionForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration result ;
  const GALGAS_varInExpressionForGeneration * p = (const GALGAS_varInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_xorExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpressionForGeneration * p = (const cPtr_xorExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpressionForGeneration::GALGAS_xorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpressionForGeneration::GALGAS_xorExpressionForGeneration (const cPtr_xorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_xorExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionForGeneration * p = (const cPtr_xorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_xorExpressionForGeneration::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_xorExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionForGeneration * p = (const cPtr_xorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_xorExpressionForGeneration::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @xorExpressionForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_xorExpressionForGeneration::cPtr_xorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_xorExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionForGeneration ;
}

void cPtr_xorExpressionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@xorExpressionForGeneration:" ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_xorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorExpressionForGeneration (mAttribute_mResultType, mAttribute_mLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @xorExpressionForGeneration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpressionForGeneration ("xorExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_xorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_xorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_semanticInstructionForGeneration::objectCompare (const GALGAS_semanticInstructionForGeneration & inOperand) const {
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

GALGAS_semanticInstructionForGeneration::GALGAS_semanticInstructionForGeneration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionForGeneration::GALGAS_semanticInstructionForGeneration (const cPtr_semanticInstructionForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @semanticInstructionForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticInstructionForGeneration::cPtr_semanticInstructionForGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @semanticInstructionForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionForGeneration ("semanticInstructionForGeneration",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionForGeneration result ;
  const GALGAS_semanticInstructionForGeneration * p = (const GALGAS_semanticInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assignmentInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetCppName.objectCompare (p->mAttribute_mTargetCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForCheckingFormalParameterUsing.objectCompare (p->mAttribute_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (const cPtr_assignmentInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_assignmentInstructionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_assignmentInstructionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_assignmentInstructionForGeneration::reader_mTargetCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mAttribute_mTargetCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_assignmentInstructionForGeneration::reader_mTargetCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_assignmentInstructionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_assignmentInstructionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForCheckingFormalParameterUsing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_assignmentInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_assignmentInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_assignmentInstructionForGeneration::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_assignmentInstructionForGeneration::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @assignmentInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentInstructionForGeneration::cPtr_assignmentInstructionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                  const GALGAS_string & in_mTargetCppName,
                                                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mTargetCppName (in_mTargetCppName),
mAttribute_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assignmentInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

void cPtr_assignmentInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionForGeneration:" ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionForGeneration (mAttribute_mTargetType, mAttribute_mTargetCppName, mAttribute_mNameForCheckingFormalParameterUsing, mAttribute_mStructAttributeList, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @assignmentInstructionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ("assignmentInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_concatInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_concatInstructionForGeneration * p = (const cPtr_concatInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_concatInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVariableCppName.objectCompare (p->mAttribute_mTargetVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForCheckingFormalParameterUsing.objectCompare (p->mAttribute_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_concatInstructionForGeneration::objectCompare (const GALGAS_concatInstructionForGeneration & inOperand) const {
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

GALGAS_concatInstructionForGeneration::GALGAS_concatInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_concatInstructionForGeneration::GALGAS_concatInstructionForGeneration (const cPtr_concatInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_concatInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_concatInstructionForGeneration GALGAS_concatInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                              const GALGAS_string & inAttribute_mTargetVariableCppName,
                                                                                              const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                              const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_concatInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mTargetVariableCppName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_concatInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mTargetType, inAttribute_mTargetVariableCppName, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mStructAttributeList, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_concatInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_concatInstructionForGeneration * p = (const cPtr_concatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_concatInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_concatInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_concatInstructionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_concatInstructionForGeneration * p = (const cPtr_concatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_concatInstructionForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_concatInstructionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_concatInstructionForGeneration::reader_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_concatInstructionForGeneration * p = (const cPtr_concatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_concatInstructionForGeneration) ;
    result = p->mAttribute_mTargetVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_concatInstructionForGeneration::reader_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_concatInstructionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_concatInstructionForGeneration * p = (const cPtr_concatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_concatInstructionForGeneration) ;
    result = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_concatInstructionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForCheckingFormalParameterUsing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_concatInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_concatInstructionForGeneration * p = (const cPtr_concatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_concatInstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_concatInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_concatInstructionForGeneration::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_concatInstructionForGeneration * p = (const cPtr_concatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_concatInstructionForGeneration) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_concatInstructionForGeneration::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @concatInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_concatInstructionForGeneration::cPtr_concatInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                          const GALGAS_string & in_mTargetVariableCppName,
                                                                          const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mTargetVariableCppName (in_mTargetVariableCppName),
mAttribute_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_concatInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_concatInstructionForGeneration ;
}

void cPtr_concatInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@concatInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_concatInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_concatInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mTargetType, mAttribute_mTargetVariableCppName, mAttribute_mNameForCheckingFormalParameterUsing, mAttribute_mStructAttributeList, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @concatInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_concatInstructionForGeneration ("concatInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_concatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_concatInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_concatInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_concatInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_concatInstructionForGeneration GALGAS_concatInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_concatInstructionForGeneration result ;
  const GALGAS_concatInstructionForGeneration * p = (const GALGAS_concatInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_concatInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("concatInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_dropInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dropInstructionForGeneration * p = (const cPtr_dropInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dropInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mDropList.objectCompare (p->mAttribute_mDropList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (p->mAttribute_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDropTypeList.objectCompare (p->mAttribute_mDropTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_dropInstructionForGeneration::objectCompare (const GALGAS_dropInstructionForGeneration & inOperand) const {
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

GALGAS_dropInstructionForGeneration::GALGAS_dropInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dropInstructionForGeneration GALGAS_dropInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_dropInstructionForGeneration::constructor_new (GALGAS_stringlist::constructor_emptyList (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dropInstructionForGeneration::GALGAS_dropInstructionForGeneration (const cPtr_dropInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dropInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dropInstructionForGeneration GALGAS_dropInstructionForGeneration::constructor_new (const GALGAS_stringlist & inAttribute_mDropList,
                                                                                          const GALGAS_string & inAttribute_mComment,
                                                                                          const GALGAS_unifiedTypeMapProxyList & inAttribute_mDropTypeList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionForGeneration result ;
  if (inAttribute_mDropList.isValid () && inAttribute_mComment.isValid () && inAttribute_mDropTypeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dropInstructionForGeneration (inAttribute_mDropList, inAttribute_mComment, inAttribute_mDropTypeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_dropInstructionForGeneration::reader_mDropList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_dropInstructionForGeneration * p = (const cPtr_dropInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionForGeneration) ;
    result = p->mAttribute_mDropList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_dropInstructionForGeneration::reader_mDropList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDropList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_dropInstructionForGeneration::reader_mComment (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_dropInstructionForGeneration * p = (const cPtr_dropInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionForGeneration) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_dropInstructionForGeneration::reader_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_dropInstructionForGeneration::reader_mDropTypeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_dropInstructionForGeneration * p = (const cPtr_dropInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionForGeneration) ;
    result = p->mAttribute_mDropTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cPtr_dropInstructionForGeneration::reader_mDropTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDropTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @dropInstructionForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_dropInstructionForGeneration::cPtr_dropInstructionForGeneration (const GALGAS_stringlist & in_mDropList,
                                                                      const GALGAS_string & in_mComment,
                                                                      const GALGAS_unifiedTypeMapProxyList & in_mDropTypeList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mDropList (in_mDropList),
mAttribute_mComment (in_mComment),
mAttribute_mDropTypeList (in_mDropTypeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_dropInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionForGeneration ;
}

void cPtr_dropInstructionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@dropInstructionForGeneration:" ;
  mAttribute_mDropList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mComment.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDropTypeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_dropInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dropInstructionForGeneration (mAttribute_mDropList, mAttribute_mComment, mAttribute_mDropTypeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @dropInstructionForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dropInstructionForGeneration ("dropInstructionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dropInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dropInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dropInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dropInstructionForGeneration GALGAS_dropInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionForGeneration result ;
  const GALGAS_dropInstructionForGeneration * p = (const GALGAS_dropInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dropInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_errorInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUseLocationReader.objectCompare (p->mAttribute_mUseLocationReader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorExpression.objectCompare (p->mAttribute_mErrorExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBuiltVariableCppNameList.objectCompare (p->mAttribute_mBuiltVariableCppNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (const cPtr_errorInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_errorInstructionForGeneration GALGAS_errorInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                            const GALGAS_bool & inAttribute_mUseLocationReader,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mErrorExpression,
                                                                                            const GALGAS_stringlist & inAttribute_mBuiltVariableCppNameList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mUseLocationReader.isValid () && inAttribute_mErrorExpression.isValid () && inAttribute_mBuiltVariableCppNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_errorInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mUseLocationReader, inAttribute_mErrorExpression, inAttribute_mBuiltVariableCppNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_errorInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_errorInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_errorInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_errorInstructionForGeneration::reader_mUseLocationReader (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mAttribute_mUseLocationReader ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_errorInstructionForGeneration::reader_mUseLocationReader (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUseLocationReader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::reader_mErrorExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mAttribute_mErrorExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_errorInstructionForGeneration::reader_mErrorExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_errorInstructionForGeneration::reader_mBuiltVariableCppNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mAttribute_mBuiltVariableCppNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_errorInstructionForGeneration::reader_mBuiltVariableCppNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuiltVariableCppNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @errorInstructionForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_errorInstructionForGeneration::cPtr_errorInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_bool & in_mUseLocationReader,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mErrorExpression,
                                                                        const GALGAS_stringlist & in_mBuiltVariableCppNameList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mUseLocationReader (in_mUseLocationReader),
mAttribute_mErrorExpression (in_mErrorExpression),
mAttribute_mBuiltVariableCppNameList (in_mBuiltVariableCppNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_errorInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

void cPtr_errorInstructionForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@errorInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUseLocationReader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBuiltVariableCppNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_errorInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_errorInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverExpression, mAttribute_mUseLocationReader, mAttribute_mErrorExpression, mAttribute_mBuiltVariableCppNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @errorInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionForGeneration ("errorInstructionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_errorInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_errorInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_foreachInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedObjectList.objectCompare (p->mAttribute_mEnumeratedObjectList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexVariableCppName.objectCompare (p->mAttribute_mIndexVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhileExpression.objectCompare (p->mAttribute_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBeforeInstructionList.objectCompare (p->mAttribute_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBetweenInstructionList.objectCompare (p->mAttribute_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAfterInstructionList.objectCompare (p->mAttribute_mAfterInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_foreachInstructionForGeneration::objectCompare (const GALGAS_foreachInstructionForGeneration & inOperand) const {
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

GALGAS_foreachInstructionForGeneration::GALGAS_foreachInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionForGeneration::GALGAS_foreachInstructionForGeneration (const cPtr_foreachInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_foreachInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionForGeneration GALGAS_foreachInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_foreachInstructionEnumeratedObjectListForGeneration & inAttribute_mEnumeratedObjectList,
                                                                                                const GALGAS_string & inAttribute_mIndexVariableCppName,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mWhileExpression,
                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mBeforeInstructionList,
                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mBetweenInstructionList,
                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mDoInstructionList,
                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mAfterInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_foreachInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEnumeratedObjectList.isValid () && inAttribute_mIndexVariableCppName.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_foreachInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mEnumeratedObjectList, inAttribute_mIndexVariableCppName, inAttribute_mWhileExpression, inAttribute_mBeforeInstructionList, inAttribute_mBetweenInstructionList, inAttribute_mDoInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_foreachInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_foreachInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListForGeneration GALGAS_foreachInstructionForGeneration::reader_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mEnumeratedObjectList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListForGeneration cPtr_foreachInstructionForGeneration::reader_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedObjectList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_foreachInstructionForGeneration::reader_mIndexVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mIndexVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_foreachInstructionForGeneration::reader_mIndexVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_foreachInstructionForGeneration::reader_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_foreachInstructionForGeneration::reader_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_foreachInstructionForGeneration::reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mBeforeInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_foreachInstructionForGeneration::reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBeforeInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_foreachInstructionForGeneration::reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mBetweenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_foreachInstructionForGeneration::reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBetweenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_foreachInstructionForGeneration::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_foreachInstructionForGeneration::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_foreachInstructionForGeneration::reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_foreachInstructionForGeneration * p = (const cPtr_foreachInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_foreachInstructionForGeneration) ;
    result = p->mAttribute_mAfterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_foreachInstructionForGeneration::reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAfterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @foreachInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_foreachInstructionForGeneration::cPtr_foreachInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_foreachInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                                                            const GALGAS_string & in_mIndexVariableCppName,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                            const GALGAS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                                                            const GALGAS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                                                            const GALGAS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                                                            const GALGAS_semanticInstructionListForGeneration & in_mAfterInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mEnumeratedObjectList (in_mEnumeratedObjectList),
mAttribute_mIndexVariableCppName (in_mIndexVariableCppName),
mAttribute_mWhileExpression (in_mWhileExpression),
mAttribute_mBeforeInstructionList (in_mBeforeInstructionList),
mAttribute_mBetweenInstructionList (in_mBetweenInstructionList),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mAfterInstructionList (in_mAfterInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_foreachInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_foreachInstructionForGeneration ;
}

void cPtr_foreachInstructionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@foreachInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_foreachInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_foreachInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mEnumeratedObjectList, mAttribute_mIndexVariableCppName, mAttribute_mWhileExpression, mAttribute_mBeforeInstructionList, mAttribute_mBetweenInstructionList, mAttribute_mDoInstructionList, mAttribute_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @foreachInstructionForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_foreachInstructionForGeneration ("foreachInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_foreachInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_foreachInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_foreachInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_foreachInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionForGeneration GALGAS_foreachInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_foreachInstructionForGeneration result ;
  const GALGAS_foreachInstructionForGeneration * p = (const GALGAS_foreachInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_foreachInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("foreachInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionWithSourceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarName.objectCompare (p->mAttribute_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabelName.objectCompare (p->mAttribute_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceStringExpression.objectCompare (p->mAttribute_mSourceStringExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarHasTranslateFeature.objectCompare (p->mAttribute_mGrammarHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssignementList.objectCompare (p->mAttribute_mAssignementList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxDirectedTranslationResultVarName.objectCompare (p->mAttribute_mSyntaxDirectedTranslationResultVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (const cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_string & inAttribute_mGrammarName,
                                                                                                                                        const GALGAS_string & inAttribute_mLabelName,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceStringExpression,
                                                                                                                                        const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                                                        const GALGAS_bool & inAttribute_mGrammarHasTranslateFeature,
                                                                                                                                        const GALGAS_stringlist & inAttribute_mAssignementList,
                                                                                                                                        const GALGAS_string & inAttribute_mSyntaxDirectedTranslationResultVarName
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceStringExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarHasTranslateFeature.isValid () && inAttribute_mAssignementList.isValid () && inAttribute_mSyntaxDirectedTranslationResultVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration (inAttribute_mInstructionLocation, inAttribute_mGrammarName, inAttribute_mLabelName, inAttribute_mSourceStringExpression, inAttribute_mActualParameterList, inAttribute_mGrammarHasTranslateFeature, inAttribute_mAssignementList, inAttribute_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mGrammarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mLabelName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mSourceStringExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mSourceStringExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mSourceStringExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceStringExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mGrammarHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mAssignementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mAssignementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mAssignementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssignementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::reader_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mSyntaxDirectedTranslationResultVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::reader_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxDirectedTranslationResultVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                    Pointer class for @grammarInstructionWithSourceExpressionForGeneration class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionWithSourceExpressionForGeneration::cPtr_grammarInstructionWithSourceExpressionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_string & in_mGrammarName,
                                                                                                                    const GALGAS_string & in_mLabelName,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                                    const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                                                                                    const GALGAS_stringlist & in_mAssignementList,
                                                                                                                    const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mGrammarName (in_mGrammarName),
mAttribute_mLabelName (in_mLabelName),
mAttribute_mSourceStringExpression (in_mSourceStringExpression),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mGrammarHasTranslateFeature (in_mGrammarHasTranslateFeature),
mAttribute_mAssignementList (in_mAssignementList),
mAttribute_mSyntaxDirectedTranslationResultVarName (in_mSyntaxDirectedTranslationResultVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

void cPtr_grammarInstructionWithSourceExpressionForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@grammarInstructionWithSourceExpressionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceStringExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssignementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceExpressionForGeneration (mAttribute_mInstructionLocation, mAttribute_mGrammarName, mAttribute_mLabelName, mAttribute_mSourceStringExpression, mAttribute_mActualParameterList, mAttribute_mGrammarHasTranslateFeature, mAttribute_mAssignementList, mAttribute_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @grammarInstructionWithSourceExpressionForGeneration type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ("grammarInstructionWithSourceExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionWithSourceFileForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarName.objectCompare (p->mAttribute_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabelName.objectCompare (p->mAttribute_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFileExpression.objectCompare (p->mAttribute_mSourceFileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarHasTranslateFeature.objectCompare (p->mAttribute_mGrammarHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssignementList.objectCompare (p->mAttribute_mAssignementList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxDirectedTranslationResultVarName.objectCompare (p->mAttribute_mSyntaxDirectedTranslationResultVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (const cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_grammarInstructionWithSourceFileForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mGrammarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::reader_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mLabelName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mSourceFileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mSourceFileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceFileForGeneration::reader_mSourceFileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_grammarInstructionWithSourceFileForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mGrammarHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_grammarInstructionWithSourceFileForGeneration::reader_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mAssignementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mAssignementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_grammarInstructionWithSourceFileForGeneration::reader_mAssignementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssignementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::reader_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mAttribute_mSyntaxDirectedTranslationResultVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::reader_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxDirectedTranslationResultVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @grammarInstructionWithSourceFileForGeneration class                        *
//---------------------------------------------------------------------------------------------------------------------*

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
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mGrammarName (in_mGrammarName),
mAttribute_mLabelName (in_mLabelName),
mAttribute_mSourceFileExpression (in_mSourceFileExpression),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mGrammarHasTranslateFeature (in_mGrammarHasTranslateFeature),
mAttribute_mAssignementList (in_mAssignementList),
mAttribute_mSyntaxDirectedTranslationResultVarName (in_mSyntaxDirectedTranslationResultVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionWithSourceFileForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

void cPtr_grammarInstructionWithSourceFileForGeneration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@grammarInstructionWithSourceFileForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceFileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssignementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionWithSourceFileForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceFileForGeneration (mAttribute_mInstructionLocation, mAttribute_mGrammarName, mAttribute_mLabelName, mAttribute_mSourceFileExpression, mAttribute_mActualParameterList, mAttribute_mGrammarHasTranslateFeature, mAttribute_mAssignementList, mAttribute_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @grammarInstructionWithSourceFileForGeneration type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ("grammarInstructionWithSourceFileForGeneration",
                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceFileForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceFileForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceFileForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIFexpression.objectCompare (p->mAttribute_mIFexpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_then_5F_instructionList.objectCompare (p->mAttribute_m_5F_then_5F_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_else_5F_instructionList.objectCompare (p->mAttribute_m_5F_else_5F_instructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionForGeneration::GALGAS_ifInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionForGeneration::GALGAS_ifInstructionForGeneration (const cPtr_ifInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mIFexpression,
                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_m_5F_then_5F_instructionList,
                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_m_5F_else_5F_instructionList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIFexpression.isValid () && inAttribute_m_5F_then_5F_instructionList.isValid () && inAttribute_m_5F_else_5F_instructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mIFexpression, inAttribute_m_5F_then_5F_instructionList, inAttribute_m_5F_else_5F_instructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_ifInstructionForGeneration::reader_mIFexpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mAttribute_mIFexpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_ifInstructionForGeneration::reader_mIFexpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIFexpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_ifInstructionForGeneration::reader_m_5F_then_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mAttribute_m_5F_then_5F_instructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_ifInstructionForGeneration::reader_m_5F_then_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_then_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_ifInstructionForGeneration::reader_m_5F_else_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mAttribute_m_5F_else_5F_instructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_ifInstructionForGeneration::reader_m_5F_else_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_else_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @ifInstructionForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mIFexpression,
                                                                  const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                  const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mIFexpression (in_mIFexpression),
mAttribute_m_5F_then_5F_instructionList (in_m_5F_then_5F_instructionList),
mAttribute_m_5F_else_5F_instructionList (in_m_5F_else_5F_instructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

void cPtr_ifInstructionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@ifInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIFexpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mIFexpression, mAttribute_m_5F_then_5F_instructionList, mAttribute_m_5F_else_5F_instructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @ifInstructionForGeneration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionForGeneration ("ifInstructionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_incDecInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverCppName.objectCompare (p->mAttribute_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_incDecInstructionForGeneration::objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const {
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

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                              const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                              const GALGAS_incDecKind & inAttribute_mKind
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_incDecInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_incDecInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_incDecInstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_incDecInstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_incDecInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_incDecInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_incDecInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_incDecInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @incDecInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mReceiverCppName,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                                                          const GALGAS_incDecKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverCppName (in_mReceiverCppName),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_incDecInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

void cPtr_incDecInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@incDecInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverCppName, mAttribute_mReceiverType, mAttribute_mStructAttributeList, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @incDecInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  const GALGAS_incDecInstructionForGeneration * p = (const GALGAS_incDecInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_incDecNoOVFInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverCppName.objectCompare (p->mAttribute_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_incDecNoOVFInstructionForGeneration::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const {
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

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                        const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                        const GALGAS_incDecKind & inAttribute_mKind
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_incDecNoOVFInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_incDecNoOVFInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_incDecNoOVFInstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_incDecNoOVFInstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_incDecNoOVFInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_incDecNoOVFInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_incDecNoOVFInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecNoOVFInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @incDecNoOVFInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mReceiverCppName,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverCppName (in_mReceiverCppName),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

void cPtr_incDecNoOVFInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverCppName, mAttribute_mReceiverType, mAttribute_mStructAttributeList, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @incDecNoOVFInstructionForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  const GALGAS_incDecNoOVFInstructionForGeneration * p = (const GALGAS_incDecNoOVFInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_localVariableDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVariableType.objectCompare (p->mAttribute_mVariableType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppVariableName.objectCompare (p->mAttribute_mCppVariableName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_localVariableDeclarationForGeneration::objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const {
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

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_localVariableDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mVariableType,
                                                                                                            const GALGAS_string & inAttribute_mCppVariableName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  if (inAttribute_mVariableType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (inAttribute_mVariableType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localVariableDeclarationForGeneration::reader_mVariableType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    result = p->mAttribute_mVariableType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_localVariableDeclarationForGeneration::reader_mVariableType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localVariableDeclarationForGeneration::reader_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    result = p->mAttribute_mCppVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_localVariableDeclarationForGeneration::reader_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @localVariableDeclarationForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mVariableType,
                                                                                        const GALGAS_string & in_mCppVariableName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mVariableType (in_mVariableType),
mAttribute_mCppVariableName (in_mCppVariableName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_localVariableDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

void cPtr_localVariableDeclarationForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@localVariableDeclarationForGeneration:" ;
  mAttribute_mVariableType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_localVariableDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableDeclarationForGeneration (mAttribute_mVariableType, mAttribute_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @localVariableDeclarationForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localVariableDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  const GALGAS_localVariableDeclarationForGeneration * p = (const GALGAS_localVariableDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConstant.objectCompare (p->mAttribute_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVariableCppName.objectCompare (p->mAttribute_mTargetVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorName.objectCompare (p->mAttribute_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorArguments.objectCompare (p->mAttribute_mConstructorArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (p->mAttribute_mHasCompilerArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                                     GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                                                     GALGAS_bool::constructor_default (HERE),
                                                                                                     GALGAS_string::constructor_default (HERE),
                                                                                                     GALGAS_string::constructor_default (HERE),
                                                                                                     GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE),
                                                                                                     GALGAS_bool::constructor_default (HERE)
                                                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                                                                                      const GALGAS_bool & inAttribute_mIsConstant,
                                                                                                                                                                      const GALGAS_string & inAttribute_mTargetVariableCppName,
                                                                                                                                                                      const GALGAS_string & inAttribute_mConstructorName,
                                                                                                                                                                      const GALGAS_semanticExpressionListForGeneration & inAttribute_mConstructorArguments,
                                                                                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mIsConstant.isValid () && inAttribute_mTargetVariableCppName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mConstructorArguments.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration (inAttribute_mInstructionLocation, inAttribute_mTargetType, inAttribute_mIsConstant, inAttribute_mTargetVariableCppName, inAttribute_mConstructorName, inAttribute_mConstructorArguments, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
    result = p->mAttribute_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
    result = p->mAttribute_mTargetVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
    result = p->mAttribute_mConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mConstructorArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
    result = p->mAttribute_mConstructorArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mConstructorArguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Pointer class for @localVariableOrConstantDeclarationWithConstructorCallForGeneration class             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                                                                                  const GALGAS_bool & in_mIsConstant,
                                                                                                                                                  const GALGAS_string & in_mTargetVariableCppName,
                                                                                                                                                  const GALGAS_string & in_mConstructorName,
                                                                                                                                                  const GALGAS_semanticExpressionListForGeneration & in_mConstructorArguments,
                                                                                                                                                  const GALGAS_bool & in_mHasCompilerArgument
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mIsConstant (in_mIsConstant),
mAttribute_mTargetVariableCppName (in_mTargetVariableCppName),
mAttribute_mConstructorName (in_mConstructorName),
mAttribute_mConstructorArguments (in_mConstructorArguments),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration ;
}

void cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithConstructorCallForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstructorArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration (mAttribute_mInstructionLocation, mAttribute_mTargetType, mAttribute_mIsConstant, mAttribute_mTargetVariableCppName, mAttribute_mConstructorName, mAttribute_mConstructorArguments, mAttribute_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      @localVariableOrConstantDeclarationWithConstructorCallForGeneration type                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration ("localVariableOrConstantDeclarationWithConstructorCallForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration result ;
  const GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration * p = (const GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithConstructorCallForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConstant.objectCompare (p->mAttribute_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVariableCppName.objectCompare (p->mAttribute_mTargetVariableCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                                        GALGAS_string::constructor_default (HERE)
                                                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                                                                                            const GALGAS_bool & inAttribute_mIsConstant,
                                                                                                                                                                            const GALGAS_string & inAttribute_mTargetVariableCppName
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mIsConstant.isValid () && inAttribute_mTargetVariableCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (inAttribute_mInstructionLocation, inAttribute_mTargetType, inAttribute_mIsConstant, inAttribute_mTargetVariableCppName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
    result = p->mAttribute_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
    result = p->mAttribute_mTargetVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::reader_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//           Pointer class for @localVariableOrConstantDeclarationWithDefaultConstructorForGeneration class            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                                                                                        const GALGAS_bool & in_mIsConstant,
                                                                                                                                                        const GALGAS_string & in_mTargetVariableCppName
                                                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mIsConstant (in_mIsConstant),
mAttribute_mTargetVariableCppName (in_mTargetVariableCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration ;
}

void cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::description (C_String & ioString,
                                                                                              const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithDefaultConstructorForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetVariableCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (mAttribute_mInstructionLocation, mAttribute_mTargetType, mAttribute_mIsConstant, mAttribute_mTargetVariableCppName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     @localVariableOrConstantDeclarationWithDefaultConstructorForGeneration type                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration ("localVariableOrConstantDeclarationWithDefaultConstructorForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration result ;
  const GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * p = (const GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithDefaultConstructorForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConstant.objectCompare (p->mAttribute_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppVariableName.objectCompare (p->mAttribute_mCppVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mCppVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//            Pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                                                                                    const GALGAS_string & in_mCppVariableName,
                                                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mIsConstant (in_mIsConstant),
mAttribute_mCppVariableName (in_mCppVariableName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::description (C_String & ioString,
                                                                                            const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithSourceExpressionForGeneration:" ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (mAttribute_mTargetType, mAttribute_mIsConstant, mAttribute_mCppVariableName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      @localVariableOrConstantDeclarationWithSourceExpressionForGeneration type                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_logInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLogMessage.objectCompare (p->mAttribute_mLogMessage) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLogExpression.objectCompare (p->mAttribute_mLogExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (const cPtr_logInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mLogMessage,
                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mLogExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration result ;
  if (inAttribute_mLogMessage.isValid () && inAttribute_mLogExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logInstructionForGeneration (inAttribute_mLogMessage, inAttribute_mLogExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_logInstructionForGeneration::reader_mLogMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    result = p->mAttribute_mLogMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_logInstructionForGeneration::reader_mLogMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLogMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_logInstructionForGeneration::reader_mLogExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    result = p->mAttribute_mLogExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_logInstructionForGeneration::reader_mLogExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLogExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @logInstructionForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_logInstructionForGeneration::cPtr_logInstructionForGeneration (const GALGAS_lstring & in_mLogMessage,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mLogExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mLogMessage (in_mLogMessage),
mAttribute_mLogExpression (in_mLogExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_logInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

void cPtr_logInstructionForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@logInstructionForGeneration:" ;
  mAttribute_mLogMessage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLogExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_logInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logInstructionForGeneration (mAttribute_mLogMessage, mAttribute_mLogExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @logInstructionForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logInstructionForGeneration ("logInstructionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_logInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_logInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loopInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariantExpression.objectCompare (p->mAttribute_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFirstInstructions.objectCompare (p->mAttribute_mFirstInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLoopExpression.objectCompare (p->mAttribute_mLoopExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSecondInstructions.objectCompare (p->mAttribute_mSecondInstructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loopInstructionForGeneration::GALGAS_loopInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loopInstructionForGeneration::GALGAS_loopInstructionForGeneration (const cPtr_loopInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_loopInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_loopInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::reader_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mAttribute_mVariantExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_loopInstructionForGeneration::reader_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariantExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::reader_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mAttribute_mFirstInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_loopInstructionForGeneration::reader_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::reader_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mAttribute_mLoopExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_loopInstructionForGeneration::reader_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLoopExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::reader_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mAttribute_mSecondInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_loopInstructionForGeneration::reader_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSecondInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @loopInstructionForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loopInstructionForGeneration::cPtr_loopInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSecondInstructions
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mVariantExpression (in_mVariantExpression),
mAttribute_mFirstInstructions (in_mFirstInstructions),
mAttribute_mLoopExpression (in_mLoopExpression),
mAttribute_mSecondInstructions (in_mSecondInstructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loopInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionForGeneration ;
}

void cPtr_loopInstructionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@loopInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loopInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loopInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mVariantExpression, mAttribute_mFirstInstructions, mAttribute_mLoopExpression, mAttribute_mSecondInstructions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @loopInstructionForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionForGeneration ("loopInstructionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loopInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loopInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_matchInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_matchInstructionForGeneration * p = (const cPtr_matchInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_matchInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMatchedExpressionList.objectCompare (p->mAttribute_mMatchedExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMatchInstructionBranchList.objectCompare (p->mAttribute_mMatchInstructionBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_matchInstructionForGeneration::objectCompare (const GALGAS_matchInstructionForGeneration & inOperand) const {
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

GALGAS_matchInstructionForGeneration::GALGAS_matchInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionForGeneration GALGAS_matchInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_matchInstructionForGeneration::constructor_new (GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE),
                                                                GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (HERE),
                                                                GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionForGeneration::GALGAS_matchInstructionForGeneration (const cPtr_matchInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_matchInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionForGeneration GALGAS_matchInstructionForGeneration::constructor_new (const GALGAS_semanticExpressionListForGeneration & inAttribute_mMatchedExpressionList,
                                                                                            const GALGAS_matchInstructionBranchListForGeneration & inAttribute_mMatchInstructionBranchList,
                                                                                            const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionForGeneration result ;
  if (inAttribute_mMatchedExpressionList.isValid () && inAttribute_mMatchInstructionBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_matchInstructionForGeneration (inAttribute_mMatchedExpressionList, inAttribute_mMatchInstructionBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_matchInstructionForGeneration::reader_mMatchedExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_matchInstructionForGeneration * p = (const cPtr_matchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_matchInstructionForGeneration) ;
    result = p->mAttribute_mMatchedExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration cPtr_matchInstructionForGeneration::reader_mMatchedExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchedExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionForGeneration::reader_mMatchInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_matchInstructionForGeneration * p = (const cPtr_matchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_matchInstructionForGeneration) ;
    result = p->mAttribute_mMatchInstructionBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration cPtr_matchInstructionForGeneration::reader_mMatchInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchInstructionBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_matchInstructionForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_matchInstructionForGeneration * p = (const cPtr_matchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_matchInstructionForGeneration) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_matchInstructionForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @matchInstructionForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_matchInstructionForGeneration::cPtr_matchInstructionForGeneration (const GALGAS_semanticExpressionListForGeneration & in_mMatchedExpressionList,
                                                                        const GALGAS_matchInstructionBranchListForGeneration & in_mMatchInstructionBranchList,
                                                                        const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mMatchedExpressionList (in_mMatchedExpressionList),
mAttribute_mMatchInstructionBranchList (in_mMatchInstructionBranchList),
mAttribute_mElseInstructionList (in_mElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_matchInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionForGeneration ;
}

void cPtr_matchInstructionForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@matchInstructionForGeneration:" ;
  mAttribute_mMatchedExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMatchInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_matchInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_matchInstructionForGeneration (mAttribute_mMatchedExpressionList, mAttribute_mMatchInstructionBranchList, mAttribute_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @matchInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionForGeneration ("matchInstructionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionForGeneration GALGAS_matchInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionForGeneration result ;
  const GALGAS_matchInstructionForGeneration * p = (const GALGAS_matchInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_messageInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_messageInstructionForGeneration * p = (const cPtr_messageInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_messageInstructionForGeneration::objectCompare (const GALGAS_messageInstructionForGeneration & inOperand) const {
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

GALGAS_messageInstructionForGeneration::GALGAS_messageInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_messageInstructionForGeneration::GALGAS_messageInstructionForGeneration (const cPtr_messageInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_messageInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_messageInstructionForGeneration GALGAS_messageInstructionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionForGeneration result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_messageInstructionForGeneration (inAttribute_mExpression, inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_messageInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_messageInstructionForGeneration * p = (const cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_messageInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_messageInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_messageInstructionForGeneration * p = (const cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_messageInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @messageInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_messageInstructionForGeneration::cPtr_messageInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                            const GALGAS_location & in_mInstructionLocation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_messageInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration ;
}

void cPtr_messageInstructionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@messageInstructionForGeneration:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_messageInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_messageInstructionForGeneration (mAttribute_mExpression, mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @messageInstructionForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_messageInstructionForGeneration ("messageInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_messageInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_messageInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_messageInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_messageInstructionForGeneration GALGAS_messageInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionForGeneration result ;
  const GALGAS_messageInstructionForGeneration * p = (const GALGAS_messageInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_messageInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_methodCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMethodName.objectCompare (p->mAttribute_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (p->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMethodBaseType.objectCompare (p->mAttribute_mMethodBaseType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_methodCallInstructionForGeneration::objectCompare (const GALGAS_methodCallInstructionForGeneration & inOperand) const {
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

GALGAS_methodCallInstructionForGeneration::GALGAS_methodCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionForGeneration::GALGAS_methodCallInstructionForGeneration (const cPtr_methodCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionForGeneration GALGAS_methodCallInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                      const GALGAS_string & inAttribute_mMethodName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverType, inAttribute_mReceiverExpression, inAttribute_mMethodName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_methodCallInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_methodCallInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_methodCallInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_methodCallInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_methodCallInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_methodCallInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_methodCallInstructionForGeneration::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_methodCallInstructionForGeneration::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_methodCallInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cPtr_methodCallInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_methodCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_methodCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodCallInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_methodCallInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_methodCallInstructionForGeneration::reader_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mAttribute_mMethodBaseType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_methodCallInstructionForGeneration::reader_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodBaseType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @methodCallInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_methodCallInstructionForGeneration::cPtr_methodCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                  const GALGAS_string & in_mMethodName,
                                                                                  const GALGAS_methodKind & in_mKind,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mMethodBaseType
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mMethodName (in_mMethodName),
mAttribute_mKind (in_mKind),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mMethodBaseType (in_mMethodBaseType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_methodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

void cPtr_methodCallInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@methodCallInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_methodCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_methodCallInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverType, mAttribute_mReceiverExpression, mAttribute_mMethodName, mAttribute_mKind, mAttribute_mActualParameterList, mAttribute_mHasCompilerArgument, mAttribute_mMethodBaseType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @methodCallInstructionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ("methodCallInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionForGeneration GALGAS_methodCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration result ;
  const GALGAS_methodCallInstructionForGeneration * p = (const GALGAS_methodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_plusEqualnstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverCppName.objectCompare (p->mAttribute_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForCheckingFormalParameterUsing.objectCompare (p->mAttribute_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_plusEqualnstructionForGeneration::objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const {
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

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_plusEqualnstructionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (const cPtr_plusEqualnstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualnstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                  const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                  const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration result ;
  if (inAttribute_mReceiverCppName.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mInstructionLocation.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualnstructionForGeneration (inAttribute_mReceiverCppName, inAttribute_mTargetType, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mInstructionLocation, inAttribute_mStructAttributeList, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_plusEqualnstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_plusEqualnstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_plusEqualnstructionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_plusEqualnstructionForGeneration::reader_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_plusEqualnstructionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_plusEqualnstructionForGeneration::reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForCheckingFormalParameterUsing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_plusEqualnstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_plusEqualnstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_plusEqualnstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_plusEqualnstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_plusEqualnstructionForGeneration::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration cPtr_plusEqualnstructionForGeneration::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @plusEqualnstructionForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_plusEqualnstructionForGeneration::cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                              const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                              const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mReceiverCppName (in_mReceiverCppName),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_plusEqualnstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

void cPtr_plusEqualnstructionForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@plusEqualnstructionForGeneration:" ;
  mAttribute_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_plusEqualnstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualnstructionForGeneration (mAttribute_mReceiverCppName, mAttribute_mTargetType, mAttribute_mNameForCheckingFormalParameterUsing, mAttribute_mInstructionLocation, mAttribute_mStructAttributeList, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @plusEqualnstructionForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ("plusEqualnstructionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_plusEqualnstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_plusEqualnstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualnstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration result ;
  const GALGAS_plusEqualnstructionForGeneration * p = (const GALGAS_plusEqualnstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualnstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_readOnlyWithInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mObjectArrayCppName.objectCompare (p->mAttribute_mObjectArrayCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKeyExpression.objectCompare (p->mAttribute_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (p->mAttribute_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoBranchInstructions.objectCompare (p->mAttribute_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseBranchInstructions.objectCompare (p->mAttribute_mElseBranchInstructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_readOnlyWithInstructionForGeneration::objectCompare (const GALGAS_readOnlyWithInstructionForGeneration & inOperand) const {
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

GALGAS_readOnlyWithInstructionForGeneration::GALGAS_readOnlyWithInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readOnlyWithInstructionForGeneration::GALGAS_readOnlyWithInstructionForGeneration (const cPtr_readOnlyWithInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readOnlyWithInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readOnlyWithInstructionForGeneration GALGAS_readOnlyWithInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                          const GALGAS_string & inAttribute_mObjectArrayCppName,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mKeyExpression,
                                                                                                          const GALGAS_string & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mDoBranchInstructions,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseBranchInstructions
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readOnlyWithInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mObjectArrayCppName.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mElseBranchInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readOnlyWithInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mObjectArrayCppName, inAttribute_mKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mElseBranchInstructions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readOnlyWithInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readOnlyWithInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_readOnlyWithInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::reader_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mAttribute_mObjectArrayCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_readOnlyWithInstructionForGeneration::reader_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObjectArrayCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mAttribute_mKeyExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_readOnlyWithInstructionForGeneration::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKeyExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mAttribute_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_readOnlyWithInstructionForGeneration::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodNameForErrorSignaling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::reader_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mAttribute_mDoBranchInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_readOnlyWithInstructionForGeneration::reader_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoBranchInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::reader_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mAttribute_mElseBranchInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_readOnlyWithInstructionForGeneration::reader_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseBranchInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @readOnlyWithInstructionForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_readOnlyWithInstructionForGeneration::cPtr_readOnlyWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                      const GALGAS_string & in_mObjectArrayCppName,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                                                      const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mObjectArrayCppName (in_mObjectArrayCppName),
mAttribute_mKeyExpression (in_mKeyExpression),
mAttribute_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mAttribute_mDoBranchInstructions (in_mDoBranchInstructions),
mAttribute_mElseBranchInstructions (in_mElseBranchInstructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_readOnlyWithInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;
}

void cPtr_readOnlyWithInstructionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@readOnlyWithInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mObjectArrayCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_readOnlyWithInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readOnlyWithInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverExpression, mAttribute_mObjectArrayCppName, mAttribute_mKeyExpression, mAttribute_mSearchMethodNameForErrorSignaling, mAttribute_mDoBranchInstructions, mAttribute_mElseBranchInstructions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @readOnlyWithInstructionForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ("readOnlyWithInstructionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_readOnlyWithInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_readOnlyWithInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readOnlyWithInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readOnlyWithInstructionForGeneration GALGAS_readOnlyWithInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readOnlyWithInstructionForGeneration result ;
  const GALGAS_readOnlyWithInstructionForGeneration * p = (const GALGAS_readOnlyWithInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readOnlyWithInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readOnlyWithInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_readWriteWithInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverVariableCppName.objectCompare (p->mAttribute_mReceiverVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mObjectArrayCppName.objectCompare (p->mAttribute_mObjectArrayCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKeyExpression.objectCompare (p->mAttribute_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (p->mAttribute_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoBranchInstructions.objectCompare (p->mAttribute_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseBranchInstructions.objectCompare (p->mAttribute_mElseBranchInstructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_readWriteWithInstructionForGeneration::objectCompare (const GALGAS_readWriteWithInstructionForGeneration & inOperand) const {
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

GALGAS_readWriteWithInstructionForGeneration::GALGAS_readWriteWithInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readWriteWithInstructionForGeneration::GALGAS_readWriteWithInstructionForGeneration (const cPtr_readWriteWithInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readWriteWithInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readWriteWithInstructionForGeneration GALGAS_readWriteWithInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_string & inAttribute_mReceiverVariableCppName,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                            const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                            const GALGAS_string & inAttribute_mObjectArrayCppName,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mKeyExpression,
                                                                                                            const GALGAS_string & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                            const GALGAS_semanticInstructionListForGeneration & inAttribute_mDoBranchInstructions,
                                                                                                            const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseBranchInstructions
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_readWriteWithInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverVariableCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mObjectArrayCppName.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mElseBranchInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readWriteWithInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverVariableCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mObjectArrayCppName, inAttribute_mKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mElseBranchInstructions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readWriteWithInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readWriteWithInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::reader_mReceiverVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mReceiverVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_readWriteWithInstructionForGeneration::reader_mReceiverVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_readWriteWithInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_readWriteWithInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_readWriteWithInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_readWriteWithInstructionForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::reader_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mObjectArrayCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_readWriteWithInstructionForGeneration::reader_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObjectArrayCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_readWriteWithInstructionForGeneration::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mKeyExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_readWriteWithInstructionForGeneration::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKeyExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_readWriteWithInstructionForGeneration::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodNameForErrorSignaling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::reader_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mDoBranchInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_readWriteWithInstructionForGeneration::reader_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoBranchInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::reader_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mAttribute_mElseBranchInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_readWriteWithInstructionForGeneration::reader_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseBranchInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @readWriteWithInstructionForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_readWriteWithInstructionForGeneration::cPtr_readWriteWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_string & in_mReceiverVariableCppName,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                        const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                        const GALGAS_string & in_mObjectArrayCppName,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                                                        const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverVariableCppName (in_mReceiverVariableCppName),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mObjectArrayCppName (in_mObjectArrayCppName),
mAttribute_mKeyExpression (in_mKeyExpression),
mAttribute_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mAttribute_mDoBranchInstructions (in_mDoBranchInstructions),
mAttribute_mElseBranchInstructions (in_mElseBranchInstructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_readWriteWithInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;
}

void cPtr_readWriteWithInstructionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@readWriteWithInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mObjectArrayCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_readWriteWithInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readWriteWithInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverVariableCppName, mAttribute_mReceiverType, mAttribute_mStructAttributeList, mAttribute_mObjectArrayCppName, mAttribute_mKeyExpression, mAttribute_mSearchMethodNameForErrorSignaling, mAttribute_mDoBranchInstructions, mAttribute_mElseBranchInstructions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @readWriteWithInstructionForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ("readWriteWithInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_readWriteWithInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_readWriteWithInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteWithInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readWriteWithInstructionForGeneration GALGAS_readWriteWithInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readWriteWithInstructionForGeneration result ;
  const GALGAS_readWriteWithInstructionForGeneration * p = (const GALGAS_readWriteWithInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readWriteWithInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteWithInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_routineCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_routineCallInstructionForGeneration * p = (const cPtr_routineCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routineCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_routineCallInstructionForGeneration::objectCompare (const GALGAS_routineCallInstructionForGeneration & inOperand) const {
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

GALGAS_routineCallInstructionForGeneration::GALGAS_routineCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallInstructionForGeneration GALGAS_routineCallInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_routineCallInstructionForGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                      GALGAS_actualParameterListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallInstructionForGeneration::GALGAS_routineCallInstructionForGeneration (const cPtr_routineCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineCallInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallInstructionForGeneration GALGAS_routineCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                        const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineCallInstructionForGeneration result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_routineCallInstructionForGeneration (inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineCallInstructionForGeneration::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineCallInstructionForGeneration * p = (const cPtr_routineCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineCallInstructionForGeneration) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_routineCallInstructionForGeneration::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_routineCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineCallInstructionForGeneration * p = (const cPtr_routineCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineCallInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_routineCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @routineCallInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_routineCallInstructionForGeneration::cPtr_routineCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mActualParameterList (in_mActualParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_routineCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallInstructionForGeneration ;
}

void cPtr_routineCallInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@routineCallInstructionForGeneration:" ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_routineCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_routineCallInstructionForGeneration (mAttribute_mRoutineName, mAttribute_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineCallInstructionForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineCallInstructionForGeneration ("routineCallInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallInstructionForGeneration GALGAS_routineCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineCallInstructionForGeneration result ;
  const GALGAS_routineCallInstructionForGeneration * p = (const GALGAS_routineCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfModifierCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfModifierCallInstructionForGeneration * p = (const cPtr_selfModifierCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfModifierCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelfCppName.objectCompare (p->mAttribute_mSelfCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModifierName.objectCompare (p->mAttribute_mModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (p->mAttribute_mHasCompilerArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfModifierCallInstructionForGeneration::objectCompare (const GALGAS_selfModifierCallInstructionForGeneration & inOperand) const {
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

GALGAS_selfModifierCallInstructionForGeneration::GALGAS_selfModifierCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfModifierCallInstructionForGeneration::GALGAS_selfModifierCallInstructionForGeneration (const cPtr_selfModifierCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfModifierCallInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfModifierCallInstructionForGeneration GALGAS_selfModifierCallInstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mSelfCppName,
                                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                                  const GALGAS_lstring & inAttribute_mModifierName,
                                                                                                                  const GALGAS_methodKind & inAttribute_mKind,
                                                                                                                  const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                                  const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selfModifierCallInstructionForGeneration result ;
  if (inAttribute_mSelfCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mModifierName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfModifierCallInstructionForGeneration (inAttribute_mSelfCppName, inAttribute_mReceiverType, inAttribute_mModifierName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selfModifierCallInstructionForGeneration::reader_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfModifierCallInstructionForGeneration * p = (const cPtr_selfModifierCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfModifierCallInstructionForGeneration) ;
    result = p->mAttribute_mSelfCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_selfModifierCallInstructionForGeneration::reader_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_selfModifierCallInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfModifierCallInstructionForGeneration * p = (const cPtr_selfModifierCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfModifierCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_selfModifierCallInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_selfModifierCallInstructionForGeneration::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfModifierCallInstructionForGeneration * p = (const cPtr_selfModifierCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfModifierCallInstructionForGeneration) ;
    result = p->mAttribute_mModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_selfModifierCallInstructionForGeneration::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_selfModifierCallInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfModifierCallInstructionForGeneration * p = (const cPtr_selfModifierCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfModifierCallInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cPtr_selfModifierCallInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_selfModifierCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfModifierCallInstructionForGeneration * p = (const cPtr_selfModifierCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfModifierCallInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_selfModifierCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_selfModifierCallInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfModifierCallInstructionForGeneration * p = (const cPtr_selfModifierCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfModifierCallInstructionForGeneration) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_selfModifierCallInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @selfModifierCallInstructionForGeneration class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfModifierCallInstructionForGeneration::cPtr_selfModifierCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                              const GALGAS_lstring & in_mModifierName,
                                                                                              const GALGAS_methodKind & in_mKind,
                                                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                              const GALGAS_bool & in_mHasCompilerArgument
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mSelfCppName (in_mSelfCppName),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mModifierName (in_mModifierName),
mAttribute_mKind (in_mKind),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfModifierCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfModifierCallInstructionForGeneration ;
}

void cPtr_selfModifierCallInstructionForGeneration::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@selfModifierCallInstructionForGeneration:" ;
  mAttribute_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfModifierCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfModifierCallInstructionForGeneration (mAttribute_mSelfCppName, mAttribute_mReceiverType, mAttribute_mModifierName, mAttribute_mKind, mAttribute_mActualParameterList, mAttribute_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @selfModifierCallInstructionForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfModifierCallInstructionForGeneration ("selfModifierCallInstructionForGeneration",
                                                                 & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfModifierCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfModifierCallInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfModifierCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfModifierCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfModifierCallInstructionForGeneration GALGAS_selfModifierCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfModifierCallInstructionForGeneration result ;
  const GALGAS_selfModifierCallInstructionForGeneration * p = (const GALGAS_selfModifierCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfModifierCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfModifierCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_semanticBlockInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_semanticBlockInstructionForGeneration * p = (const cPtr_semanticBlockInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_semanticBlockInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_semanticBlockInstructionForGeneration::objectCompare (const GALGAS_semanticBlockInstructionForGeneration & inOperand) const {
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

GALGAS_semanticBlockInstructionForGeneration::GALGAS_semanticBlockInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticBlockInstructionForGeneration GALGAS_semanticBlockInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_semanticBlockInstructionForGeneration::constructor_new (GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticBlockInstructionForGeneration::GALGAS_semanticBlockInstructionForGeneration (const cPtr_semanticBlockInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticBlockInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticBlockInstructionForGeneration GALGAS_semanticBlockInstructionForGeneration::constructor_new (const GALGAS_semanticInstructionListForGeneration & inAttribute_mInstructionList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticBlockInstructionForGeneration result ;
  if (inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_semanticBlockInstructionForGeneration (inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticBlockInstructionForGeneration::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticBlockInstructionForGeneration * p = (const cPtr_semanticBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticBlockInstructionForGeneration) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_semanticBlockInstructionForGeneration::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @semanticBlockInstructionForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticBlockInstructionForGeneration::cPtr_semanticBlockInstructionForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_semanticBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

void cPtr_semanticBlockInstructionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@semanticBlockInstructionForGeneration:" ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_semanticBlockInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_semanticBlockInstructionForGeneration (mAttribute_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @semanticBlockInstructionForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ("semanticBlockInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticBlockInstructionForGeneration GALGAS_semanticBlockInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticBlockInstructionForGeneration result ;
  const GALGAS_semanticBlockInstructionForGeneration * p = (const GALGAS_semanticBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_setterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverCppName.objectCompare (p->mAttribute_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverBaseName.objectCompare (p->mAttribute_mReceiverBaseName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverStructAttributes.objectCompare (p->mAttribute_mReceiverStructAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCastType.objectCompare (p->mAttribute_mCastType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModifierName.objectCompare (p->mAttribute_mModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (p->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMethodBaseType.objectCompare (p->mAttribute_mMethodBaseType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_setterCallInstructionForGeneration::objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const {
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

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (const cPtr_setterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                      const GALGAS_string & inAttribute_mReceiverBaseName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mReceiverStructAttributes,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mCastType,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                      const GALGAS_lstring & inAttribute_mModifierName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverBaseName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mCastType.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mModifierName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverBaseName, inAttribute_mReceiverStructAttributes, inAttribute_mCastType, inAttribute_mReceiverType, inAttribute_mModifierName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_setterCallInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_setterCallInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterCallInstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_setterCallInstructionForGeneration::reader_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterCallInstructionForGeneration::reader_mReceiverBaseName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverBaseName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_setterCallInstructionForGeneration::reader_mReceiverBaseName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverBaseName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_setterCallInstructionForGeneration::reader_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverStructAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_setterCallInstructionForGeneration::reader_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverStructAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::reader_mCastType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mCastType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::reader_mCastType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionForGeneration::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionForGeneration::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_setterCallInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cPtr_setterCallInstructionForGeneration::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_setterCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_setterCallInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_setterCallInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_setterCallInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::reader_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mMethodBaseType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::reader_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodBaseType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @setterCallInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_setterCallInstructionForGeneration::cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_string & in_mReceiverCppName,
                                                                                  const GALGAS_string & in_mReceiverBaseName,
                                                                                  const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mCastType,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                  const GALGAS_lstring & in_mModifierName,
                                                                                  const GALGAS_methodKind & in_mKind,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mMethodBaseType
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverCppName (in_mReceiverCppName),
mAttribute_mReceiverBaseName (in_mReceiverBaseName),
mAttribute_mReceiverStructAttributes (in_mReceiverStructAttributes),
mAttribute_mCastType (in_mCastType),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mModifierName (in_mModifierName),
mAttribute_mKind (in_mKind),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mMethodBaseType (in_mMethodBaseType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_setterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

void cPtr_setterCallInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@setterCallInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverBaseName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverStructAttributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCastType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_setterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setterCallInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverCppName, mAttribute_mReceiverBaseName, mAttribute_mReceiverStructAttributes, mAttribute_mCastType, mAttribute_mReceiverType, mAttribute_mModifierName, mAttribute_mKind, mAttribute_mActualParameterList, mAttribute_mHasCompilerArgument, mAttribute_mMethodBaseType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @setterCallInstructionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ("setterCallInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  const GALGAS_setterCallInstructionForGeneration * p = (const GALGAS_setterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structuredCastInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCastBranchList.objectCompare (p->mAttribute_mCastBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (const cPtr_structuredCastInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_structuredCastInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_structuredCastInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_structuredCastInstructionForGeneration::reader_mCastBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mAttribute_mCastBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration cPtr_structuredCastInstructionForGeneration::reader_mCastBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_structuredCastInstructionForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_structuredCastInstructionForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @structuredCastInstructionForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structuredCastInstructionForGeneration::cPtr_structuredCastInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                          const GALGAS_castInstructionBranchListForGeneration & in_mCastBranchList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mCastBranchList (in_mCastBranchList),
mAttribute_mElseInstructionList (in_mElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structuredCastInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;
}

void cPtr_structuredCastInstructionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@structuredCastInstructionForGeneration:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCastBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structuredCastInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structuredCastInstructionForGeneration (mAttribute_mExpression, mAttribute_mCastBranchList, mAttribute_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @structuredCastInstructionForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ("structuredCastInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structuredCastInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_switchInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mEnumType.objectCompare (p->mAttribute_mEnumType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSwitchExpression.objectCompare (p->mAttribute_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranches.objectCompare (p->mAttribute_mBranches) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_switchInstructionForGeneration::objectCompare (const GALGAS_switchInstructionForGeneration & inOperand) const {
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

GALGAS_switchInstructionForGeneration::GALGAS_switchInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionForGeneration::GALGAS_switchInstructionForGeneration (const cPtr_switchInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionForGeneration GALGAS_switchInstructionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mEnumType,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mSwitchExpression,
                                                                                              const GALGAS_switchBranchesForGeneration & inAttribute_mBranches
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration result ;
  if (inAttribute_mEnumType.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mBranches.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionForGeneration (inAttribute_mEnumType, inAttribute_mSwitchExpression, inAttribute_mBranches COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_switchInstructionForGeneration::reader_mEnumType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    result = p->mAttribute_mEnumType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_switchInstructionForGeneration::reader_mEnumType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_switchInstructionForGeneration::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    result = p->mAttribute_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_switchInstructionForGeneration::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchInstructionForGeneration::reader_mBranches (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    result = p->mAttribute_mBranches ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration cPtr_switchInstructionForGeneration::reader_mBranches (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranches ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @switchInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_switchInstructionForGeneration::cPtr_switchInstructionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumType,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                          const GALGAS_switchBranchesForGeneration & in_mBranches
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mEnumType (in_mEnumType),
mAttribute_mSwitchExpression (in_mSwitchExpression),
mAttribute_mBranches (in_mBranches) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_switchInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

void cPtr_switchInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@switchInstructionForGeneration:" ;
  mAttribute_mEnumType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranches.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_switchInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionForGeneration (mAttribute_mEnumType, mAttribute_mSwitchExpression, mAttribute_mBranches COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @switchInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionForGeneration ("switchInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionForGeneration GALGAS_switchInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration result ;
  const GALGAS_switchInstructionForGeneration * p = (const GALGAS_switchInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_syntaxInstructionForGeneration::objectCompare (const GALGAS_syntaxInstructionForGeneration & inOperand) const {
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

GALGAS_syntaxInstructionForGeneration::GALGAS_syntaxInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionForGeneration::GALGAS_syntaxInstructionForGeneration (const cPtr_syntaxInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syntaxInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxInstructionForGeneration * p = (const cPtr_syntaxInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syntaxInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @syntaxInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (const GALGAS_location & in_mInstructionLocation
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syntaxInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ("syntaxInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionForGeneration GALGAS_syntaxInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionForGeneration result ;
  const GALGAS_syntaxInstructionForGeneration * p = (const GALGAS_syntaxInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_nonterminalInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalName.objectCompare (p->mAttribute_mNonterminalName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabelName.objectCompare (p->mAttribute_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_nonterminalInstructionForGeneration::objectCompare (const GALGAS_nonterminalInstructionForGeneration & inOperand) const {
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

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (const cPtr_nonterminalInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_string & inAttribute_mNonterminalName,
                                                                                                        const GALGAS_string & inAttribute_mLabelName,
                                                                                                        const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mNonterminalName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_nonterminalInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mNonterminalName, inAttribute_mLabelName, inAttribute_mActualParameterList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_nonterminalInstructionForGeneration::reader_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mAttribute_mNonterminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_nonterminalInstructionForGeneration::reader_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_nonterminalInstructionForGeneration::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mAttribute_mLabelName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_nonterminalInstructionForGeneration::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_nonterminalInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_nonterminalInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_nonterminalInstructionForGeneration::reader_mGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_nonterminalInstructionForGeneration::reader_mGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @nonterminalInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mNonterminalName,
                                                                                    const GALGAS_string & in_mLabelName,
                                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mNonterminalName (in_mNonterminalName),
mAttribute_mLabelName (in_mLabelName),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult (in_mGrammarInstructionSyntaxDirectedTranslationResult) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_nonterminalInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

void cPtr_nonterminalInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@nonterminalInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_nonterminalInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_nonterminalInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mNonterminalName, mAttribute_mLabelName, mAttribute_mActualParameterList, mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @nonterminalInstructionForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration result ;
  const GALGAS_nonterminalInstructionForGeneration * p = (const GALGAS_nonterminalInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_parseLoopInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariantExpression.objectCompare (p->mAttribute_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhileExpression.objectCompare (p->mAttribute_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_parseLoopInstructionForGeneration::objectCompare (const GALGAS_parseLoopInstructionForGeneration & inOperand) const {
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

GALGAS_parseLoopInstructionForGeneration::GALGAS_parseLoopInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseLoopInstructionForGeneration::GALGAS_parseLoopInstructionForGeneration (const cPtr_parseLoopInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseLoopInstructionForGeneration GALGAS_parseLoopInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mVariantExpression,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mWhileExpression,
                                                                                                    const GALGAS_semanticInstructionListForGeneration & inAttribute_mInstructionList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseLoopInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mWhileExpression, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::reader_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    result = p->mAttribute_mVariantExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_parseLoopInstructionForGeneration::reader_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariantExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::reader_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    result = p->mAttribute_mWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_parseLoopInstructionForGeneration::reader_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_parseLoopInstructionForGeneration::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_parseLoopInstructionForGeneration::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @parseLoopInstructionForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_parseLoopInstructionForGeneration::cPtr_parseLoopInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mVariantExpression (in_mVariantExpression),
mAttribute_mWhileExpression (in_mWhileExpression),
mAttribute_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_parseLoopInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;
}

void cPtr_parseLoopInstructionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@parseLoopInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_parseLoopInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseLoopInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mVariantExpression, mAttribute_mWhileExpression, mAttribute_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @parseLoopInstructionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ("parseLoopInstructionForGeneration",
                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parseLoopInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parseLoopInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseLoopInstructionForGeneration GALGAS_parseLoopInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstructionForGeneration result ;
  const GALGAS_parseLoopInstructionForGeneration * p = (const GALGAS_parseLoopInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseLoopInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_parseRewindInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseRewindInstructionForGeneration * p = (const cPtr_parseRewindInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListOfSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_parseRewindInstructionForGeneration::objectCompare (const GALGAS_parseRewindInstructionForGeneration & inOperand) const {
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

GALGAS_parseRewindInstructionForGeneration::GALGAS_parseRewindInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_parseRewindInstructionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstructionForGeneration::GALGAS_parseRewindInstructionForGeneration (const cPtr_parseRewindInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseRewindInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_parseRewindInstructionForGeneration::reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseRewindInstructionForGeneration * p = (const cPtr_parseRewindInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
    result = p->mAttribute_mListOfSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration cPtr_parseRewindInstructionForGeneration::reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListOfSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @parseRewindInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_parseRewindInstructionForGeneration::cPtr_parseRewindInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_parseRewindInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

void cPtr_parseRewindInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@parseRewindInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_parseRewindInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseRewindInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @parseRewindInstructionForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ("parseRewindInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parseRewindInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parseRewindInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration result ;
  const GALGAS_parseRewindInstructionForGeneration * p = (const GALGAS_parseRewindInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseRewindInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_parseWhenInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhenExpression.objectCompare (p->mAttribute_mWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_parseWhenInstructionForGeneration::objectCompare (const GALGAS_parseWhenInstructionForGeneration & inOperand) const {
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

GALGAS_parseWhenInstructionForGeneration::GALGAS_parseWhenInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseWhenInstructionForGeneration::GALGAS_parseWhenInstructionForGeneration (const cPtr_parseWhenInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseWhenInstructionForGeneration GALGAS_parseWhenInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mWhenExpression,
                                                                                                    const GALGAS_semanticInstructionListForGeneration & inAttribute_mInstructionList,
                                                                                                    const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mWhenExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseWhenInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mWhenExpression, inAttribute_mInstructionList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_parseWhenInstructionForGeneration::reader_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    result = p->mAttribute_mWhenExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_parseWhenInstructionForGeneration::reader_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhenExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_parseWhenInstructionForGeneration::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_parseWhenInstructionForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @parseWhenInstructionForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_parseWhenInstructionForGeneration::cPtr_parseWhenInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mWhenExpression,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mWhenExpression (in_mWhenExpression),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_parseWhenInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;
}

void cPtr_parseWhenInstructionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@parseWhenInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_parseWhenInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseWhenInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mWhenExpression, mAttribute_mInstructionList, mAttribute_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @parseWhenInstructionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ("parseWhenInstructionForGeneration",
                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parseWhenInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parseWhenInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseWhenInstructionForGeneration GALGAS_parseWhenInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstructionForGeneration result ;
  const GALGAS_parseWhenInstructionForGeneration * p = (const GALGAS_parseWhenInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseWhenInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_repeatInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponentName.objectCompare (p->mAttribute_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mChoiceIndex.objectCompare (p->mAttribute_mChoiceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_repeated_5F_instructionList.objectCompare (p->mAttribute_m_5F_repeated_5F_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfRepeatedInstructions.objectCompare (p->mAttribute_mEndOfRepeatedInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListOfSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_repeatInstructionForGeneration::objectCompare (const GALGAS_repeatInstructionForGeneration & inOperand) const {
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

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_repeatInstructionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE),
                                                                 GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE),
                                                                 GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (const cPtr_repeatInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                              const GALGAS_uint & inAttribute_mChoiceIndex,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_m_5F_repeated_5F_instructionList,
                                                                                              const GALGAS_location & inAttribute_mEndOfRepeatedInstructions,
                                                                                              const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mChoiceIndex.isValid () && inAttribute_m_5F_repeated_5F_instructionList.isValid () && inAttribute_mEndOfRepeatedInstructions.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mSyntaxComponentName, inAttribute_mChoiceIndex, inAttribute_m_5F_repeated_5F_instructionList, inAttribute_mEndOfRepeatedInstructions, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_repeatInstructionForGeneration::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mAttribute_mSyntaxComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_repeatInstructionForGeneration::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_repeatInstructionForGeneration::reader_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mAttribute_mChoiceIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_repeatInstructionForGeneration::reader_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mChoiceIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_repeatInstructionForGeneration::reader_m_5F_repeated_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mAttribute_m_5F_repeated_5F_instructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_repeatInstructionForGeneration::reader_m_5F_repeated_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_repeated_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_repeatInstructionForGeneration::reader_mEndOfRepeatedInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mAttribute_mEndOfRepeatedInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_repeatInstructionForGeneration::reader_mEndOfRepeatedInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRepeatedInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_repeatInstructionForGeneration::reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mAttribute_mListOfSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration cPtr_repeatInstructionForGeneration::reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListOfSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @repeatInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_uint & in_mChoiceIndex,
                                                                          const GALGAS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                          const GALGAS_location & in_mEndOfRepeatedInstructions,
                                                                          const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mSyntaxComponentName (in_mSyntaxComponentName),
mAttribute_mChoiceIndex (in_mChoiceIndex),
mAttribute_m_5F_repeated_5F_instructionList (in_m_5F_repeated_5F_instructionList),
mAttribute_mEndOfRepeatedInstructions (in_mEndOfRepeatedInstructions),
mAttribute_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_repeatInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

void cPtr_repeatInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@repeatInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_repeated_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfRepeatedInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_repeatInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_repeatInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mSyntaxComponentName, mAttribute_mChoiceIndex, mAttribute_m_5F_repeated_5F_instructionList, mAttribute_mEndOfRepeatedInstructions, mAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @repeatInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_repeatInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration result ;
  const GALGAS_repeatInstructionForGeneration * p = (const GALGAS_repeatInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_repeatInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selectInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponentName.objectCompare (p->mAttribute_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mChoiceIndex.objectCompare (p->mAttribute_mChoiceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListOfSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selectInstructionForGeneration::objectCompare (const GALGAS_selectInstructionForGeneration & inOperand) const {
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

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectInstructionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE),
                                                                 GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                              const GALGAS_uint & inAttribute_mChoiceIndex,
                                                                                              const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mChoiceIndex.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mSyntaxComponentName, inAttribute_mChoiceIndex, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectInstructionForGeneration::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    result = p->mAttribute_mSyntaxComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_selectInstructionForGeneration::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_selectInstructionForGeneration::reader_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    result = p->mAttribute_mChoiceIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_selectInstructionForGeneration::reader_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mChoiceIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_selectInstructionForGeneration::reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    result = p->mAttribute_mListOfSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration cPtr_selectInstructionForGeneration::reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListOfSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @selectInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_uint & in_mChoiceIndex,
                                                                          const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mSyntaxComponentName (in_mSyntaxComponentName),
mAttribute_mChoiceIndex (in_mChoiceIndex),
mAttribute_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selectInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

void cPtr_selectInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@selectInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selectInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mSyntaxComponentName, mAttribute_mChoiceIndex, mAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @selectInstructionForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration result ;
  const GALGAS_selectInstructionForGeneration * p = (const GALGAS_selectInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_syntaxSendInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syntaxSendInstructionForGeneration * p = (const cPtr_syntaxSendInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syntaxSendInstructionForGeneration::objectCompare (const GALGAS_syntaxSendInstructionForGeneration & inOperand) const {
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

GALGAS_syntaxSendInstructionForGeneration::GALGAS_syntaxSendInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxSendInstructionForGeneration::GALGAS_syntaxSendInstructionForGeneration (const cPtr_syntaxSendInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxSendInstructionForGeneration GALGAS_syntaxSendInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_syntaxSendInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxSendInstructionForGeneration * p = (const cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_syntaxSendInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @syntaxSendInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syntaxSendInstructionForGeneration::cPtr_syntaxSendInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syntaxSendInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

void cPtr_syntaxSendInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@syntaxSendInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syntaxSendInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syntaxSendInstructionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ("syntaxSendInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxSendInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxSendInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxSendInstructionForGeneration GALGAS_syntaxSendInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstructionForGeneration result ;
  const GALGAS_syntaxSendInstructionForGeneration * p = (const GALGAS_syntaxSendInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxSendInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_terminalCheckInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalName.objectCompare (p->mAttribute_mTerminalName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueIdentifier.objectCompare (p->mAttribute_mLexiqueIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalCheckAssignementList.objectCompare (p->mAttribute_mTerminalCheckAssignementList) ;
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


typeComparisonResult GALGAS_terminalCheckInstructionForGeneration::objectCompare (const GALGAS_terminalCheckInstructionForGeneration & inOperand) const {
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

GALGAS_terminalCheckInstructionForGeneration::GALGAS_terminalCheckInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckInstructionForGeneration::GALGAS_terminalCheckInstructionForGeneration (const cPtr_terminalCheckInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckInstructionForGeneration GALGAS_terminalCheckInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_lstring & inAttribute_mTerminalName,
                                                                                                            const GALGAS_string & inAttribute_mLexiqueIdentifier,
                                                                                                            const GALGAS_terminalCheckAssignementList & inAttribute_mTerminalCheckAssignementList,
                                                                                                            const GALGAS__32_lstringlist & inAttribute_mIndexingKeyList,
                                                                                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTerminalName.isValid () && inAttribute_mLexiqueIdentifier.isValid () && inAttribute_mTerminalCheckAssignementList.isValid () && inAttribute_mIndexingKeyList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_terminalCheckInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mTerminalName, inAttribute_mLexiqueIdentifier, inAttribute_mTerminalCheckAssignementList, inAttribute_mIndexingKeyList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalCheckInstructionForGeneration::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    result = p->mAttribute_mTerminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_terminalCheckInstructionForGeneration::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckInstructionForGeneration::reader_mLexiqueIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    result = p->mAttribute_mLexiqueIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_terminalCheckInstructionForGeneration::reader_mLexiqueIdentifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckInstructionForGeneration::reader_mTerminalCheckAssignementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    result = p->mAttribute_mTerminalCheckAssignementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList cPtr_terminalCheckInstructionForGeneration::reader_mTerminalCheckAssignementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalCheckAssignementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_terminalCheckInstructionForGeneration::reader_mIndexingKeyList (UNUSED_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    result = p->mAttribute_mIndexingKeyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist cPtr_terminalCheckInstructionForGeneration::reader_mIndexingKeyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingKeyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstructionForGeneration::reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    result = p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_terminalCheckInstructionForGeneration::reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstructionForGeneration::reader_mGrammarInstructionSyntaxDirectedTranslationToken (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    result = p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_terminalCheckInstructionForGeneration::reader_mGrammarInstructionSyntaxDirectedTranslationToken (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @terminalCheckInstructionForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_lstring & in_mTerminalName,
                                                                                        const GALGAS_string & in_mLexiqueIdentifier,
                                                                                        const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                                                        const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mAttribute_mTerminalName (in_mTerminalName),
mAttribute_mLexiqueIdentifier (in_mLexiqueIdentifier),
mAttribute_mTerminalCheckAssignementList (in_mTerminalCheckAssignementList),
mAttribute_mIndexingKeyList (in_mIndexingKeyList),
mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor),
mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken (in_mGrammarInstructionSyntaxDirectedTranslationToken) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_terminalCheckInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

void cPtr_terminalCheckInstructionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@terminalCheckInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalCheckAssignementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_terminalCheckInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_terminalCheckInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mTerminalName, mAttribute_mLexiqueIdentifier, mAttribute_mTerminalCheckAssignementList, mAttribute_mIndexingKeyList, mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @terminalCheckInstructionForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ("terminalCheckInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalCheckInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalCheckInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckInstructionForGeneration GALGAS_terminalCheckInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstructionForGeneration result ;
  const GALGAS_terminalCheckInstructionForGeneration * p = (const GALGAS_terminalCheckInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalCheckInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeMethodInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodInstructionForGeneration * p = (const cPtr_typeMethodInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMethodName.objectCompare (p->mAttribute_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (p->mAttribute_mHasCompilerArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeMethodInstructionForGeneration::objectCompare (const GALGAS_typeMethodInstructionForGeneration & inOperand) const {
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

GALGAS_typeMethodInstructionForGeneration::GALGAS_typeMethodInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodInstructionForGeneration GALGAS_typeMethodInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeMethodInstructionForGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_actualParameterListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodInstructionForGeneration::GALGAS_typeMethodInstructionForGeneration (const cPtr_typeMethodInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodInstructionForGeneration GALGAS_typeMethodInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                      const GALGAS_lstring & inAttribute_mMethodName,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodInstructionForGeneration result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodInstructionForGeneration (inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeMethodInstructionForGeneration::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodInstructionForGeneration * p = (const cPtr_typeMethodInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodInstructionForGeneration) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeMethodInstructionForGeneration::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeMethodInstructionForGeneration::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodInstructionForGeneration * p = (const cPtr_typeMethodInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodInstructionForGeneration) ;
    result = p->mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeMethodInstructionForGeneration::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_typeMethodInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodInstructionForGeneration * p = (const cPtr_typeMethodInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_typeMethodInstructionForGeneration::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeMethodInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodInstructionForGeneration * p = (const cPtr_typeMethodInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodInstructionForGeneration) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_typeMethodInstructionForGeneration::reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @typeMethodInstructionForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeMethodInstructionForGeneration::cPtr_typeMethodInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                                                  const GALGAS_lstring & in_mMethodName,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mMethodName (in_mMethodName),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeMethodInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodInstructionForGeneration ;
}

void cPtr_typeMethodInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@typeMethodInstructionForGeneration:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeMethodInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeMethodInstructionForGeneration (mAttribute_mTypeName, mAttribute_mMethodName, mAttribute_mActualParameterList, mAttribute_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @typeMethodInstructionForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodInstructionForGeneration ("typeMethodInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeMethodInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeMethodInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodInstructionForGeneration GALGAS_typeMethodInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodInstructionForGeneration result ;
  const GALGAS_typeMethodInstructionForGeneration * p = (const GALGAS_typeMethodInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_warningInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUseLocationReader.objectCompare (p->mAttribute_mUseLocationReader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarningExpression.objectCompare (p->mAttribute_mWarningExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_warningInstructionForGeneration::objectCompare (const GALGAS_warningInstructionForGeneration & inOperand) const {
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

GALGAS_warningInstructionForGeneration::GALGAS_warningInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_warningInstructionForGeneration::GALGAS_warningInstructionForGeneration (const cPtr_warningInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_warningInstructionForGeneration GALGAS_warningInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                const GALGAS_bool & inAttribute_mUseLocationReader,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mWarningExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mUseLocationReader.isValid () && inAttribute_mWarningExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_warningInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mUseLocationReader, inAttribute_mWarningExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_warningInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_warningInstructionForGeneration::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_warningInstructionForGeneration::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_warningInstructionForGeneration::reader_mUseLocationReader (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mAttribute_mUseLocationReader ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_warningInstructionForGeneration::reader_mUseLocationReader (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUseLocationReader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::reader_mWarningExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mAttribute_mWarningExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_warningInstructionForGeneration::reader_mWarningExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarningExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @warningInstructionForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_warningInstructionForGeneration::cPtr_warningInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                            const GALGAS_bool & in_mUseLocationReader,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mWarningExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mUseLocationReader (in_mUseLocationReader),
mAttribute_mWarningExpression (in_mWarningExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_warningInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

void cPtr_warningInstructionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@warningInstructionForGeneration:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUseLocationReader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWarningExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_warningInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_warningInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverExpression, mAttribute_mUseLocationReader, mAttribute_mWarningExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @warningInstructionForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionForGeneration ("warningInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_warningInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_warningInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_warningInstructionForGeneration GALGAS_warningInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration result ;
  const GALGAS_warningInstructionForGeneration * p = (const GALGAS_warningInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_warningInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_semanticsComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_semanticsComponentAST * p = (const cPtr_semanticsComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_semanticsComponentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticsComponentName.objectCompare (p->mAttribute_mSemanticsComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImportedComponentFileNameList.objectCompare (p->mAttribute_mImportedComponentFileNameList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticDeclarationList.objectCompare (p->mAttribute_mSemanticDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSourceFile.objectCompare (p->mAttribute_mEndOfSourceFile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_semanticsComponentAST::objectCompare (const GALGAS_semanticsComponentAST & inOperand) const {
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

GALGAS_semanticsComponentAST::GALGAS_semanticsComponentAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticsComponentAST GALGAS_semanticsComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_semanticsComponentAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE),
                                                        GALGAS_semanticDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticsComponentAST::GALGAS_semanticsComponentAST (const cPtr_semanticsComponentAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticsComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticsComponentAST GALGAS_semanticsComponentAST::constructor_new (const GALGAS_lstring & inAttribute_mSemanticsComponentName,
                                                                            const GALGAS_lstringlist & inAttribute_mImportedComponentFileNameList,
                                                                            const GALGAS_semanticDeclarationListAST & inAttribute_mSemanticDeclarationList,
                                                                            const GALGAS_location & inAttribute_mEndOfSourceFile
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticsComponentAST result ;
  if (inAttribute_mSemanticsComponentName.isValid () && inAttribute_mImportedComponentFileNameList.isValid () && inAttribute_mSemanticDeclarationList.isValid () && inAttribute_mEndOfSourceFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_semanticsComponentAST (inAttribute_mSemanticsComponentName, inAttribute_mImportedComponentFileNameList, inAttribute_mSemanticDeclarationList, inAttribute_mEndOfSourceFile COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_semanticsComponentAST::reader_mSemanticsComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticsComponentAST * p = (const cPtr_semanticsComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticsComponentAST) ;
    result = p->mAttribute_mSemanticsComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_semanticsComponentAST::reader_mSemanticsComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticsComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_semanticsComponentAST::reader_mImportedComponentFileNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticsComponentAST * p = (const cPtr_semanticsComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticsComponentAST) ;
    result = p->mAttribute_mImportedComponentFileNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_semanticsComponentAST::reader_mImportedComponentFileNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedComponentFileNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticsComponentAST::reader_mSemanticDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticsComponentAST * p = (const cPtr_semanticsComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticsComponentAST) ;
    result = p->mAttribute_mSemanticDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST cPtr_semanticsComponentAST::reader_mSemanticDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_semanticsComponentAST::reader_mEndOfSourceFile (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticsComponentAST * p = (const cPtr_semanticsComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticsComponentAST) ;
    result = p->mAttribute_mEndOfSourceFile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_semanticsComponentAST::reader_mEndOfSourceFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSourceFile ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @semanticsComponentAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticsComponentAST::cPtr_semanticsComponentAST (const GALGAS_lstring & in_mSemanticsComponentName,
                                                        const GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                                        const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                                        const GALGAS_location & in_mEndOfSourceFile
                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSemanticsComponentName (in_mSemanticsComponentName),
mAttribute_mImportedComponentFileNameList (in_mImportedComponentFileNameList),
mAttribute_mSemanticDeclarationList (in_mSemanticDeclarationList),
mAttribute_mEndOfSourceFile (in_mEndOfSourceFile) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_semanticsComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticsComponentAST ;
}

void cPtr_semanticsComponentAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@semanticsComponentAST:" ;
  mAttribute_mSemanticsComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImportedComponentFileNameList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSourceFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_semanticsComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_semanticsComponentAST (mAttribute_mSemanticsComponentName, mAttribute_mImportedComponentFileNameList, mAttribute_mSemanticDeclarationList, mAttribute_mEndOfSourceFile COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @semanticsComponentAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticsComponentAST ("semanticsComponentAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticsComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticsComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticsComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticsComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticsComponentAST GALGAS_semanticsComponentAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticsComponentAST result ;
  const GALGAS_semanticsComponentAST * p = (const GALGAS_semanticsComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticsComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticsComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_syntaxInstructionAST::objectCompare (const GALGAS_syntaxInstructionAST & inOperand) const {
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

GALGAS_syntaxInstructionAST::GALGAS_syntaxInstructionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionAST::GALGAS_syntaxInstructionAST (const cPtr_syntaxInstructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syntaxInstructionAST::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxInstructionAST * p = (const cPtr_syntaxInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionAST) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syntaxInstructionAST::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @syntaxInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syntaxInstructionAST::cPtr_syntaxInstructionAST (const GALGAS_location & in_mInstructionLocation
                                                      COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @syntaxInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionAST ("syntaxInstructionAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionAST result ;
  const GALGAS_syntaxInstructionAST * p = (const GALGAS_syntaxInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_nonterminalCallInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_nonterminalCallInstruction * p = (const cPtr_nonterminalCallInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalName.objectCompare (p->mAttribute_mNonterminalName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabelName.objectCompare (p->mAttribute_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_nonterminalCallInstruction::objectCompare (const GALGAS_nonterminalCallInstruction & inOperand) const {
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

GALGAS_nonterminalCallInstruction::GALGAS_nonterminalCallInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalCallInstruction::GALGAS_nonterminalCallInstruction (const cPtr_nonterminalCallInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalCallInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalCallInstruction GALGAS_nonterminalCallInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                      const GALGAS_lstring & inAttribute_mNonterminalName,
                                                                                      const GALGAS_lstring & inAttribute_mLabelName,
                                                                                      const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                      const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalCallInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mNonterminalName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_nonterminalCallInstruction (inAttribute_mInstructionLocation, inAttribute_mNonterminalName, inAttribute_mLabelName, inAttribute_mActualParameterList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalCallInstruction::reader_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalCallInstruction * p = (const cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    result = p->mAttribute_mNonterminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_nonterminalCallInstruction::reader_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalCallInstruction::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalCallInstruction * p = (const cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    result = p->mAttribute_mLabelName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_nonterminalCallInstruction::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_nonterminalCallInstruction::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalCallInstruction * p = (const cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_nonterminalCallInstruction::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_nonterminalCallInstruction::reader_mGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalCallInstruction * p = (const cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    result = p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_nonterminalCallInstruction::reader_mGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @nonterminalCallInstruction class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_nonterminalCallInstruction::cPtr_nonterminalCallInstruction (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_lstring & in_mNonterminalName,
                                                                  const GALGAS_lstring & in_mLabelName,
                                                                  const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mNonterminalName (in_mNonterminalName),
mAttribute_mLabelName (in_mLabelName),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult (in_mGrammarInstructionSyntaxDirectedTranslationResult) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_nonterminalCallInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

void cPtr_nonterminalCallInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@nonterminalCallInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_nonterminalCallInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_nonterminalCallInstruction (mAttribute_mInstructionLocation, mAttribute_mNonterminalName, mAttribute_mLabelName, mAttribute_mActualParameterList, mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @nonterminalCallInstruction type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalCallInstruction ("nonterminalCallInstruction",
                                                   & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalCallInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalCallInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalCallInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalCallInstruction GALGAS_nonterminalCallInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalCallInstruction result ;
  const GALGAS_nonterminalCallInstruction * p = (const GALGAS_nonterminalCallInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalCallInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_parseLoopInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariantExpression.objectCompare (p->mAttribute_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfVariantExpression.objectCompare (p->mAttribute_mEndOfVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhileExpression.objectCompare (p->mAttribute_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfWhileExpression.objectCompare (p->mAttribute_mEndOfWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfInstructionList.objectCompare (p->mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_parseLoopInstruction::objectCompare (const GALGAS_parseLoopInstruction & inOperand) const {
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

GALGAS_parseLoopInstruction::GALGAS_parseLoopInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseLoopInstruction::GALGAS_parseLoopInstruction (const cPtr_parseLoopInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseLoopInstruction GALGAS_parseLoopInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mVariantExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfVariantExpression,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mWhileExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfWhileExpression,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mDoInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mEndOfVariantExpression.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOfWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOfInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseLoopInstruction (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mEndOfVariantExpression, inAttribute_mWhileExpression, inAttribute_mEndOfWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOfInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_parseLoopInstruction::reader_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mAttribute_mVariantExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_parseLoopInstruction::reader_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariantExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_parseLoopInstruction::reader_mEndOfVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mAttribute_mEndOfVariantExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_parseLoopInstruction::reader_mEndOfVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfVariantExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_parseLoopInstruction::reader_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mAttribute_mWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_parseLoopInstruction::reader_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_parseLoopInstruction::reader_mEndOfWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mAttribute_mEndOfWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_parseLoopInstruction::reader_mEndOfWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_parseLoopInstruction::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList cPtr_parseLoopInstruction::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_parseLoopInstruction::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mAttribute_mEndOfInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_parseLoopInstruction::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @parseLoopInstruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_parseLoopInstruction::cPtr_parseLoopInstruction (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                                      const GALGAS_location & in_mEndOfVariantExpression,
                                                      const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                                      const GALGAS_location & in_mEndOfWhileExpression,
                                                      const GALGAS_syntaxInstructionList & in_mDoInstructionList,
                                                      const GALGAS_location & in_mEndOfInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mVariantExpression (in_mVariantExpression),
mAttribute_mEndOfVariantExpression (in_mEndOfVariantExpression),
mAttribute_mWhileExpression (in_mWhileExpression),
mAttribute_mEndOfWhileExpression (in_mEndOfWhileExpression),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mEndOfInstructionList (in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_parseLoopInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

void cPtr_parseLoopInstruction::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@parseLoopInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_parseLoopInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseLoopInstruction (mAttribute_mInstructionLocation, mAttribute_mVariantExpression, mAttribute_mEndOfVariantExpression, mAttribute_mWhileExpression, mAttribute_mEndOfWhileExpression, mAttribute_mDoInstructionList, mAttribute_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @parseLoopInstruction type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstruction ("parseLoopInstruction",
                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parseLoopInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parseLoopInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseLoopInstruction GALGAS_parseLoopInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstruction result ;
  const GALGAS_parseLoopInstruction * p = (const GALGAS_parseLoopInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseLoopInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_parseRewindInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseRewindInstruction * p = (const cPtr_parseRewindInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParseRewindBranchList.objectCompare (p->mAttribute_mParseRewindBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfParseDoInstruction.objectCompare (p->mAttribute_mEndOfParseDoInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_parseRewindInstruction::objectCompare (const GALGAS_parseRewindInstruction & inOperand) const {
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

GALGAS_parseRewindInstruction::GALGAS_parseRewindInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_parseRewindInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_listOfSyntaxInstructionList::constructor_emptyList (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstruction::GALGAS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                              const GALGAS_listOfSyntaxInstructionList & inAttribute_mParseRewindBranchList,
                                                                              const GALGAS_location & inAttribute_mEndOfParseDoInstruction
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mParseRewindBranchList.isValid () && inAttribute_mEndOfParseDoInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseRewindInstruction (inAttribute_mInstructionLocation, inAttribute_mParseRewindBranchList, inAttribute_mEndOfParseDoInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_parseRewindInstruction::reader_mParseRewindBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseRewindInstruction * p = (const cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    result = p->mAttribute_mParseRewindBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList cPtr_parseRewindInstruction::reader_mParseRewindBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParseRewindBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_parseRewindInstruction::reader_mEndOfParseDoInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseRewindInstruction * p = (const cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    result = p->mAttribute_mEndOfParseDoInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_parseRewindInstruction::reader_mEndOfParseDoInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfParseDoInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @parseRewindInstruction class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                          const GALGAS_location & in_mEndOfParseDoInstruction
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mParseRewindBranchList (in_mParseRewindBranchList),
mAttribute_mEndOfParseDoInstruction (in_mEndOfParseDoInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_parseRewindInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

void cPtr_parseRewindInstruction::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@parseRewindInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mParseRewindBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfParseDoInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_parseRewindInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseRewindInstruction (mAttribute_mInstructionLocation, mAttribute_mParseRewindBranchList, mAttribute_mEndOfParseDoInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @parseRewindInstruction type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstruction ("parseRewindInstruction",
                                               & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parseRewindInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parseRewindInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstruction result ;
  const GALGAS_parseRewindInstruction * p = (const GALGAS_parseRewindInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseRewindInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_parseWhenInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhenExpression.objectCompare (p->mAttribute_mWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfWhenExpression.objectCompare (p->mAttribute_mEndOfWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhenInstructionList.objectCompare (p->mAttribute_mWhenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfWhenInstructionList.objectCompare (p->mAttribute_mEndOfWhenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfElseInstructionList.objectCompare (p->mAttribute_mEndOfElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_parseWhenInstruction::objectCompare (const GALGAS_parseWhenInstruction & inOperand) const {
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

GALGAS_parseWhenInstruction::GALGAS_parseWhenInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseWhenInstruction::GALGAS_parseWhenInstruction (const cPtr_parseWhenInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseWhenInstruction GALGAS_parseWhenInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mWhenExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfWhenExpression,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mWhenInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfWhenInstructionList,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mElseInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfElseInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mWhenExpression.isValid () && inAttribute_mEndOfWhenExpression.isValid () && inAttribute_mWhenInstructionList.isValid () && inAttribute_mEndOfWhenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseWhenInstruction (inAttribute_mInstructionLocation, inAttribute_mWhenExpression, inAttribute_mEndOfWhenExpression, inAttribute_mWhenInstructionList, inAttribute_mEndOfWhenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_parseWhenInstruction::reader_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mAttribute_mWhenExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_parseWhenInstruction::reader_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhenExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_parseWhenInstruction::reader_mEndOfWhenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mAttribute_mEndOfWhenExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_parseWhenInstruction::reader_mEndOfWhenExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfWhenExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_parseWhenInstruction::reader_mWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mAttribute_mWhenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList cPtr_parseWhenInstruction::reader_mWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_parseWhenInstruction::reader_mEndOfWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mAttribute_mEndOfWhenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_parseWhenInstruction::reader_mEndOfWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfWhenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_parseWhenInstruction::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList cPtr_parseWhenInstruction::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_parseWhenInstruction::reader_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mAttribute_mEndOfElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_parseWhenInstruction::reader_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @parseWhenInstruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mWhenExpression,
                                                      const GALGAS_location & in_mEndOfWhenExpression,
                                                      const GALGAS_syntaxInstructionList & in_mWhenInstructionList,
                                                      const GALGAS_location & in_mEndOfWhenInstructionList,
                                                      const GALGAS_syntaxInstructionList & in_mElseInstructionList,
                                                      const GALGAS_location & in_mEndOfElseInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mWhenExpression (in_mWhenExpression),
mAttribute_mEndOfWhenExpression (in_mEndOfWhenExpression),
mAttribute_mWhenInstructionList (in_mWhenInstructionList),
mAttribute_mEndOfWhenInstructionList (in_mEndOfWhenInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfElseInstructionList (in_mEndOfElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_parseWhenInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

void cPtr_parseWhenInstruction::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@parseWhenInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfWhenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_parseWhenInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseWhenInstruction (mAttribute_mInstructionLocation, mAttribute_mWhenExpression, mAttribute_mEndOfWhenExpression, mAttribute_mWhenInstructionList, mAttribute_mEndOfWhenInstructionList, mAttribute_mElseInstructionList, mAttribute_mEndOfElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @parseWhenInstruction type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstruction ("parseWhenInstruction",
                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parseWhenInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parseWhenInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parseWhenInstruction GALGAS_parseWhenInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstruction result ;
  const GALGAS_parseWhenInstruction * p = (const GALGAS_parseWhenInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseWhenInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_repeatInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatedInstructionList.objectCompare (p->mAttribute_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch.objectCompare (p->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatBranchList.objectCompare (p->mAttribute_mRepeatBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_repeat_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_repeat_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_repeatInstruction::objectCompare (const GALGAS_repeatInstruction & inOperand) const {
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

GALGAS_repeatInstruction::GALGAS_repeatInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstruction GALGAS_repeatInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_repeatInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_syntaxInstructionList::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_listOfSyntaxInstructionList::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstruction::GALGAS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstruction GALGAS_repeatInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_syntaxInstructionList & inAttribute_mRepeatedInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                                    const GALGAS_listOfSyntaxInstructionList & inAttribute_mRepeatBranchList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_repeat_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch.isValid () && inAttribute_mRepeatBranchList.isValid () && inAttribute_mEndOf_5F_repeat_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstruction (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, inAttribute_mRepeatBranchList, inAttribute_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_repeatInstruction::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mAttribute_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList cPtr_repeatInstruction::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_repeatInstruction::reader_mEndOf_5F_repeated_5F_instructions_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_repeatInstruction::reader_mEndOf_5F_repeated_5F_instructions_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_repeatInstruction::reader_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mAttribute_mRepeatBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList cPtr_repeatInstruction::reader_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_repeatInstruction::reader_mEndOf_5F_repeat_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mAttribute_mEndOf_5F_repeat_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_repeatInstruction::reader_mEndOf_5F_repeat_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_repeat_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @repeatInstruction class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_repeatInstruction::cPtr_repeatInstruction (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mRepeatedInstructionList (in_mRepeatedInstructionList),
mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch (in_mEndOf_5F_repeated_5F_instructions_5F_branch),
mAttribute_mRepeatBranchList (in_mRepeatBranchList),
mAttribute_mEndOf_5F_repeat_5F_instruction (in_mEndOf_5F_repeat_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_repeatInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

void cPtr_repeatInstruction::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@repeatInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_repeat_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_repeatInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_repeatInstruction (mAttribute_mInstructionLocation, mAttribute_mRepeatedInstructionList, mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, mAttribute_mRepeatBranchList, mAttribute_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @repeatInstruction type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
                                          & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_repeatInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_repeatInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstruction GALGAS_repeatInstruction::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction result ;
  const GALGAS_repeatInstruction * p = (const GALGAS_repeatInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_repeatInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selectInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstruction * p = (const cPtr_selectInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSelectBranchList.objectCompare (p->mAttribute_mSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_select_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_select_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selectInstruction::objectCompare (const GALGAS_selectInstruction & inOperand) const {
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

GALGAS_selectInstruction::GALGAS_selectInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstruction GALGAS_selectInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_listOfSyntaxInstructionList::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstruction::GALGAS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstruction GALGAS_selectInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_listOfSyntaxInstructionList & inAttribute_mSelectBranchList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_select_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSelectBranchList.isValid () && inAttribute_mEndOf_5F_select_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstruction (inAttribute_mInstructionLocation, inAttribute_mSelectBranchList, inAttribute_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_selectInstruction::reader_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstruction * p = (const cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    result = p->mAttribute_mSelectBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList cPtr_selectInstruction::reader_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_selectInstruction::reader_mEndOf_5F_select_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstruction * p = (const cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    result = p->mAttribute_mEndOf_5F_select_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_selectInstruction::reader_mEndOf_5F_select_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_select_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @selectInstruction class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selectInstruction::cPtr_selectInstruction (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                const GALGAS_location & in_mEndOf_5F_select_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mSelectBranchList (in_mSelectBranchList),
mAttribute_mEndOf_5F_select_5F_instruction (in_mEndOf_5F_select_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selectInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

void cPtr_selectInstruction::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@selectInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_select_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selectInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstruction (mAttribute_mInstructionLocation, mAttribute_mSelectBranchList, mAttribute_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @selectInstruction type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
                                          & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstruction GALGAS_selectInstruction::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction result ;
  const GALGAS_selectInstruction * p = (const GALGAS_selectInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_semanticInstructionAST::objectCompare (const GALGAS_semanticInstructionAST & inOperand) const {
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

GALGAS_semanticInstructionAST::GALGAS_semanticInstructionAST (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionAST::GALGAS_semanticInstructionAST (const cPtr_semanticInstructionAST * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @semanticInstructionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticInstructionAST::cPtr_semanticInstructionAST (const GALGAS_location & in_mInstructionLocation
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @semanticInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionAST ("semanticInstructionAST",
                                               & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionAST GALGAS_semanticInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionAST result ;
  const GALGAS_semanticInstructionAST * p = (const GALGAS_semanticInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVariableName.objectCompare (p->mAttribute_mTargetVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
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

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mTargetVariableName,
                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetVariableName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTargetVariableName, inAttribute_mStructAttributeList, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_assignmentInstructionAST::reader_mTargetVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mTargetVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_assignmentInstructionAST::reader_mTargetVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_assignmentInstructionAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_assignmentInstructionAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_assignmentInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_assignmentInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @assignmentInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mTargetVariableName,
                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                              const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetVariableName (in_mTargetVariableName),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mAttribute_mInstructionLocation, mAttribute_mTargetVariableName, mAttribute_mStructAttributeList, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

