#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionStringExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                      GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionStringExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionStringExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionStringExpressionForGeneration * p = (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentIsPredefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_optionStringExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentIsPredefined ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionStringExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionStringExpressionForGeneration * p = (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_optionStringExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionStringExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionStringExpressionForGeneration * p = (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    result = p->mProperty_mOptionEntryName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_optionStringExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionEntryName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionStringExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    p->mProperty_mOptionComponentIsPredefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentIsPredefined = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionStringExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionStringExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    p->mProperty_mOptionEntryName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionEntryName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionStringExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionStringExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionStringExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ("optionStringExpressionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionCommentExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCommentExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionCommentExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCommentExpressionForGeneration * p = (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentIsPredefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_optionCommentExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentIsPredefined ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCommentExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCommentExpressionForGeneration * p = (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_optionCommentExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCommentExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCommentExpressionForGeneration * p = (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    result = p->mProperty_mOptionEntryName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_optionCommentExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionEntryName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionCommentExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    p->mProperty_mOptionComponentIsPredefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentIsPredefined = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionCommentExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionCommentExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    p->mProperty_mOptionEntryName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionEntryName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionCommentExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionCommentExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionCommentExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionCommentExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ("optionCommentExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionCommentExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionCommentExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionCommentExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (const cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionForGeneration * p = (const cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    result = p->mProperty_mLexiqueComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexiqueIntrospectionForGeneration::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionForGeneration * p = (const cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    result = p->mProperty_mLexiqueGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexiqueIntrospectionForGeneration::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueGetterName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueIntrospectionForGeneration::setter_setMLexiqueComponentName (GALGAS_string inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    p->mProperty_mLexiqueComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::setter_setMLexiqueComponentName (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueIntrospectionForGeneration::setter_setMLexiqueGetterName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    p->mProperty_mLexiqueGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::setter_setMLexiqueGetterName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueGetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_string & in_mLexiqueComponentName,
                                                                                const GALGAS_string & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mLexiqueGetterName (in_mLexiqueGetterName) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueIntrospectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueIntrospectionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ("lexiqueIntrospectionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueIntrospectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (const cPtr_filewrapperInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionForGeneration * p = (const cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionForGeneration * p = (const cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperPath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperInExpressionForGeneration::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperPath ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperInExpressionForGeneration::setter_setMFilewrapperPath (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::setter_setMFilewrapperPath (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperPath = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_string & in_mFilewrapperName,
                                                                                      const GALGAS_string & in_mFilewrapperPath
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperPath (in_mFilewrapperPath) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ("filewrapperInExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                               GALGAS_location::constructor_nowhere (HERE),
                                                                               GALGAS_string::constructor_default (HERE),
                                                                               GALGAS_string::constructor_default (HERE),
                                                                               GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (const cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionForGeneration * p = (const cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionForGeneration * p = (const cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperTemplateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::getter_mActualOutputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionForGeneration * p = (const cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    result = p->mProperty_mActualOutputParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration cPtr_filewrapperTemplateInExpressionForGeneration::getter_mActualOutputParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualOutputParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperTemplateName (GALGAS_string inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mFilewrapperTemplateName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperTemplateName (GALGAS_string inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperTemplateName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMActualOutputParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mActualOutputParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::setter_setMActualOutputParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualOutputParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionForGeneration::cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperTemplateInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mActualOutputParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ("filewrapperTemplateInExpressionForGeneration",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                                 GALGAS_location::constructor_nowhere (HERE),
                                                                                 GALGAS_string::constructor_default (HERE),
                                                                                 GALGAS_uint::constructor_default (HERE),
                                                                                 GALGAS_bool::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (const cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperFileIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperFileIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperFileIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperFileIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperStaticPathInExpressionForGeneration::getter_mIsTextFile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    result = p->mProperty_mIsTextFile ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_filewrapperStaticPathInExpressionForGeneration::getter_mIsTextFile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsTextFile ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperFileIndex (GALGAS_uint inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mFilewrapperFileIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperFileIndex (GALGAS_uint inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperFileIndex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMIsTextFile (GALGAS_bool inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mIsTextFile = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::setter_setMIsTextFile (GALGAS_bool inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsTextFile = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperStaticPathInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperStaticPathInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperStaticPathInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperFileIndex, mProperty_mIsTextFile COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperStaticPathInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ("filewrapperStaticPathInExpressionForGeneration",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperStaticPathInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperStaticPathInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperStaticPathInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionForGeneration::GALGAS_getterCallExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionForGeneration::GALGAS_getterCallExpressionForGeneration (const cPtr_getterCallExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionForGeneration GALGAS_getterCallExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_getterCallExpressionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind cPtr_getterCallExpressionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_getterCallExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_getterCallExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_getterCallExpressionForGeneration::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mFieldList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_getterCallExpressionForGeneration::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getterCallExpressionForGeneration::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_getterCallExpressionForGeneration::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGetterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_getterCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration cPtr_getterCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_getterCallExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_getterCallExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMFieldList (GALGAS_stringlist inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mFieldList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::setter_setMFieldList (GALGAS_stringlist inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFieldList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMGetterName (GALGAS_string inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::setter_setMGetterName (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getterCallExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getterCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mKind, mProperty_mReceiverExpression, mProperty_mFieldList, mProperty_mGetterName, mProperty_mExpressions, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@getterCallExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ("getterCallExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getterCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getterCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionForGeneration::GALGAS_constructorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionForGeneration GALGAS_constructorExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionForGeneration::GALGAS_constructorExpressionForGeneration (const cPtr_constructorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionForGeneration GALGAS_constructorExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mConstructorType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_constructorExpressionForGeneration::getter_mConstructorType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mConstructorType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_constructorExpressionForGeneration::getter_mConstructorType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_constructorExpressionForGeneration::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mConstructorName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_constructorExpressionForGeneration::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_constructorExpressionForGeneration::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mEffectiveParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration cPtr_constructorExpressionForGeneration::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_constructorExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorExpressionForGeneration::setter_setMConstructorType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mConstructorType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::setter_setMConstructorType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstructorType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorExpressionForGeneration::setter_setMConstructorName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mConstructorName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::setter_setMConstructorName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstructorName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorExpressionForGeneration::setter_setMEffectiveParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mEffectiveParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::setter_setMEffectiveParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEffectiveParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @constructorExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_constructorExpressionForGeneration::cPtr_constructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mConstructorType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_constructorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mConstructorType, mProperty_mConstructorName, mProperty_mEffectiveParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@constructorExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorExpressionForGeneration ("constructorExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionForGeneration::GALGAS_defaultConstructorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionForGeneration GALGAS_defaultConstructorExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_defaultConstructorExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                            GALGAS_location::constructor_nowhere (HERE)
                                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionForGeneration::GALGAS_defaultConstructorExpressionForGeneration (const cPtr_defaultConstructorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_defaultConstructorExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionForGeneration GALGAS_defaultConstructorExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_defaultConstructorExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @defaultConstructorExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_defaultConstructorExpressionForGeneration::cPtr_defaultConstructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_defaultConstructorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_defaultConstructorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@defaultConstructorExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ("defaultConstructorExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_defaultConstructorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_defaultConstructorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultConstructorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionForGeneration::GALGAS_functionCallExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionForGeneration GALGAS_functionCallExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionCallExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                      GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionForGeneration::GALGAS_functionCallExpressionForGeneration (const cPtr_functionCallExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionForGeneration GALGAS_functionCallExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionCallExpressionForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionForGeneration * p = (const cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionCallExpressionForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_functionCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionForGeneration * p = (const cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration cPtr_functionCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionCallExpressionForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                    const GALGAS_location & in_mLocation,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_semanticExpressionListForGeneration & in_mExpressions
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mExpressions (in_mExpressions) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionCallExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFunctionName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionCallExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ("functionCallExpressionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionForGeneration::GALGAS_literalTypeInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionForGeneration GALGAS_literalTypeInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionForGeneration::GALGAS_literalTypeInExpressionForGeneration (const cPtr_literalTypeInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionForGeneration GALGAS_literalTypeInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mLiteralType
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLiteralType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalTypeInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLiteralType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_literalTypeInExpressionForGeneration::getter_mLiteralType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalTypeInExpressionForGeneration * p = (const cPtr_literalTypeInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionForGeneration) ;
    result = p->mProperty_mLiteralType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_literalTypeInExpressionForGeneration::getter_mLiteralType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralType ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalTypeInExpressionForGeneration::setter_setMLiteralType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_literalTypeInExpressionForGeneration * p = (cPtr_literalTypeInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionForGeneration) ;
    p->mProperty_mLiteralType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::setter_setMLiteralType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLiteralType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalTypeInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionForGeneration::cPtr_literalTypeInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mLiteralType
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLiteralType (in_mLiteralType) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalTypeInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLiteralType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalTypeInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ("literalTypeInExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalTypeInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalTypeInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalTypeInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValueForGeneration::GALGAS_expressionCollectionValueForGeneration (void) :
GALGAS_abstractCollectionValueElementForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValueForGeneration::GALGAS_expressionCollectionValueForGeneration (const cPtr_expressionCollectionValueForGeneration * inSourcePtr) :
GALGAS_abstractCollectionValueElementForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionValueForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValueForGeneration GALGAS_expressionCollectionValueForGeneration::constructor_new (const GALGAS_location & inAttribute_mExpressionLocation,
                                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValueForGeneration result ;
  if (inAttribute_mExpressionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionValueForGeneration (inAttribute_mExpressionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_expressionCollectionValueForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionValueForGeneration * p = (const cPtr_expressionCollectionValueForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValueForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_expressionCollectionValueForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionCollectionValueForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionCollectionValueForGeneration * p = (cPtr_expressionCollectionValueForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValueForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValueForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionValueForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionCollectionValueForGeneration::cPtr_expressionCollectionValueForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElementForGeneration (in_mExpressionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionCollectionValueForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionValueForGeneration (mProperty_mExpressionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionCollectionValueForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ("expressionCollectionValueForGeneration",
                                                               & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionCollectionValueForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionCollectionValueForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionValueForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionForGeneration::GALGAS_expressionCollectionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionForGeneration GALGAS_expressionCollectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionCollectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_collectionValueElementListForGeneration::constructor_emptyList (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionForGeneration::GALGAS_expressionCollectionForGeneration (const cPtr_expressionCollectionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionForGeneration GALGAS_expressionCollectionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_collectionValueElementListForGeneration & inAttribute_mElementList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mElementList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mElementList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_expressionCollectionForGeneration::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionForGeneration * p = (const cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    result = p->mProperty_mElementList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration cPtr_expressionCollectionForGeneration::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionCollectionForGeneration::setter_setMElementList (GALGAS_collectionValueElementListForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    p->mProperty_mElementList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::setter_setMElementList (GALGAS_collectionValueElementListForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_collectionValueElementListForGeneration & in_mElementList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mElementList (in_mElementList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionCollectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mElementList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionCollectionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionForGeneration ("expressionCollectionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionForGeneration::GALGAS_selfInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionForGeneration GALGAS_selfInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_string::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionForGeneration::GALGAS_selfInExpressionForGeneration (const cPtr_selfInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfInExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionForGeneration GALGAS_selfInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                            const GALGAS_string & inAttribute_mSelfCppName
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mSelfCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mSelfCppName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selfInExpressionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfInExpressionForGeneration * p = (const cPtr_selfInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionForGeneration) ;
    result = p->mProperty_mSelfCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selfInExpressionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selfInExpressionForGeneration::setter_setMSelfCppName (GALGAS_string inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfInExpressionForGeneration * p = (cPtr_selfInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionForGeneration) ;
    p->mProperty_mSelfCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::setter_setMSelfCppName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelfCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selfInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selfInExpressionForGeneration::cPtr_selfInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_string & in_mSelfCppName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mSelfCppName (in_mSelfCppName) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mSelfCppName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selfInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfInExpressionForGeneration ("selfInExpressionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionForGeneration::GALGAS_structPropertyAccessExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionForGeneration::GALGAS_structPropertyAccessExpressionForGeneration (const cPtr_structPropertyAccessExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionForGeneration GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_structPropertyAccessExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structPropertyAccessExpressionForGeneration * p = (const cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_structPropertyAccessExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_structPropertyAccessExpressionForGeneration::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_structPropertyAccessExpressionForGeneration * p = (const cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    result = p->mProperty_mStructFieldName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_structPropertyAccessExpressionForGeneration::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructFieldName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structPropertyAccessExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structPropertyAccessExpressionForGeneration * p = (cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structPropertyAccessExpressionForGeneration::setter_setMStructFieldName (GALGAS_string inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structPropertyAccessExpressionForGeneration * p = (cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    p->mProperty_mStructFieldName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionForGeneration::setter_setMStructFieldName (GALGAS_string inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructFieldName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structPropertyAccessExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionForGeneration::cPtr_structPropertyAccessExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                                    const GALGAS_location & in_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                    const GALGAS_string & in_mStructFieldName
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression),
mProperty_mStructFieldName (in_mStructFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structPropertyAccessExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, mProperty_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structPropertyAccessExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration ("structPropertyAccessExpressionForGeneration",
                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structPropertyAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structPropertyAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structPropertyAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionForGeneration::GALGAS_notExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionForGeneration::GALGAS_notExpressionForGeneration (const cPtr_notExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionForGeneration GALGAS_notExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_notExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_notExpressionForGeneration * p = (const cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_notExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_notExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_notExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_notExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@notExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notExpressionForGeneration ("notExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (const cPtr_tildeExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionForGeneration GALGAS_tildeExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tildeExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_tildeExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tildeExpressionForGeneration * p = (const cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_tildeExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tildeExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tildeExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tildeExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tildeExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tildeExpressionForGeneration ("tildeExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tildeExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tildeExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tildeExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionForGeneration::GALGAS_unaryWrappingMinusExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionForGeneration::GALGAS_unaryWrappingMinusExpressionForGeneration (const cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryWrappingMinusExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryWrappingMinusExpressionForGeneration * p = (const cPtr_unaryWrappingMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_unaryWrappingMinusExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unaryWrappingMinusExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionForGeneration::cPtr_unaryWrappingMinusExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryWrappingMinusExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unaryWrappingMinusExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ("unaryWrappingMinusExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryWrappingMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryWrappingMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryWrappingMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration::GALGAS_orShortExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration::GALGAS_orShortExpressionForGeneration (const cPtr_orShortExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration GALGAS_orShortExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_orShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionForGeneration * p = (const cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_orShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_orShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionForGeneration * p = (const cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_orShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orShortExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orShortExpressionForGeneration::cPtr_orShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                          const GALGAS_location & in_mLocation,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orShortExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orShortExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orShortExpressionForGeneration ("orShortExpressionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration::GALGAS_openedSliceExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration::GALGAS_openedSliceExpressionForGeneration (const cPtr_openedSliceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionForGeneration * p = (const cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_openedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionForGeneration * p = (const cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_openedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_openedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_openedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @openedSliceExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionForGeneration::cPtr_openedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_openedSliceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_openedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@openedSliceExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ("openedSliceExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration::GALGAS_closedSliceExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration::GALGAS_closedSliceExpressionForGeneration (const cPtr_closedSliceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionForGeneration * p = (const cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_closedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionForGeneration * p = (const cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_closedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_closedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_closedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @closedSliceExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionForGeneration::cPtr_closedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_closedSliceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_closedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@closedSliceExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ("closedSliceExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_closedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration::GALGAS_andShortExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration::GALGAS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration GALGAS_andShortExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_andShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionForGeneration * p = (const cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_andShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_andShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionForGeneration * p = (const cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_andShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andShortExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andShortExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andShortExpressionForGeneration ("andShortExpressionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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
    result = mProperty_mOptionalProperty.objectCompare (p->mProperty_mOptionalProperty) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceLocation.objectCompare (p->mProperty_mSourceLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (const cPtr_assignmentInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration GALGAS_assignmentInstructionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mTargetType,
                                                                                                      const GALGAS_string & inAttribute_mTargetCppName,
                                                                                                      const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                      const GALGAS_string & inAttribute_mOptionalProperty,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression,
                                                                                                      const GALGAS_location & inAttribute_mSourceLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mTargetCppName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mOptionalProperty.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mSourceLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionForGeneration (inAttribute_mTargetType, inAttribute_mTargetCppName, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mOptionalProperty, inAttribute_mSourceExpression, inAttribute_mSourceLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_assignmentInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_assignmentInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::getter_mTargetCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mTargetCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_assignmentInstructionForGeneration::getter_mTargetCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_assignmentInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameForCheckingFormalParameterUsing ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::getter_mOptionalProperty (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mOptionalProperty ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_assignmentInstructionForGeneration::getter_mOptionalProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalProperty ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_assignmentInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_assignmentInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_assignmentInstructionForGeneration::getter_mSourceLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mSourceLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_assignmentInstructionForGeneration::getter_mSourceLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionForGeneration::setter_setMTargetCppName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mTargetCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::setter_setMTargetCppName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameForCheckingFormalParameterUsing = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionForGeneration::setter_setMOptionalProperty (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mOptionalProperty = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::setter_setMOptionalProperty (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionalProperty = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstructionForGeneration::setter_setMSourceLocation (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mSourceLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::setter_setMSourceLocation (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionForGeneration::cPtr_assignmentInstructionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                                                  const GALGAS_string & in_mTargetCppName,
                                                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                  const GALGAS_string & in_mOptionalProperty,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                  const GALGAS_location & in_mSourceLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetCppName (in_mTargetCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mOptionalProperty (in_mOptionalProperty),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mSourceLocation (in_mSourceLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

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
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionForGeneration (mProperty_mTargetType, mProperty_mTargetCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mOptionalProperty, mProperty_mSourceExpression, mProperty_mSourceLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ("assignmentInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (const cPtr_structuredCastInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_structuredCastInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_structuredCastInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_structuredCastInstructionForGeneration::getter_mCastBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mProperty_mCastBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration cPtr_structuredCastInstructionForGeneration::getter_mCastBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_structuredCastInstructionForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_structuredCastInstructionForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structuredCastInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structuredCastInstructionForGeneration::setter_setMCastBranchList (GALGAS_castInstructionBranchListForGeneration inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    p->mProperty_mCastBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::setter_setMCastBranchList (GALGAS_castInstructionBranchListForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCastBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structuredCastInstructionForGeneration::setter_setMElseInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::setter_setMElseInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structuredCastInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structuredCastInstructionForGeneration::cPtr_structuredCastInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                          const GALGAS_castInstructionBranchListForGeneration & in_mCastBranchList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mCastBranchList (in_mCastBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structuredCastInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structuredCastInstructionForGeneration (mProperty_mExpression, mProperty_mCastBranchList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structuredCastInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ("structuredCastInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration::GALGAS_opEqualInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration::GALGAS_opEqualInstructionForGeneration (const cPtr_opEqualInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_opEqualInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration GALGAS_opEqualInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mTargetType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_opEqualInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_opEqualInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_opEqualInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_opEqualInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::getter_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mTargetVariableCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_opEqualInstructionForGeneration::getter_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVariableCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_opEqualInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameForCheckingFormalParameterUsing ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_opEqualInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_opEqualInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_opEqualInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_opEqualInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::getter_mGeneratedMethod (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mGeneratedMethod ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_opEqualInstructionForGeneration::getter_mGeneratedMethod (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGeneratedMethod ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_opEqualInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_opEqualInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_opEqualInstructionForGeneration::setter_setMTargetVariableCppName (GALGAS_string inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mTargetVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::setter_setMTargetVariableCppName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetVariableCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_opEqualInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameForCheckingFormalParameterUsing = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_opEqualInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_opEqualInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_opEqualInstructionForGeneration::setter_setMGeneratedMethod (GALGAS_string inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mGeneratedMethod = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::setter_setMGeneratedMethod (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGeneratedMethod = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @opEqualInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_opEqualInstructionForGeneration::cPtr_opEqualInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_opEqualInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_opEqualInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTargetType, mProperty_mTargetVariableCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mStructAttributeList, mProperty_mSourceExpression, mProperty_mGeneratedMethod COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@opEqualInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ("opEqualInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_opEqualInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_opEqualInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_opEqualInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (const cPtr_errorInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_errorInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_errorInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_errorInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::getter_mErrorExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mErrorExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_errorInstructionForGeneration::getter_mErrorExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_errorInstructionForGeneration::getter_mBuiltVariableCppNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mBuiltVariableCppNameList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_errorInstructionForGeneration::getter_mBuiltVariableCppNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuiltVariableCppNameList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_errorInstructionForGeneration::getter_mFixitListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mFixitListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration cPtr_errorInstructionForGeneration::getter_mFixitListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFixitListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_errorInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_errorInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_errorInstructionForGeneration::setter_setMErrorExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mErrorExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::setter_setMErrorExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mErrorExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_errorInstructionForGeneration::setter_setMBuiltVariableCppNameList (GALGAS_stringlist inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mBuiltVariableCppNameList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::setter_setMBuiltVariableCppNameList (GALGAS_stringlist inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBuiltVariableCppNameList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_errorInstructionForGeneration::setter_setMFixitListForGeneration (GALGAS_fixitListForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mFixitListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::setter_setMFixitListForGeneration (GALGAS_fixitListForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFixitListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_errorInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_errorInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mErrorExpression, mProperty_mBuiltVariableCppNameList, mProperty_mFixitListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@errorInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionForGeneration ("errorInstructionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration::GALGAS_forInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration::GALGAS_forInstructionForGeneration (const cPtr_forInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_forInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionForGeneration::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mEnumeratedObjectList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration cPtr_forInstructionForGeneration::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedObjectList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionForGeneration::getter_mIndexVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mIndexVariableCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_forInstructionForGeneration::getter_mIndexVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexVariableCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionForGeneration::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_forInstructionForGeneration::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mBeforeInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBeforeInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mBetweenInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBetweenInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mAfterInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAfterInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMEnumeratedObjectList (GALGAS_forInstructionEnumeratedObjectListForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mEnumeratedObjectList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMEnumeratedObjectList (GALGAS_forInstructionEnumeratedObjectListForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumeratedObjectList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMIndexVariableCppName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mIndexVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMIndexVariableCppName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIndexVariableCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMWhileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMWhileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhileExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMBeforeInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mBeforeInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMBeforeInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBeforeInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMBetweenInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mBetweenInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMBetweenInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBetweenInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMDoInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMDoInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDoInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionForGeneration::setter_setMAfterInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mAfterInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::setter_setMAfterInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAfterInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableCppName, mProperty_mWhileExpression, mProperty_mBeforeInstructionList, mProperty_mBetweenInstructionList, mProperty_mDoInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionForGeneration ("forInstructionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (const cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_grammarInstructionWithSourceFileForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mGrammarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mLabelName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mSourceFileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mSourceFileExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceFileForGeneration::getter_mSourceFileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceFileExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration cPtr_grammarInstructionWithSourceFileForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mGrammarHasTranslateFeature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarInstructionWithSourceFileForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mAssignementList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_grammarInstructionWithSourceFileForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignementList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxDirectedTranslationResultVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mGrammarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mLabelName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLabelName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMSourceFileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mSourceFileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMSourceFileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceFileExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mGrammarHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarHasTranslateFeature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mAssignementList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssignementList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceFileForGeneration class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionWithSourceFileForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceFileForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceFileExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionWithSourceFileForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ("grammarInstructionWithSourceFileForGeneration",
                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceFileForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceFileForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceFileForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (const cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mGrammarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mLabelName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mSourceStringExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mSourceStringExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mSourceStringExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceStringExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mNameStringExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mNameStringExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mNameStringExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameStringExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mGrammarHasTranslateFeature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mAssignementList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignementList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxDirectedTranslationResultVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mGrammarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mLabelName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLabelName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMSourceStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mSourceStringExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMSourceStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceStringExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMNameStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mNameStringExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMNameStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameStringExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mGrammarHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarHasTranslateFeature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mAssignementList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssignementList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceExpressionForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceStringExpression, mProperty_mNameStringExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionWithSourceExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ("grammarInstructionWithSourceExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mTargetType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mIsConstant ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsConstant ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mCppVariableName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppVariableName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMIsConstant (GALGAS_bool inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mIsConstant = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMIsConstant (GALGAS_bool inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsConstant = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mCppVariableName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppVariableName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (mProperty_mTargetType, mProperty_mIsConstant, mProperty_mCppVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableOrConstantDeclarationWithSourceExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (const cPtr_logInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mLogMessage,
                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mLogExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration result ;
  if (inAttribute_mLogMessage.isValid () && inAttribute_mLogExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logInstructionForGeneration (inAttribute_mLogMessage, inAttribute_mLogExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_logInstructionForGeneration::getter_mLogMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    result = p->mProperty_mLogMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_logInstructionForGeneration::getter_mLogMessage (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLogMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_logInstructionForGeneration::getter_mLogExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    result = p->mProperty_mLogExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_logInstructionForGeneration::getter_mLogExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLogExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logInstructionForGeneration::setter_setMLogMessage (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    p->mProperty_mLogMessage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::setter_setMLogMessage (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLogMessage = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logInstructionForGeneration::setter_setMLogExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    p->mProperty_mLogExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::setter_setMLogExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLogExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @logInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_logInstructionForGeneration::cPtr_logInstructionForGeneration (const GALGAS_lstring & in_mLogMessage,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mLogExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mLogMessage (in_mLogMessage),
mProperty_mLogExpression (in_mLogExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logInstructionForGeneration (mProperty_mLogMessage, mProperty_mLogExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@logInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logInstructionForGeneration ("logInstructionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionForGeneration::GALGAS_loopInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionForGeneration::GALGAS_loopInstructionForGeneration (const cPtr_loopInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_loopInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mVariantExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_loopInstructionForGeneration::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariantExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::getter_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mFirstInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_loopInstructionForGeneration::getter_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFirstInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::getter_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mLoopExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_loopInstructionForGeneration::getter_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLoopExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::getter_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mSecondInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_loopInstructionForGeneration::getter_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mVariantExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariantExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMFirstInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mFirstInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionForGeneration::setter_setMFirstInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFirstInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMLoopExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mLoopExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionForGeneration::setter_setMLoopExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLoopExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMSecondInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mSecondInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionForGeneration::setter_setMSecondInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSecondInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loopInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@loopInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionForGeneration ("loopInstructionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_messageInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_messageInstructionForGeneration * p = (const cPtr_messageInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration::GALGAS_messageInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration::GALGAS_messageInstructionForGeneration (const cPtr_messageInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_messageInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration GALGAS_messageInstructionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionForGeneration result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_messageInstructionForGeneration (inAttribute_mExpression, inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_messageInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_messageInstructionForGeneration * p = (const cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_messageInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_messageInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_messageInstructionForGeneration * p = (const cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_messageInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_messageInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_messageInstructionForGeneration * p = (cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_messageInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_messageInstructionForGeneration * p = (cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @messageInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_messageInstructionForGeneration::cPtr_messageInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                            const GALGAS_location & in_mInstructionLocation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_messageInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration ;
}

void cPtr_messageInstructionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@messageInstructionForGeneration:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_messageInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_messageInstructionForGeneration (mProperty_mExpression, mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@messageInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_messageInstructionForGeneration ("messageInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_messageInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_messageInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_messageInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_methodCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodBaseType.objectCompare (p->mProperty_mMethodBaseType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration::GALGAS_methodCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration::GALGAS_methodCallInstructionForGeneration (const cPtr_methodCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration GALGAS_methodCallInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                      const GALGAS_string & inAttribute_mMethodName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverType, inAttribute_mReceiverExpression, inAttribute_mMethodName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_methodCallInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_methodCallInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_methodCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_methodCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_methodCallInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_methodCallInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_methodCallInstructionForGeneration::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_methodCallInstructionForGeneration::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_methodCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind cPtr_methodCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_methodCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration cPtr_methodCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_methodCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_methodCallInstructionForGeneration::getter_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    result = p->mProperty_mMethodBaseType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_methodCallInstructionForGeneration::getter_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMethodBaseType ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMMethodName (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMMethodName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMethodName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodCallInstructionForGeneration::setter_setMMethodBaseType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    p->mProperty_mMethodBaseType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::setter_setMMethodBaseType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMethodBaseType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @methodCallInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionForGeneration::cPtr_methodCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                  const GALGAS_string & in_mMethodName,
                                                                                  const GALGAS_methodKind & in_mKind,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mMethodBaseType
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mMethodName (in_mMethodName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mMethodBaseType (in_mMethodBaseType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_methodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

void cPtr_methodCallInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@methodCallInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_methodCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_methodCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverType, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@methodCallInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ("methodCallInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_switchInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumType.objectCompare (p->mProperty_mEnumType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranches.objectCompare (p->mProperty_mBranches) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration::GALGAS_switchInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration::GALGAS_switchInstructionForGeneration (const cPtr_switchInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration GALGAS_switchInstructionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mEnumType,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mSwitchExpression,
                                                                                              const GALGAS_switchBranchesForGeneration & inAttribute_mBranches
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration result ;
  if (inAttribute_mEnumType.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mBranches.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionForGeneration (inAttribute_mEnumType, inAttribute_mSwitchExpression, inAttribute_mBranches COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_switchInstructionForGeneration::getter_mEnumType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    result = p->mProperty_mEnumType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_switchInstructionForGeneration::getter_mEnumType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_switchInstructionForGeneration::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_switchInstructionForGeneration::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchInstructionForGeneration::getter_mBranches (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    result = p->mProperty_mBranches ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration cPtr_switchInstructionForGeneration::getter_mBranches (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranches ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionForGeneration::setter_setMEnumType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    p->mProperty_mEnumType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::setter_setMEnumType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionForGeneration::setter_setMSwitchExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::setter_setMSwitchExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSwitchExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionForGeneration::setter_setMBranches (GALGAS_switchBranchesForGeneration inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    p->mProperty_mBranches = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::setter_setMBranches (GALGAS_switchBranchesForGeneration inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBranches = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_switchInstructionForGeneration::cPtr_switchInstructionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mEnumType,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                          const GALGAS_switchBranchesForGeneration & in_mBranches
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mEnumType (in_mEnumType),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mBranches (in_mBranches) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

void cPtr_switchInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@switchInstructionForGeneration:" ;
  mProperty_mEnumType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionForGeneration (mProperty_mEnumType, mProperty_mSwitchExpression, mProperty_mBranches COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@switchInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionForGeneration ("switchInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_warningInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningExpression.objectCompare (p->mProperty_mWarningExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListForGeneration.objectCompare (p->mProperty_mFixitListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration::GALGAS_warningInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration::GALGAS_warningInstructionForGeneration (const cPtr_warningInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration GALGAS_warningInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mWarningExpression,
                                                                                                const GALGAS_fixitListForGeneration & inAttribute_mFixitListForGeneration
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mWarningExpression.isValid () && inAttribute_mFixitListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_warningInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mWarningExpression, inAttribute_mFixitListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_warningInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_warningInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_warningInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::getter_mWarningExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mProperty_mWarningExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_warningInstructionForGeneration::getter_mWarningExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarningExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_warningInstructionForGeneration::getter_mFixitListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    result = p->mProperty_mFixitListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration cPtr_warningInstructionForGeneration::getter_mFixitListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFixitListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionForGeneration::setter_setMWarningExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mWarningExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::setter_setMWarningExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWarningExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionForGeneration::setter_setMFixitListForGeneration (GALGAS_fixitListForGeneration inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mFixitListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::setter_setMFixitListForGeneration (GALGAS_fixitListForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFixitListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_warningInstructionForGeneration::cPtr_warningInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mWarningExpression,
                                                                            const GALGAS_fixitListForGeneration & in_mFixitListForGeneration
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mWarningExpression (in_mWarningExpression),
mProperty_mFixitListForGeneration (in_mFixitListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_warningInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

void cPtr_warningInstructionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@warningInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarningExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_warningInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_warningInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mWarningExpression, mProperty_mFixitListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@warningInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionForGeneration ("warningInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_warningInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_warningInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readOnlyWithInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectArrayCppName.objectCompare (p->mProperty_mObjectArrayCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoBranchInstructions.objectCompare (p->mProperty_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchInstructions.objectCompare (p->mProperty_mElseBranchInstructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration::GALGAS_readOnlyWithInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration::GALGAS_readOnlyWithInstructionForGeneration (const cPtr_readOnlyWithInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readOnlyWithInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readOnlyWithInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_readOnlyWithInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_readOnlyWithInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::getter_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mProperty_mObjectArrayCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_readOnlyWithInstructionForGeneration::getter_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectArrayCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mProperty_mKeyExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_readOnlyWithInstructionForGeneration::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKeyExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_readOnlyWithInstructionForGeneration::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodNameForErrorSignaling ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::getter_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mProperty_mDoBranchInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_readOnlyWithInstructionForGeneration::getter_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoBranchInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::getter_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    result = p->mProperty_mElseBranchInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_readOnlyWithInstructionForGeneration::getter_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseBranchInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMObjectArrayCppName (GALGAS_string inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mObjectArrayCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::setter_setMObjectArrayCppName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObjectArrayCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMKeyExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::setter_setMKeyExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKeyExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMSearchMethodNameForErrorSignaling (GALGAS_string inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::setter_setMSearchMethodNameForErrorSignaling (GALGAS_string inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodNameForErrorSignaling = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mDoBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDoBranchInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mElseBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseBranchInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @readOnlyWithInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_readOnlyWithInstructionForGeneration::cPtr_readOnlyWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                      const GALGAS_string & in_mObjectArrayCppName,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                                                      const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mObjectArrayCppName (in_mObjectArrayCppName),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_mDoBranchInstructions (in_mDoBranchInstructions),
mProperty_mElseBranchInstructions (in_mElseBranchInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readOnlyWithInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;
}

void cPtr_readOnlyWithInstructionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@readOnlyWithInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObjectArrayCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readOnlyWithInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readOnlyWithInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mObjectArrayCppName, mProperty_mKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_mDoBranchInstructions, mProperty_mElseBranchInstructions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@readOnlyWithInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ("readOnlyWithInstructionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readOnlyWithInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readOnlyWithInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readOnlyWithInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readWriteWithInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverVariableCppName.objectCompare (p->mProperty_mReceiverVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectArrayCppName.objectCompare (p->mProperty_mObjectArrayCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoBranchInstructions.objectCompare (p->mProperty_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchInstructions.objectCompare (p->mProperty_mElseBranchInstructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration::GALGAS_readWriteWithInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration::GALGAS_readWriteWithInstructionForGeneration (const cPtr_readWriteWithInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readWriteWithInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration GALGAS_readWriteWithInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_string & inAttribute_mReceiverVariableCppName,
                                                                                                            const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteWithInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_readWriteWithInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::getter_mReceiverVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mReceiverVariableCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_readWriteWithInstructionForGeneration::getter_mReceiverVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverVariableCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_readWriteWithInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cPtr_readWriteWithInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_readWriteWithInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_readWriteWithInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::getter_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mObjectArrayCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_readWriteWithInstructionForGeneration::getter_mObjectArrayCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectArrayCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readWriteWithInstructionForGeneration::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mKeyExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_readWriteWithInstructionForGeneration::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKeyExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_readWriteWithInstructionForGeneration::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodNameForErrorSignaling ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::getter_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mDoBranchInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_readWriteWithInstructionForGeneration::getter_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoBranchInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::getter_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    result = p->mProperty_mElseBranchInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_readWriteWithInstructionForGeneration::getter_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseBranchInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMReceiverVariableCppName (GALGAS_string inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mReceiverVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMReceiverVariableCppName (GALGAS_string inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverVariableCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMObjectArrayCppName (GALGAS_string inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mObjectArrayCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMObjectArrayCppName (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObjectArrayCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMKeyExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMKeyExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKeyExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMSearchMethodNameForErrorSignaling (GALGAS_string inValue
                                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMSearchMethodNameForErrorSignaling (GALGAS_string inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodNameForErrorSignaling = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mDoBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDoBranchInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mElseBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseBranchInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @readWriteWithInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_readWriteWithInstructionForGeneration::cPtr_readWriteWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_string & in_mReceiverVariableCppName,
                                                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                        const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                        const GALGAS_string & in_mObjectArrayCppName,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                                                        const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverVariableCppName (in_mReceiverVariableCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mObjectArrayCppName (in_mObjectArrayCppName),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_mDoBranchInstructions (in_mDoBranchInstructions),
mProperty_mElseBranchInstructions (in_mElseBranchInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readWriteWithInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;
}

void cPtr_readWriteWithInstructionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@readWriteWithInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObjectArrayCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readWriteWithInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readWriteWithInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverVariableCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mObjectArrayCppName, mProperty_mKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_mDoBranchInstructions, mProperty_mElseBranchInstructions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@readWriteWithInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ("readWriteWithInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readWriteWithInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readWriteWithInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteWithInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseLoopInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariantExpression.objectCompare (p->mProperty_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration::GALGAS_parseLoopInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration::GALGAS_parseLoopInstructionForGeneration (const cPtr_parseLoopInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    result = p->mProperty_mVariantExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_parseLoopInstructionForGeneration::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariantExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_parseLoopInstructionForGeneration::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseLoopInstructionForGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_parseLoopInstructionForGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstructionForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    p->mProperty_mVariantExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariantExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstructionForGeneration::setter_setMWhileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::setter_setMWhileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhileExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstructionForGeneration::setter_setMInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::setter_setMInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @parseLoopInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_parseLoopInstructionForGeneration::cPtr_parseLoopInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (in_mVariantExpression),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseLoopInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;
}

void cPtr_parseLoopInstructionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@parseLoopInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseLoopInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseLoopInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mWhileExpression, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@parseLoopInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ("parseLoopInstructionForGeneration",
                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseLoopInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseLoopInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseWhenInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhenExpression.objectCompare (p->mProperty_mWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration::GALGAS_parseWhenInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration::GALGAS_parseWhenInstructionForGeneration (const cPtr_parseWhenInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_parseWhenInstructionForGeneration::getter_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    result = p->mProperty_mWhenExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_parseWhenInstructionForGeneration::getter_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhenExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_parseWhenInstructionForGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_parseWhenInstructionForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstructionForGeneration::setter_setMWhenExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    p->mProperty_mWhenExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::setter_setMWhenExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhenExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstructionForGeneration::setter_setMInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::setter_setMInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstructionForGeneration::setter_setMElseInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::setter_setMElseInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @parseWhenInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_parseWhenInstructionForGeneration::cPtr_parseWhenInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mWhenExpression,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mWhenExpression (in_mWhenExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseWhenInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;
}

void cPtr_parseWhenInstructionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@parseWhenInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseWhenInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseWhenInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mWhenExpression, mProperty_mInstructionList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@parseWhenInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ("parseWhenInstructionForGeneration",
                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseWhenInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseWhenInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_syntaxSendInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syntaxSendInstructionForGeneration * p = (const cPtr_syntaxSendInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration::GALGAS_syntaxSendInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration::GALGAS_syntaxSendInstructionForGeneration (const cPtr_syntaxSendInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration GALGAS_syntaxSendInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_syntaxSendInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxSendInstructionForGeneration * p = (const cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_syntaxSendInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxSendInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxSendInstructionForGeneration * p = (cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionForGeneration::cPtr_syntaxSendInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxSendInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

void cPtr_syntaxSendInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@syntaxSendInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxSendInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ("syntaxSendInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxSendInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxSendInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRule'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                  const GALGAS_string constinArgument_inSyntaxCompnentName,
                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_currentNode_5783 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_1.addAssign_operation (var_currentNode_5783, GALGAS_string ("[firstPoint] {}")  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS_rowList var_rowArray_5815 = temp_0 ;
  GALGAS_string var_arrows_5871 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5897 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5917 = GALGAS_uint ((uint32_t) 1U) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5949 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_6007 (temp_2.getter_mInstructionList (HERE), kENUMERATION_UP) ;
  while (enumerator_6007.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_6007.current_mInstruction (HERE).ptr (), var_rowArray_5815, GALGAS_uint ((uint32_t) 0U), var_column_5917, var_currentNode_5783, var_arrowStyle_5897, var_arrows_5871, var_unusedMaxUsedRowIndex_5949, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 117)) ;
    enumerator_6007.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_6379 ;
  {
  extensionSetter_appendRow (var_rowArray_5815, GALGAS_string ("[lastPoint] {}"), GALGAS_uint ((uint32_t) 0U), var_column_5917, var_lastNodeName_6379, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 129)) ;
  }
  var_arrows_5871.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_5783, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (var_lastNodeName_6379, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_6489 = temp_3.getter_mLeftNonterminalSymbol (HERE).getter_location (HERE) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxCompnentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)).add_operation (function_escapeForTex (var_loc_6489.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 135)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).add_operation (function_escapeForTex (var_loc_6489.getter_line (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("}\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 138)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)) ;
  cEnumerator_rowList enumerator_6922 (var_rowArray_5815, kENUMERATION_DOWN) ;
  while (enumerator_6922.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)) ;
    cEnumerator__32_stringlist enumerator_6981 (enumerator_6922.current_columns (HERE), kENUMERATION_UP) ;
    while (enumerator_6981.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_6981.current (HERE).getter_mValue_30_ (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6981.current (HERE).getter_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (enumerator_6981.current (HERE).getter_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)) ;
      }
      enumerator_6981.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 150)) ;
    enumerator_6922.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5871, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\end{tikzpicture}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 155)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 21)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 22)) ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::~ GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::GALGAS_templateInstructionIfBranchListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration_2D_element GALGAS_templateInstructionIfBranchListForGeneration_2D_element::constructor_new (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionIfBranchListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionIfBranchListForGeneration_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionIfBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionIfBranchListForGeneration_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfBranchListForGeneration_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfBranchListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ("templateInstructionIfBranchListForGeneration-element",
                                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration_2D_element GALGAS_templateInstructionIfBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration_2D_element result ;
  const GALGAS_templateInstructionIfBranchListForGeneration_2D_element * p = (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (void) :
mProperty_mExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::~ GALGAS_semanticExpressionListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::constructor_new (const GALGAS_semanticExpressionForGeneration & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticExpressionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticExpressionListForGeneration_2D_element::objectCompare (const GALGAS_semanticExpressionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticExpressionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @semanticExpressionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionListForGeneration_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ("semanticExpressionListForGeneration-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  const GALGAS_semanticExpressionListForGeneration_2D_element * p = (const GALGAS_semanticExpressionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) :
mProperty_mEnumerationOrder (),
mProperty_mEnumeratedExpression (),
mProperty_mEnumeratorCppName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::~ GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2) :
mProperty_mEnumerationOrder (inOperand0),
mProperty_mEnumeratedExpression (inOperand1),
mProperty_mEnumeratorCppName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                      const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                                      const GALGAS_string & inOperand2 
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumerationOrder.objectCompare (inOperand.mProperty_mEnumerationOrder) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumeratedExpression.objectCompare (inOperand.mProperty_mEnumeratedExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumeratorCppName.objectCompare (inOperand.mProperty_mEnumeratorCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::isValid (void) const {
  return mProperty_mEnumerationOrder.isValid () && mProperty_mEnumeratedExpression.isValid () && mProperty_mEnumeratorCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::drop (void) {
  mProperty_mEnumerationOrder.drop () ;
  mProperty_mEnumeratedExpression.drop () ;
  mProperty_mEnumeratorCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::getter_mEnumerationOrder (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationOrder ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::getter_mEnumeratorCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratorCppName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionEnumeratedObjectListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ("forInstructionEnumeratedObjectListForGeneration-element",
                                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionExpressionForGeneration * p = (const cPtr_templateInstructionExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionForGeneration (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionExpressionForGeneration * p = (const cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cPtr_templateInstructionExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@templateInstructionExpressionForGeneration:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                   & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ("galgas_cli_options",
                                         "checkEntityUsefulness",
                                         0,
                                         "check-usefulness",
                                         "Check Entity Usefulness") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_gmp ("galgas_cli_options",
                                         "check_gmp",
                                         0,
                                         "check-gmp",
                                         "Run a GMP check") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ("galgas_cli_options",
                                         "displayUnicodeLexicalTestFunctions",
                                         0,
                                         "display-lexical-test-functions",
                                         "Display Unicode Lexical Test Functions") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ("galgas_cli_options",
                                         "emitSyntaxDiagrams",
                                         0,
                                         "emit-syntax-diagrams",
                                         "Emit grammar syntax diagrams in TEX files") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOnNotSharedClassDeclaration ("galgas_cli_options",
                                         "errorOnNotSharedClassDeclaration",
                                         0,
                                         "error-on-not-shared-class-declaration",
                                         "'shared class' declaration is required") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ("galgas_cli_options",
                                         "generateManyFiles",
                                         0,
                                         "generate-many-cpp-files",
                                         "Generate many C++ implementation files") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ("galgas_cli_options",
                                         "generateOneHeader",
                                         0,
                                         "generate-one-cpp-header",
                                         "Generate one C++ header file for all declarations") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles ("galgas_cli_options",
                                         "generateSharedMapAutomatonDotFiles",
                                         0,
                                         "generate-shared-map-automaton-dot-files",
                                         "Generate shared map automaton dot files") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ("galgas_cli_options",
                                         "outputHTMLTypeListFile",
                                         84,
                                         "output-html-type-dump-file",
                                         "Output a HTML file that contains all defined types") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ("galgas_cli_options",
                                         "outputHTMLgrammarFile",
                                         0,
                                         "output-html-grammar-file",
                                         "Output a HTML file for every grammar component") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ("galgas_cli_options",
                                         "printPredefinedLexicalActions",
                                         0,
                                         "print-predefined-lexical-actions",
                                         "Print the list of predefined lexical routines and functions") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ("galgas_cli_options",
                                         "propertyAccessRequiresSelf",
                                         0,
                                         "property-access-requires-self",
                                         "'self' is required for accessing properties in getter, setter and methods") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warnsAnomynousForInstructionEnumeratedObject ("galgas_cli_options",
                                         "warnsAnomynousForInstructionEnumeratedObject",
                                         0,
                                         "warns-anonymous-for-instruction",
                                         "warns on anonymous 'for' instruction enumerated object ('for () in ...')") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ("galgas_cli_options",
                                         "macosxSDK",
                                         0,
                                         "macosx",
                                         "Generate an Xcode project for OS X",
                                         0) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ("galgas_cli_options",
                                         "cppCompile",
                                         0,
                                         "compile",
                                         "Perform C++ compilation on 'string' target",
                                         "") ;

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ("galgas_cli_options",
                                         "create_project",
                                         0,
                                         "create-project",
                                         "Create a new GALGAS Project",
                                         "") ;

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ("galgas_cli_options",
                                         "extractLIBPMOption",
                                         0,
                                         "extract-libpm",
                                         "Extract embedded LIBPM at given path",
                                         "") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "project (0:0:1) -> " ;
  result << in_PROJECT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue () ;
  result << " {\n"
    "#--- Targets\n"
    "  %makefile-macosx\n"
    "  %makefile-unix\n"
    "  %makefile-x86linux32-on-macosx\n"
    "  %makefile-x86linux64-on-macosx\n"
    "  %makefile-win32-on-macosx\n"
    "  %LatestMacOS\n"
    "  %applicationBundleBase : \"fr.what\"\n"
    "  %codeblocks-windows\n"
    "  %codeblocks-linux32\n"
    "  %codeblocks-linux64\n"
    "  %codeblocks-mac\n"
    "\n"
    "#--- Source files\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-lexique.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-options.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-semantics.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-syntax.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-grammar.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-cocoa.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-program.galgas\"\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (C_Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "gui cocoa {\n"
    "  with option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options\n"
    "\n"
    "  with lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "    fileExtension: \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "    title: \"Source\"\n"
    "    blockComment : \"#\"\n"
    "  }\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar \"LL1\" {\n"
    "  syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax\n"
    "  <start_symbol>\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Identifiers and keywords                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@string tokenString\n"
    "\n"
    "style keywordsStyle -> \"Keywords\"\n"
    "\n"
    "$identifier$ ! tokenString error message \"an identifier\"\n"
    "\n"
    "#--- This is the keyword list\n"
    "list keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n"
    "  \"begin\",\n"
    "  \"end\"\n"
    "}\n"
    "\n"
    "rule 'a'->'z' |  'A'->'Z' {\n"
    "  repeat\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n"
    "  end\n"
    "  send search tokenString in keyWordList default $identifier$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Literal decimal integers                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style integerStyle -> \"Integer Constants\"\n"
    "@uint uint32value\n"
    "$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n"
    "\n"
    "message decimalNumberTooLarge : \"decimal number too large\"\n"
    "message internalError : \"internal error\"\n"
    "\n"
    "rule '0'->'9' {\n"
    "  enterCharacterIntoString (!\?tokenString !*)\n"
    "  repeat\n"
    "  while '0'->'9' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while '_' :\n"
    "  end\n"
    "  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n"
    "  send $integer$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Literal character strings                                                                    \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style stringStyle -> \"String Constants\"\n"
    "$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n"
    "\n"
    "\n"
    "message incorrectStringEnd : \"string does not end with '\\\"'\"\n"
    "\n"
    "rule '\"' {\n"
    "  repeat\n"
    "   while ' ' | '!' | '#'-> '\\uFFFD' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  end\n"
    "  select\n"
    "  case '\"' :\n"
    "    send $\"string\"$\n"
    "  default\n"
    "    error incorrectStringEnd\n"
    "  end\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Delimiters                                                                                   \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style delimitersStyle -> \"Delimiters\"\n"
    "list delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n"
    "  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n"
    "}\n"
    "\n"
    "rule list delimitorsList\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Comments                                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style commentStyle -> \"Comments\"\n"
    "$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\n"
    "rule '#' {\n"
    "  repeat\n"
    "  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n"
    "  end\n"
    "  drop $comment$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Separators                                                                                   \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "rule '\\u0001' -> ' ' {\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options {\n"
    "\n"
    "# ADD YOUR CODE\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#--- Prologue routine\n"
    "before {\n"
    "}\n"
    "\n"
    "#--- 'when' clauses\n"
    "case . \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "message \"a source text file with the ." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << " extension\"\n"
    "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar\n"
    "\?sourceFilePath:@lstring inSourceFile {\n"
    "  grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar in inSourceFile\n"
    "}\n"
    "\n"
    "#--- Epilogue routine\n"
    "after {\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "# ADD YOUR CODE\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (C_Compiler * /* inCompiler */,
                                                                                const GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax (" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique) {\n"
    "\n"
    "rule <start_symbol> {\n"
    "  # ADD YOUR SYNTAX INSTRUCTIONS\n"
    "}\n"
    "\n"
    "# ADD OTHER RULES\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performProjectCreation (const GALGAS_string constinArgument_inProjectPath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectName_3422 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 40)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_3507 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  var_galgas_5F_sources_5F_DIR_3507.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_3507.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_3507.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_3507.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_3507.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_3507.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (var_galgas_5F_sources_5F_DIR_3507.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_3422 COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR_3507.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName_3422, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  inCompiler->printMessage (GALGAS_string ("*** DONE ***\n")  COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_projectCreation (const GALGAS_string constinArgument_inProjectPath,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_length (SOURCE_FILE ("projectCreation.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).add_operation (GALGAS_string (" option) ***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61))  COMMA_SOURCE_FILE ("projectCreation.galgas", 61)) ;
      GALGAS_string var_projectName_5176 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 63)) ;
      GALGAS_bool var_ok_5225 = var_projectName_5176.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 64)) ;
      GALGAS_uint var_idx_5285 = GALGAS_uint ((uint32_t) 1U) ;
      if (var_projectName_5176.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).isValid ()) {
        uint32_t variant_5298 = var_projectName_5176.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).uintValue () ;
        bool loop_5298 = true ;
        while (loop_5298) {
          loop_5298 = GALGAS_bool (kIsStrictInf, var_idx_5285.objectCompare (var_projectName_5176.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_5225 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).isValid () ;
          if (loop_5298) {
            loop_5298 = GALGAS_bool (kIsStrictInf, var_idx_5285.objectCompare (var_projectName_5176.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_5225 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).boolValue () ;
          }
          if (loop_5298 && (0 == variant_5298)) {
            loop_5298 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 66)) ;
          }
          if (loop_5298) {
            variant_5298 -- ;
            GALGAS_char var_c_5382 = var_projectName_5176.getter_characterAtIndex (var_idx_5285, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 68)) ;
            var_ok_5225 = var_c_5382.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 69)).operator_or (GALGAS_bool (kIsEqual, var_c_5382.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 69)) ;
            var_idx_5285.increment_operation (inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_5225.operator_not (SOURCE_FILE ("projectCreation.galgas", 72)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_5176, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 74))  COMMA_SOURCE_FILE ("projectCreation.galgas", 73)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_5225.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_5225 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 78)).operator_not (SOURCE_FILE ("projectCreation.galgas", 78)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_5225.operator_not (SOURCE_FILE ("projectCreation.galgas", 79)).boolEnum () ;
            if (kBoolTrue == test_3) {
              inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80))  COMMA_SOURCE_FILE ("projectCreation.galgas", 80)) ;
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_5225.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 84)) ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterTemplateString (GALGAS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_34107 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 711)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_34107.getter_length (SOURCE_FILE ("templateSyntax.galgas", 712)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_34107  COMMA_SOURCE_FILE ("templateSyntax.galgas", 713))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 713)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateGetterCallInExpressionAST * object = (const cPtr_templateGetterCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateGetterCallInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4502 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_receiverExpression_4502, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 61)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_4711 = var_receiverExpression_4502.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 67)) ;
  GALGAS_getterMap var_getterMap_4793 = var_receiverType_4711.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 69)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList_4894 ;
  GALGAS_methodKind var_kind_4913 ;
  GALGAS_bool var_hasCompilerArgument_4941 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_4978 ;
  GALGAS_stringlist var_fieldList_4994 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 75)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateGetterCallInExpressionAST temp_2 = object ;
    test_1 = var_getterMap_4793.getter_hasKey (temp_2.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 76)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 76)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = object ;
      GALGAS_location joker_5165 ; // Joker input parameter
      GALGAS_methodQualifier joker_5221_2 ; // Joker input parameter
      GALGAS_string joker_5221_1 ; // Joker input parameter
      var_getterMap_4793.method_searchKey (temp_3.getter_mGetterName (HERE), var_kind_4913, var_getterFormalArgumentTypeList_4894, joker_5165, var_hasCompilerArgument_4941, var_returnedType_4978, joker_5221_2, joker_5221_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 77)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_uint var_matchingReaderCount_5266 = GALGAS_uint ((uint32_t) 0U) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_receiverType_4711.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 87)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_getterFormalArgumentTypeList_4894 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 88)) ;
        var_hasCompilerArgument_4941 = GALGAS_bool (true) ;
        var_returnedType_4978 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 90)) ;
        var_kind_4913 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 91)) ;
        cEnumerator_typedPropertyList enumerator_5560 (var_receiverType_4711.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 92)), kENUMERATION_UP) ;
        while (enumerator_5560.hasCurrentObject ()) {
          GALGAS_getterMap var_aMap_5591 = enumerator_5560.current_mPropertyTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 93)) ;
          const GALGAS_templateGetterCallInExpressionAST temp_5 = object ;
          const cMapElement_getterMap * objectArray_5638 = (const cMapElement_getterMap *) var_aMap_5591.readAccessForWithInstruction (temp_5.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 94))) ;
          if (NULL != objectArray_5638) {
              macroValidSharedObject (objectArray_5638, cMapElement_getterMap) ;
            var_matchingReaderCount_5266.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 95)) ;
            var_getterFormalArgumentTypeList_4894 = objectArray_5638->mProperty_mArgumentTypeList ;
            var_hasCompilerArgument_4941 = objectArray_5638->mProperty_mHasCompilerArgument ;
            var_returnedType_4978 = objectArray_5638->mProperty_mReturnedType ;
            var_kind_4913 = objectArray_5638->mProperty_mKind ;
            var_fieldList_4994.addAssign_operation (enumerator_5560.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 100))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 100)) ;
          }
          enumerator_5560.gotoNextObject () ;
        }
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, var_matchingReaderCount_5266.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_6) {
            const GALGAS_templateGetterCallInExpressionAST temp_7 = object ;
            const GALGAS_templateGetterCallInExpressionAST temp_8 = object ;
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (temp_7.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 104)), GALGAS_string ("the '@").add_operation (var_receiverType_4711.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).add_operation (temp_8.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 104)) ;
            var_getterFormalArgumentTypeList_4894.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4941.drop () ; // Release error dropped variable
            var_returnedType_4978.drop () ; // Release error dropped variable
            var_kind_4913.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_5266.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string var_s_6324 = GALGAS_string::makeEmptyString () ;
              cEnumerator_stringlist enumerator_6357 (var_fieldList_4994, kENUMERATION_UP) ;
              while (enumerator_6357.hasCurrentObject ()) {
                var_s_6324.plusAssign_operation(enumerator_6357.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)) ;
                if (enumerator_6357.hasNextObject ()) {
                  var_s_6324.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 112)) ;
                }
                enumerator_6357.gotoNextObject () ;
              }
              const GALGAS_templateGetterCallInExpressionAST temp_11 = object ;
              const GALGAS_templateGetterCallInExpressionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_11.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 114)), GALGAS_string ("the '@").add_operation (var_receiverType_4711.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 115)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 115)).add_operation (temp_12.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 115)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 115)).add_operation (var_s_6324, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 116)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 116)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 114)) ;
              var_getterFormalArgumentTypeList_4894.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4941.drop () ; // Release error dropped variable
              var_returnedType_4978.drop () ; // Release error dropped variable
              var_kind_4913.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsEqual, var_getterMap_4793.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 119)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_templateGetterCallInExpressionAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 120)), GALGAS_string ("the '@").add_operation (var_receiverType_4711.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 121)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 121)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 120)) ;
          var_getterFormalArgumentTypeList_4894.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4941.drop () ; // Release error dropped variable
          var_returnedType_4978.drop () ; // Release error dropped variable
          var_kind_4913.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_14) {
        const GALGAS_templateGetterCallInExpressionAST temp_17 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_18 = object ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        appendFixItActions (fixItArray19, kFixItReplace, var_getterMap_4793.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 127))) ;
        inCompiler->emitSemanticError (temp_17.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 124)), GALGAS_string ("the '@").add_operation (var_receiverType_4711.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 125)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 125)).add_operation (temp_18.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 125)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 125)), fixItArray19  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 124)) ;
        var_getterFormalArgumentTypeList_4894.drop () ; // Release error dropped variable
        var_hasCompilerArgument_4941.drop () ; // Release error dropped variable
        var_returnedType_4978.drop () ; // Release error dropped variable
        var_kind_4913.drop () ; // Release error dropped variable
      }
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateGetterCallInExpressionAST temp_21 = object ;
    test_20 = GALGAS_bool (kIsNotEqual, temp_21.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("templateAnalysis.galgas", 131)).objectCompare (var_getterFormalArgumentTypeList_4894.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 131)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateGetterCallInExpressionAST temp_22 = object ;
      const GALGAS_templateGetterCallInExpressionAST temp_23 = object ;
      const GALGAS_templateGetterCallInExpressionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_22.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 132)), GALGAS_string ("calling the '").add_operation (temp_23.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).add_operation (var_receiverType_4711.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).add_operation (var_getterFormalArgumentTypeList_4894.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 133)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)).add_operation (temp_24.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("templateAnalysis.galgas", 134)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 134)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_20) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_7730 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 136)) ;
    const GALGAS_templateGetterCallInExpressionAST temp_26 = object ;
    cEnumerator_templateExpressionListAST enumerator_7770 (temp_26.getter_mExpressionList (HERE), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_7806 (var_getterFormalArgumentTypeList_4894, kENUMERATION_UP) ;
    while (enumerator_7770.hasCurrentObject () && enumerator_7806.hasCurrentObject ()) {
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (kIsNotEqual, enumerator_7806.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_7770.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_27) {
          GALGAS_string temp_28 ;
          const enumGalgasBool test_29 = GALGAS_bool (kIsNotEqual, enumerator_7806.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_29) {
            temp_28 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_29) {
            temp_28 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (enumerator_7770.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 139)), GALGAS_string ("the selector should be '!").add_operation (enumerator_7806.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 139)).add_operation (temp_28, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 139)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 139)), fixItArray30  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 139)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_8210 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_7770.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_8210, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 141)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7806.current_mFormalArgumentType (HERE), var_exp_8210.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 147)), enumerator_7770.current_mEndOfExpressionLocation (HERE), var_exp_8210, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)) ;
      }
      var_constructorEffectiveParameterList_7730.addAssign_operation (var_exp_8210  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)) ;
      enumerator_7770.gotoNextObject () ;
      enumerator_7806.gotoNextObject () ;
    }
    const GALGAS_templateGetterCallInExpressionAST temp_31 = object ;
    const GALGAS_templateGetterCallInExpressionAST temp_32 = object ;
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_4978, temp_31.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 152)), var_kind_4913, var_receiverExpression_4502, var_fieldList_4994, temp_32.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 156)), var_constructorEffectiveParameterList_7730, var_hasCompilerArgument_4941  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 150)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST.mSlotID,
                                                   extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateConstructorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateConstructorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateConstructorAST * object = (const cPtr_templateConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateConstructorAST) ;
  const GALGAS_templateConstructorAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_constructorType_9353 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)) ;
  GALGAS_constructorMap var_constructorMap_9527 = var_constructorType_9353.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_9623 ;
  GALGAS_bool var_hasCompilerArgument_9651 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_9706 ;
  const GALGAS_templateConstructorAST temp_1 = object ;
  const cMapElement_constructorMap * objectArray_9713 = (const cMapElement_constructorMap *) var_constructorMap_9527.readAccessForWithInstruction (temp_1.getter_mConstructorName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 180))) ;
  if (NULL != objectArray_9713) {
      macroValidSharedObject (objectArray_9713, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_9706 = objectArray_9713->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_9651 = objectArray_9713->mProperty_mHasCompilerArgument ;
    var_returnedType_9623 = objectArray_9713->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_9527.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = object ;
        const GALGAS_templateConstructorAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.getter_mConstructorName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 186)), GALGAS_string ("the '@").add_operation (temp_4.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 187)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 187)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)) ;
        var_constructorFormalArgumentTypeList_9706.drop () ; // Release error dropped variable
        var_hasCompilerArgument_9651.drop () ; // Release error dropped variable
        var_returnedType_9623.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = object ;
      const GALGAS_templateConstructorAST temp_7 = object ;
      const GALGAS_templateConstructorAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_9527.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 193))) ;
      inCompiler->emitSemanticError (temp_6.getter_mConstructorName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 190)), GALGAS_string ("the '@").add_operation (temp_7.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)).add_operation (temp_8.getter_mConstructorName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)) ;
      var_constructorFormalArgumentTypeList_9706.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9651.drop () ; // Release error dropped variable
      var_returnedType_9623.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10526 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("templateAnalysis.galgas", 198)).objectCompare (var_constructorFormalArgumentTypeList_9706.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 198)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = object ;
      const GALGAS_templateConstructorAST temp_13 = object ;
      const GALGAS_templateConstructorAST temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.getter_mConstructorName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 199)), GALGAS_string ("calling the '").add_operation (temp_13.getter_mConstructorName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (var_constructorType_9353.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (var_constructorFormalArgumentTypeList_9706.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 201)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 201)).add_operation (temp_14.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("templateAnalysis.galgas", 202)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 201)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 202)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)) ;
      var_constructorEffectiveParameterList_10526.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_10526 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 205)) ;
    const GALGAS_templateConstructorAST temp_16 = object ;
    cEnumerator_templateExpressionListAST enumerator_11085 (temp_16.getter_mExpressionList (HERE), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_11126 (var_constructorFormalArgumentTypeList_9706, kENUMERATION_UP) ;
    while (enumerator_11085.hasCurrentObject () && enumerator_11126.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_11126.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_11085.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_11126.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_11085.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 208)), GALGAS_string ("the selector should be '!").add_operation (enumerator_11126.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 209)).add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 209)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 209)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 208)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_11540 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_11085.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_11540, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 211)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_11126.current_mFormalArgumentType (HERE), var_exp_11540.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 217)), enumerator_11085.current_mEndOfExpressionLocation (HERE), var_exp_11540, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 217)) ;
      }
      var_constructorEffectiveParameterList_10526.addAssign_operation (var_exp_11540  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 218)) ;
      enumerator_11085.gotoNextObject () ;
      enumerator_11126.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = object ;
  const GALGAS_templateConstructorAST temp_22 = object ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_9623, temp_21.getter_mConstructorName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 224)), var_constructorType_9353, temp_22.getter_mConstructorName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 226)), var_constructorEffectiveParameterList_10526, var_hasCompilerArgument_9651  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 222)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateConstructorAST.mSlotID,
                                                   extensionMethod_templateConstructorAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateConstructorAST_templateExpressionAnalysis (defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperTemplateCallAST * object = (const cPtr_templateFileWrapperTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperTemplateCallAST) ;
  const GALGAS_templateFileWrapperTemplateCallAST temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.getter_mFileWrapperName (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 241)), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                   extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_13609 ;
  const GALGAS_templateAndOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_13609, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13835 ;
  const GALGAS_templateAndOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_13835, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 262)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_13910 = var_leftExpression_13609.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 269)) ;
  {
  const GALGAS_templateAndOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_13910, var_rightExpression_13835.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 272)), var_leftType_13910.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 273)).getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 273)), GALGAS_string ("&"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_13835, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 270)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_13910, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_13609, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 283)), var_rightExpression_13835  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 279)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                   extensionMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_14940 ;
  const GALGAS_templateOrOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_14940, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 297)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15166 ;
  const GALGAS_templateOrOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_15166, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 304)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_15241 = var_leftExpression_14940.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 311)) ;
  {
  const GALGAS_templateOrOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_15241, var_rightExpression_15166.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 314)), var_leftType_15241.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 315)).getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 315)), GALGAS_string ("|"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_15166, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 312)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_15241, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_14940, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 325)), var_rightExpression_15166  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                   extensionMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_16270 ;
  const GALGAS_templateXorOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_16270, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 339)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16496 ;
  const GALGAS_templateXorOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_16496, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 346)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_16571 = var_leftExpression_16270.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 353)) ;
  {
  const GALGAS_templateXorOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_16571, var_rightExpression_16496.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 356)), var_leftType_16571.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 357)).getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 357)), GALGAS_string ("^"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_16496, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 354)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_16571, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_16270, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 367)), var_rightExpression_16496  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 363)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                   extensionMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  const GALGAS_templateTrueBoolAST temp_0 = object ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_0.getter_mLocation (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 380)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                   extensionMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  const GALGAS_templateFalseBoolAST temp_0 = object ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_0.getter_mLocation (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 391)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                   extensionMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

