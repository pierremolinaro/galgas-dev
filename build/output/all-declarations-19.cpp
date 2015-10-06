#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-19.h"


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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionSwitchForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSwitchExpression.objectCompare (p->mAttribute_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateInstructionSwitchBranchList.objectCompare (p->mAttribute_mTemplateInstructionSwitchBranchList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionSwitchForGeneration::objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mSwitchExpression,
                                                                                                              const GALGAS_templateInstructionSwitchBranchListForGeneration & inAttribute_mTemplateInstructionSwitchBranchList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration result ;
  if (inAttribute_mSwitchExpression.isValid () && inAttribute_mTemplateInstructionSwitchBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchForGeneration (inAttribute_mSwitchExpression, inAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionSwitchForGeneration::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    result = p->mAttribute_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_templateInstructionSwitchForGeneration::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchForGeneration::reader_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    result = p->mAttribute_mTemplateInstructionSwitchBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration cPtr_templateInstructionSwitchForGeneration::reader_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateInstructionSwitchBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @templateInstructionSwitchForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                                          const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mAttribute_mSwitchExpression (in_mSwitchExpression),
mAttribute_mTemplateInstructionSwitchBranchList (in_mTemplateInstructionSwitchBranchList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@templateInstructionSwitchForGeneration:" ;
  mAttribute_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionSwitchForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mAttribute_mSwitchExpression, mAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionSwitchForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "galgas",
  "galgasTemplate",
  "galgasProject",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const char * kVersionString = "version " PROJECT_VERSION_STRING " [debug]" ;
#else
  static const char * kVersionString = "version " PROJECT_VERSION_STRING ;
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_string var_creationProjectName = GALGAS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.reader_value ()) ;
    {
    routine_projectCreation (var_creationProjectName, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 20)) ;
    }
  }
  {
    const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 27)) ;
      }
    }
  }
  {
    {
    routine_generatePredefinedTypeFiles (GALGAS_string (gOption_galgas_5F_cli_5F_options_generatePredefinedTypes.reader_value ()), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 34)) ;
    }
  }
  {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.reader_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_updateLIBPMatPath (GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.reader_value ()), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 41)) ;
      }
    }
  }
  {
    const enumGalgasBool test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_check_5F_gmp.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_checkGMP (inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 51)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_parentDirectory = constinArgument_inSourceFile.mAttribute_string.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 66)).reader_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 66)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 67)) ;
  temp_0.addAssign_operation (GALGAS_string ("galgasProject")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 67)) ;
  GALGAS_stringlist var_candidateProjectFiles = var_parentDirectory.reader_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgas_prgm.galgas", 67)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles.reader_length (SOURCE_FILE ("galgas_prgm.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (constinArgument_inSourceFile.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("no project file in parent directory of source file")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 69)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles.reader_length (SOURCE_FILE ("galgas_prgm.galgas", 70)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_s = GALGAS_string ("several project files in source file parent directory:") ;
      cEnumerator_stringlist enumerator_4461 (var_candidateProjectFiles, kEnumeration_up) ;
      while (enumerator_4461.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_4461.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 73))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 73)) ;
        enumerator_4461.gotoNextObject () ;
      }
      GALGAS_location location_4 (constinArgument_inSourceFile.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, var_s  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 75)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath = var_parentDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 77)).add_operation (var_candidateProjectFiles.reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 77)) ;
      {
      routine_parseAndAnalyzeProject (GALGAS_lstring::constructor_new (var_projectFilePath, constinArgument_inSourceFile.mAttribute_location  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 78)), constinArgument_inSourceFile.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 78)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_1'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST joker_5512 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5512  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 92)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_2'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__32_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject (constinArgument_inProjectSourceFile, GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 105)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         kVersionString,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  bool verboseOptionOn = true ;
  int16_t returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      verboseOptionOn = gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int16_t r = 0 ;
        if (fileExtension == "galgas") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_Grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasTemplate") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_templateGrammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_templateGrammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasProject") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_ProjectGrammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonLexique COMMA_HERE) ;
    //--- Display error and warnings count
      if (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@templateExpressionAST templateExpressionAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_templateExpressionAST_templateExpressionAnalysis> gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateExpressionAnalysis (const int32_t inClassIndex,
                                                     categoryMethodSignature_templateExpressionAST_templateExpressionAnalysis inMethod) {
  gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_templateExpressionAST_templateExpressionAnalysis (void) {
  gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateExpressionAST_templateExpressionAnalysis (NULL,
                                                                             freeCategoryMethod_templateExpressionAST_templateExpressionAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                    const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_templateExpressionAST_templateExpressionAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis.count ()) {
      f = gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis.count ()) {
           f = gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_templateExpressionAST_templateExpressionAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, out_outExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@templateInstructionAST templateInstructionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_templateInstructionAST_templateInstructionAnalysis> gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateInstructionAnalysis (const int32_t inClassIndex,
                                                      categoryMethodSignature_templateInstructionAST_templateInstructionAnalysis inMethod) {
  gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_templateInstructionAST_templateInstructionAnalysis (void) {
  gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionAST_templateInstructionAnalysis (NULL,
                                                                               freeCategoryMethod_templateInstructionAST_templateInstructionAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                     const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                     GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_templateInstructionAST_templateInstructionAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis.count ()) {
      f = gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis.count ()) {
           f = gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_templateInstructionAST_templateInstructionAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, io_ioInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@templateInstructionForGeneration templateCodeGeneration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_templateInstructionForGeneration_templateCodeGeneration> gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                 categoryMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) {
  gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_templateInstructionForGeneration_templateCodeGeneration (void) {
  gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForGeneration_templateCodeGeneration (NULL,
                                                                                    freeCategoryMethod_templateInstructionForGeneration_templateCodeGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                GALGAS_string & io_ioGeneratedCode,
                                                GALGAS_stringset & io_ioInclusionSet,
                                                GALGAS_uint & io_ioTemporaryVariableIndex,
                                                GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                GALGAS_bool & io_ioUseColumnMarker,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_templateInstructionForGeneration_templateCodeGeneration f = NULL ;
    if (classIndex < gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration.count ()) {
      f = gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration.count ()) {
           f = gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_templateInstructionForGeneration_templateCodeGeneration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, io_ioUseColumnMarker, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@lexicalArgumentModeAST lexicalFormalModeName'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_lexicalFormalModeName (const GALGAS_lexicalArgumentModeAST & inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Reader '@lexicalArgumentModeAST cppConstInFormalArgument'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cppConstInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string ("const ") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@lexicalArgumentModeAST cppReferenceInFormalArgument'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cppReferenceInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string (" &") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@lexicalArgumentModeAST cocoaPointerInFormalArgument'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cocoaPointerInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string (" *") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Reader '@lexicalTypeEnum lexicalTypeBaseName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_lexicalTypeBaseName (const GALGAS_lexicalTypeEnum & inObject,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("string") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("char") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("uint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("uint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("sint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("sint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("bigint") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@lexicalExpressionAST generateConditionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalExpressionAST_generateConditionCode> gCategoryReaderTable_lexicalExpressionAST_generateConditionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateConditionCode (const int32_t inClassIndex,
                                                categoryReaderSignature_lexicalExpressionAST_generateConditionCode inReader) {
  gCategoryReaderTable_lexicalExpressionAST_generateConditionCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalExpressionAST_generateConditionCode (void) {
  gCategoryReaderTable_lexicalExpressionAST_generateConditionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalExpressionAST_generateConditionCode (NULL,
                                                                       freeCategoryReader_lexicalExpressionAST_generateConditionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                        GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalExpressionAST_generateConditionCode f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalExpressionAST_generateConditionCode.count ()) {
      f = gCategoryReaderTable_lexicalExpressionAST_generateConditionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalExpressionAST_generateConditionCode.count ()) {
           f = gCategoryReaderTable_lexicalExpressionAST_generateConditionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalExpressionAST_generateConditionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract category reader '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument> gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                            categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument inReader) {
  gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (NULL,
                                                                                                             freeCategoryReader_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.count ()) {
      f = gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.count ()) {
           f = gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Abstract category reader '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument> gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateRoutineArgument (const int32_t inClassIndex,
                                                  categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument inReader) {
  gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (void) {
  gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (NULL,
                                                                                            freeCategoryReader_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.count ()) {
      f = gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.count ()) {
           f = gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@lexicalSendDefaultActionAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalSendDefaultActionAST_generateDefaultSendCode> gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateDefaultSendCode (const int32_t inClassIndex,
                                                  categoryReaderSignature_lexicalSendDefaultActionAST_generateDefaultSendCode inReader) {
  gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalSendDefaultActionAST_generateDefaultSendCode (void) {
  gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSendDefaultActionAST_generateDefaultSendCode (NULL,
                                                                                freeCategoryReader_lexicalSendDefaultActionAST_generateDefaultSendCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                          GALGAS_string in_inScannerClassName,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalSendDefaultActionAST_generateDefaultSendCode f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode.count ()) {
      f = gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode.count ()) {
           f = gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalSendDefaultActionAST_generateDefaultSendCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@lexicalInstructionAST generateInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalInstructionAST_generateInstructionCode> gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateInstructionCode (const int32_t inClassIndex,
                                                  categoryReaderSignature_lexicalInstructionAST_generateInstructionCode inReader) {
  gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalInstructionAST_generateInstructionCode (void) {
  gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalInstructionAST_generateInstructionCode (NULL,
                                                                          freeCategoryReader_lexicalInstructionAST_generateInstructionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                          GALGAS_string in_inScannerClassName,
                                                          GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalInstructionAST_generateInstructionCode f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode.count ()) {
      f = gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode.count ()) {
           f = gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalInstructionAST_generateInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category reader '@abstractLexicalRuleAST generateCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractLexicalRuleAST_generateCode> gCategoryReaderTable_abstractLexicalRuleAST_generateCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCode (const int32_t inClassIndex,
                                       categoryReaderSignature_abstractLexicalRuleAST_generateCode inReader) {
  gCategoryReaderTable_abstractLexicalRuleAST_generateCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractLexicalRuleAST_generateCode (void) {
  gCategoryReaderTable_abstractLexicalRuleAST_generateCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractLexicalRuleAST_generateCode (NULL,
                                                                freeCategoryReader_abstractLexicalRuleAST_generateCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                               GALGAS_string in_inScannerClassName,
                                               GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractLexicalRuleAST_generateCode f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractLexicalRuleAST_generateCode.count ()) {
      f = gCategoryReaderTable_abstractLexicalRuleAST_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractLexicalRuleAST_generateCode.count ()) {
           f = gCategoryReaderTable_abstractLexicalRuleAST_generateCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractLexicalRuleAST_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@lexicalExpressionAST generateCocoaConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalExpressionAST_generateCocoaConditionCode> gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaConditionCode (const int32_t inClassIndex,
                                                     categoryReaderSignature_lexicalExpressionAST_generateCocoaConditionCode inReader) {
  gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalExpressionAST_generateCocoaConditionCode (void) {
  gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalExpressionAST_generateCocoaConditionCode (NULL,
                                                                            freeCategoryReader_lexicalExpressionAST_generateCocoaConditionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                             GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalExpressionAST_generateCocoaConditionCode f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode.count ()) {
      f = gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode.count ()) {
           f = gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalExpressionAST_generateCocoaConditionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Abstract category reader '@lexicalRoutineOrFunctionFormalInputArgumentAST generateCocoaRoutineOrFunctionArgument'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument> gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                                 categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument inReader) {
  gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (NULL,
                                                                                                                  freeCategoryReader_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.count ()) {
      f = gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.count ()) {
           f = gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Abstract category reader '@abstractLexicalRoutineActualArgumentAST generateCocoaRoutineArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument> gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaRoutineArgument (const int32_t inClassIndex,
                                                       categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument inReader) {
  gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (void) {
  gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (NULL,
                                                                                                 freeCategoryReader_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                               GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.count ()) {
      f = gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.count ()) {
           f = gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category reader '@lexicalSendDefaultActionAST generateCocoaDefaultSendCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode> gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaDefaultSendCode (const int32_t inClassIndex,
                                                       categoryReaderSignature_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode inReader) {
  gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (void) {
  gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (NULL,
                                                                                     freeCategoryReader_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                               GALGAS_string in_inScannerClassName,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.count ()) {
      f = gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.count ()) {
           f = gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@lexicalInstructionAST generateCocoaInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_lexicalInstructionAST_generateCocoaInstructionCode> gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                       categoryReaderSignature_lexicalInstructionAST_generateCocoaInstructionCode inReader) {
  gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_lexicalInstructionAST_generateCocoaInstructionCode (void) {
  gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalInstructionAST_generateCocoaInstructionCode (NULL,
                                                                               freeCategoryReader_lexicalInstructionAST_generateCocoaInstructionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                               GALGAS_string in_inScannerClassName,
                                                               GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_lexicalInstructionAST_generateCocoaInstructionCode f = NULL ;
    if (classIndex < gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode.count ()) {
      f = gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode.count ()) {
           f = gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_lexicalInstructionAST_generateCocoaInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category reader '@abstractLexicalRuleAST generateCocoaCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractLexicalRuleAST_generateCocoaCode> gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaCode (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractLexicalRuleAST_generateCocoaCode inReader) {
  gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractLexicalRuleAST_generateCocoaCode (void) {
  gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractLexicalRuleAST_generateCocoaCode (NULL,
                                                                     freeCategoryReader_abstractLexicalRuleAST_generateCocoaCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                    GALGAS_string in_inScannerClassName,
                                                    GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractLexicalRuleAST_generateCocoaCode f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode.count ()) {
      f = gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode.count ()) {
           f = gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractLexicalRuleAST_generateCocoaCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Reader '@lexicalTypeEnum cppTypeName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cppTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("C_String") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("utf32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("uint32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("uint64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("int32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("int64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("C_BigInt") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Reader '@lexicalTypeEnum appendMethodName'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_appendMethodName (const GALGAS_lexicalTypeEnum & inObject,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("appendCLiteralStringConstant") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("appendUnicodeCharacter") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("appendDouble") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("appendCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category Reader '@lexicalTypeEnum appendArgumentOfMethod'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_appendArgumentOfMethod (const GALGAS_lexicalTypeEnum & inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string (" COMMA_HERE") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Reader '@lexicalTypeEnum initialization'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_initialization (const GALGAS_lexicalTypeEnum & inObject,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string (".setLengthToZero ()") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string (" = TO_UNICODE (0)") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string (".setToZero ()") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Reader '@lexicalTypeEnum cocoaTypeName'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cocoaTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("UInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("SInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("SInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Reader '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool categoryReader_needsReferenceInInputOutputInCocoa (const GALGAS_lexicalTypeEnum & inObject,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Reader '@lexicalTypeEnum cocoaInitializationCode'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cocoaInitializationCode (const GALGAS_lexicalTypeEnum & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Reader '@lexicalTypeEnum cocoaResetPrefix'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cocoaResetPrefix (const GALGAS_lexicalTypeEnum & inObject,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("[") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("[") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category Reader '@lexicalTypeEnum cocoaReset'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_cocoaReset (const GALGAS_lexicalTypeEnum & inObject,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction> gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalDefaultAction (const int32_t inClassIndex,
                                                    categoryMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction inMethod) {
  gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction (void) {
  gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction (NULL,
                                                                                  freeCategoryMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                   GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction f = NULL ;
    if (classIndex < gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.count ()) {
      f = gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.count ()) {
           f = gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@lexicalExpressionAST checkLexicalExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_lexicalExpressionAST_checkLexicalExpression> gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                 categoryMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) {
  gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_lexicalExpressionAST_checkLexicalExpression (void) {
  gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalExpressionAST_checkLexicalExpression (NULL,
                                                                        freeCategoryMethod_lexicalExpressionAST_checkLexicalExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_lexicalExpressionAST_checkLexicalExpression f = NULL ;
    if (classIndex < gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression.count ()) {
      f = gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression.count ()) {
           f = gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_lexicalExpressionAST_checkLexicalExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument> gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalFunctionCallArgument (const int32_t inClassIndex,
                                                           categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument inMethod) {
  gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (NULL,
                                                                                                            freeCategoryMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument f = NULL ;
    if (classIndex < gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.count ()) {
      f = gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.count ()) {
           f = gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument> gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                          categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) {
  gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (NULL,
                                                                                                           freeCategoryMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                         GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                         GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument f = NULL ;
    if (classIndex < gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.count ()) {
      f = gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.count ()) {
           f = gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument> gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                          categoryMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument inMethod) {
  gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (void) {
  gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (NULL,
                                                                                                    freeCategoryMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                         GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                         GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                         GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.count ()) {
      f = gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.count ()) {
           f = gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentMode, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@lexicalInstructionAST checkLexicalInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_lexicalInstructionAST_checkLexicalInstruction> gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalInstruction (const int32_t inClassIndex,
                                                  categoryMethodSignature_lexicalInstructionAST_checkLexicalInstruction inMethod) {
  gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_lexicalInstructionAST_checkLexicalInstruction (void) {
  gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalInstructionAST_checkLexicalInstruction (NULL,
                                                                          freeCategoryMethod_lexicalInstructionAST_checkLexicalInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 GALGAS_lexicalTagMap & io_ioTagMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_lexicalInstructionAST_checkLexicalInstruction f = NULL ;
    if (classIndex < gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction.count ()) {
      f = gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction.count ()) {
           f = gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_lexicalInstructionAST_checkLexicalInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, io_ioTagMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractLexicalRuleAST checkLexicalRule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule> gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRule (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) {
  gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractLexicalRuleAST_checkLexicalRule (void) {
  gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractLexicalRuleAST_checkLexicalRule (NULL,
                                                                    freeCategoryMethod_abstractLexicalRuleAST_checkLexicalRule) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule.count ()) {
      f = gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule.count ()) {
           f = gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractLexicalRuleAST_checkLexicalRule.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext::GALGAS_guiAnalysisContext (void) :
mAttribute_mImportedOptionComponentList (),
mAttribute_mBoolOptionList (),
mAttribute_mUIntOptionList (),
mAttribute_mStringOptionList (),
mAttribute_mNibAndClassList (),
mAttribute_mExtensionMap (),
mAttribute_mWithLexiqueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext::~ GALGAS_guiAnalysisContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext::GALGAS_guiAnalysisContext (const GALGAS_stringlist & inOperand0,
                                                      const GALGAS_guiCommandLineOptionList & inOperand1,
                                                      const GALGAS_guiCommandLineOptionList & inOperand2,
                                                      const GALGAS_guiCommandLineOptionList & inOperand3,
                                                      const GALGAS_stringlist & inOperand4,
                                                      const GALGAS_extensionMap & inOperand5,
                                                      const GALGAS_importedLexiqueList & inOperand6) :
mAttribute_mImportedOptionComponentList (inOperand0),
mAttribute_mBoolOptionList (inOperand1),
mAttribute_mUIntOptionList (inOperand2),
mAttribute_mStringOptionList (inOperand3),
mAttribute_mNibAndClassList (inOperand4),
mAttribute_mExtensionMap (inOperand5),
mAttribute_mWithLexiqueList (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiAnalysisContext (GALGAS_stringlist::constructor_emptyList (HERE),
                                    GALGAS_guiCommandLineOptionList::constructor_emptyList (HERE),
                                    GALGAS_guiCommandLineOptionList::constructor_emptyList (HERE),
                                    GALGAS_guiCommandLineOptionList::constructor_emptyList (HERE),
                                    GALGAS_stringlist::constructor_emptyList (HERE),
                                    GALGAS_extensionMap::constructor_emptyMap (HERE),
                                    GALGAS_importedLexiqueList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::constructor_new (const GALGAS_stringlist & inOperand0,
                                                                      const GALGAS_guiCommandLineOptionList & inOperand1,
                                                                      const GALGAS_guiCommandLineOptionList & inOperand2,
                                                                      const GALGAS_guiCommandLineOptionList & inOperand3,
                                                                      const GALGAS_stringlist & inOperand4,
                                                                      const GALGAS_extensionMap & inOperand5,
                                                                      const GALGAS_importedLexiqueList & inOperand6 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_guiAnalysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiAnalysisContext::objectCompare (const GALGAS_guiAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mImportedOptionComponentList.objectCompare (inOperand.mAttribute_mImportedOptionComponentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoolOptionList.objectCompare (inOperand.mAttribute_mBoolOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUIntOptionList.objectCompare (inOperand.mAttribute_mUIntOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStringOptionList.objectCompare (inOperand.mAttribute_mStringOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNibAndClassList.objectCompare (inOperand.mAttribute_mNibAndClassList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtensionMap.objectCompare (inOperand.mAttribute_mExtensionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWithLexiqueList.objectCompare (inOperand.mAttribute_mWithLexiqueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiAnalysisContext::isValid (void) const {
  return mAttribute_mImportedOptionComponentList.isValid () && mAttribute_mBoolOptionList.isValid () && mAttribute_mUIntOptionList.isValid () && mAttribute_mStringOptionList.isValid () && mAttribute_mNibAndClassList.isValid () && mAttribute_mExtensionMap.isValid () && mAttribute_mWithLexiqueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiAnalysisContext::drop (void) {
  mAttribute_mImportedOptionComponentList.drop () ;
  mAttribute_mBoolOptionList.drop () ;
  mAttribute_mUIntOptionList.drop () ;
  mAttribute_mStringOptionList.drop () ;
  mAttribute_mNibAndClassList.drop () ;
  mAttribute_mExtensionMap.drop () ;
  mAttribute_mWithLexiqueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiAnalysisContext::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @guiAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mImportedOptionComponentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoolOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUIntOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStringOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNibAndClassList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtensionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWithLexiqueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_guiAnalysisContext::reader_mImportedOptionComponentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedOptionComponentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiAnalysisContext::reader_mBoolOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoolOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiAnalysisContext::reader_mUIntOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUIntOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiAnalysisContext::reader_mStringOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_guiAnalysisContext::reader_mNibAndClassList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNibAndClassList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_guiAnalysisContext::reader_mExtensionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_guiAnalysisContext::reader_mWithLexiqueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWithLexiqueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @guiAnalysisContext type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiAnalysisContext ("guiAnalysisContext",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiAnalysisContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiAnalysisContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guiAnalysisContext result ;
  const GALGAS_guiAnalysisContext * p = (const GALGAS_guiAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedComponentStruct::GALGAS_parsedComponentStruct (void) :
mAttribute_mParsedSemanticsComponentMap (),
mAttribute_mParsedLexiqueComponentMap (),
mAttribute_mParsedSyntaxComponentMap (),
mAttribute_mParsedOptionComponentMap (),
mAttribute_mParsedGrammarComponentMap (),
mAttribute_mParsedProgramComponentMap (),
mAttribute_mParsedGuiComponentMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedComponentStruct::~ GALGAS_parsedComponentStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedComponentStruct::GALGAS_parsedComponentStruct (const GALGAS_parsedSemanticsComponentMap & inOperand0,
                                                            const GALGAS_parsedLexiqueComponentMap & inOperand1,
                                                            const GALGAS_parsedSyntaxComponentMap & inOperand2,
                                                            const GALGAS_parsedOptionComponentMap & inOperand3,
                                                            const GALGAS_parsedGrammarComponentMap & inOperand4,
                                                            const GALGAS_parsedProgramComponentMap & inOperand5,
                                                            const GALGAS_parsedGuiComponentMap & inOperand6) :
mAttribute_mParsedSemanticsComponentMap (inOperand0),
mAttribute_mParsedLexiqueComponentMap (inOperand1),
mAttribute_mParsedSyntaxComponentMap (inOperand2),
mAttribute_mParsedOptionComponentMap (inOperand3),
mAttribute_mParsedGrammarComponentMap (inOperand4),
mAttribute_mParsedProgramComponentMap (inOperand5),
mAttribute_mParsedGuiComponentMap (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedComponentStruct GALGAS_parsedComponentStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedComponentStruct (GALGAS_parsedSemanticsComponentMap::constructor_emptyMap (HERE),
                                       GALGAS_parsedLexiqueComponentMap::constructor_emptyMap (HERE),
                                       GALGAS_parsedSyntaxComponentMap::constructor_emptyMap (HERE),
                                       GALGAS_parsedOptionComponentMap::constructor_emptyMap (HERE),
                                       GALGAS_parsedGrammarComponentMap::constructor_emptyMap (HERE),
                                       GALGAS_parsedProgramComponentMap::constructor_emptyMap (HERE),
                                       GALGAS_parsedGuiComponentMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedComponentStruct GALGAS_parsedComponentStruct::constructor_new (const GALGAS_parsedSemanticsComponentMap & inOperand0,
                                                                            const GALGAS_parsedLexiqueComponentMap & inOperand1,
                                                                            const GALGAS_parsedSyntaxComponentMap & inOperand2,
                                                                            const GALGAS_parsedOptionComponentMap & inOperand3,
                                                                            const GALGAS_parsedGrammarComponentMap & inOperand4,
                                                                            const GALGAS_parsedProgramComponentMap & inOperand5,
                                                                            const GALGAS_parsedGuiComponentMap & inOperand6 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedComponentStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_parsedComponentStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedComponentStruct::objectCompare (const GALGAS_parsedComponentStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mParsedSemanticsComponentMap.objectCompare (inOperand.mAttribute_mParsedSemanticsComponentMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParsedLexiqueComponentMap.objectCompare (inOperand.mAttribute_mParsedLexiqueComponentMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParsedSyntaxComponentMap.objectCompare (inOperand.mAttribute_mParsedSyntaxComponentMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParsedOptionComponentMap.objectCompare (inOperand.mAttribute_mParsedOptionComponentMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParsedGrammarComponentMap.objectCompare (inOperand.mAttribute_mParsedGrammarComponentMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParsedProgramComponentMap.objectCompare (inOperand.mAttribute_mParsedProgramComponentMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParsedGuiComponentMap.objectCompare (inOperand.mAttribute_mParsedGuiComponentMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_parsedComponentStruct::isValid (void) const {
  return mAttribute_mParsedSemanticsComponentMap.isValid () && mAttribute_mParsedLexiqueComponentMap.isValid () && mAttribute_mParsedSyntaxComponentMap.isValid () && mAttribute_mParsedOptionComponentMap.isValid () && mAttribute_mParsedGrammarComponentMap.isValid () && mAttribute_mParsedProgramComponentMap.isValid () && mAttribute_mParsedGuiComponentMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedComponentStruct::drop (void) {
  mAttribute_mParsedSemanticsComponentMap.drop () ;
  mAttribute_mParsedLexiqueComponentMap.drop () ;
  mAttribute_mParsedSyntaxComponentMap.drop () ;
  mAttribute_mParsedOptionComponentMap.drop () ;
  mAttribute_mParsedGrammarComponentMap.drop () ;
  mAttribute_mParsedProgramComponentMap.drop () ;
  mAttribute_mParsedGuiComponentMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedComponentStruct::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @parsedComponentStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mParsedSemanticsComponentMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParsedLexiqueComponentMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParsedSyntaxComponentMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParsedOptionComponentMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParsedGrammarComponentMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParsedProgramComponentMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParsedGuiComponentMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap GALGAS_parsedComponentStruct::reader_mParsedSemanticsComponentMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParsedSemanticsComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap GALGAS_parsedComponentStruct::reader_mParsedLexiqueComponentMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParsedLexiqueComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap GALGAS_parsedComponentStruct::reader_mParsedSyntaxComponentMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParsedSyntaxComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap GALGAS_parsedComponentStruct::reader_mParsedOptionComponentMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParsedOptionComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap GALGAS_parsedComponentStruct::reader_mParsedGrammarComponentMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParsedGrammarComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap GALGAS_parsedComponentStruct::reader_mParsedProgramComponentMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParsedProgramComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap GALGAS_parsedComponentStruct::reader_mParsedGuiComponentMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParsedGuiComponentMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @parsedComponentStruct type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedComponentStruct ("parsedComponentStruct",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedComponentStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedComponentStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedComponentStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedComponentStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedComponentStruct GALGAS_parsedComponentStruct::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parsedComponentStruct result ;
  const GALGAS_parsedComponentStruct * p = (const GALGAS_parsedComponentStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedComponentStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedComponentStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Reader '@formalArgumentPassingModeAST string'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_string (const GALGAS_formalArgumentPassingModeAST & inObject,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_outResult = GALGAS_string ("\?\?") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_outResult = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Reader '@formalArgumentPassingModeAST formalArgumentMessage'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_formalArgumentMessage (const GALGAS_formalArgumentPassingModeAST & inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_outResult = GALGAS_string ("a constant input (\?\?) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_outResult = GALGAS_string ("an input (\?) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_outResult = GALGAS_string ("an output (!) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_outResult = GALGAS_string ("an input/output (\?!) formal argument") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Reader '@formalArgumentPassingModeAST formalArgumentString'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_formalArgumentString (const GALGAS_formalArgumentPassingModeAST & inObject,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_outResult = GALGAS_string ("'\?\?'") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_outResult = GALGAS_string ("'\?'") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_outResult = GALGAS_string ("'!'") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_outResult = GALGAS_string ("'\?!'") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_DeclarationAST::GALGAS_galgas_33_DeclarationAST (void) :
mAttribute_mDeclarationList (),
mAttribute_mSyntaxComponentList (),
mAttribute_mSyntaxExtensions (),
mAttribute_mGUIComponentList (),
mAttribute_mPrologueDeclarationList (),
mAttribute_mSourceRuleList (),
mAttribute_mEpilogueDeclarationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_DeclarationAST::~ GALGAS_galgas_33_DeclarationAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_DeclarationAST::GALGAS_galgas_33_DeclarationAST (const GALGAS_semanticDeclarationListAST & inOperand0,
                                                                  const GALGAS_galgas_33_SyntaxComponentListAST & inOperand1,
                                                                  const GALGAS_syntaxExtensions & inOperand2,
                                                                  const GALGAS_galgas_33_GUIComponentListAST & inOperand3,
                                                                  const GALGAS_prologueEpilogueList & inOperand4,
                                                                  const GALGAS_programRuleList & inOperand5,
                                                                  const GALGAS_prologueEpilogueList & inOperand6) :
mAttribute_mDeclarationList (inOperand0),
mAttribute_mSyntaxComponentList (inOperand1),
mAttribute_mSyntaxExtensions (inOperand2),
mAttribute_mGUIComponentList (inOperand3),
mAttribute_mPrologueDeclarationList (inOperand4),
mAttribute_mSourceRuleList (inOperand5),
mAttribute_mEpilogueDeclarationList (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_DeclarationAST GALGAS_galgas_33_DeclarationAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_DeclarationAST (GALGAS_semanticDeclarationListAST::constructor_emptyList (HERE),
                                          GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (HERE),
                                          GALGAS_syntaxExtensions::constructor_emptyMap (HERE),
                                          GALGAS_galgas_33_GUIComponentListAST::constructor_emptyList (HERE),
                                          GALGAS_prologueEpilogueList::constructor_emptyList (HERE),
                                          GALGAS_programRuleList::constructor_emptyList (HERE),
                                          GALGAS_prologueEpilogueList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_DeclarationAST GALGAS_galgas_33_DeclarationAST::constructor_new (const GALGAS_semanticDeclarationListAST & inOperand0,
                                                                                  const GALGAS_galgas_33_SyntaxComponentListAST & inOperand1,
                                                                                  const GALGAS_syntaxExtensions & inOperand2,
                                                                                  const GALGAS_galgas_33_GUIComponentListAST & inOperand3,
                                                                                  const GALGAS_prologueEpilogueList & inOperand4,
                                                                                  const GALGAS_programRuleList & inOperand5,
                                                                                  const GALGAS_prologueEpilogueList & inOperand6 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_DeclarationAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_galgas_33_DeclarationAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_DeclarationAST::objectCompare (const GALGAS_galgas_33_DeclarationAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationList.objectCompare (inOperand.mAttribute_mDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentList.objectCompare (inOperand.mAttribute_mSyntaxComponentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxExtensions.objectCompare (inOperand.mAttribute_mSyntaxExtensions) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGUIComponentList.objectCompare (inOperand.mAttribute_mGUIComponentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrologueDeclarationList.objectCompare (inOperand.mAttribute_mPrologueDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceRuleList.objectCompare (inOperand.mAttribute_mSourceRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEpilogueDeclarationList.objectCompare (inOperand.mAttribute_mEpilogueDeclarationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_DeclarationAST::isValid (void) const {
  return mAttribute_mDeclarationList.isValid () && mAttribute_mSyntaxComponentList.isValid () && mAttribute_mSyntaxExtensions.isValid () && mAttribute_mGUIComponentList.isValid () && mAttribute_mPrologueDeclarationList.isValid () && mAttribute_mSourceRuleList.isValid () && mAttribute_mEpilogueDeclarationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_DeclarationAST::drop (void) {
  mAttribute_mDeclarationList.drop () ;
  mAttribute_mSyntaxComponentList.drop () ;
  mAttribute_mSyntaxExtensions.drop () ;
  mAttribute_mGUIComponentList.drop () ;
  mAttribute_mPrologueDeclarationList.drop () ;
  mAttribute_mSourceRuleList.drop () ;
  mAttribute_mEpilogueDeclarationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_DeclarationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @galgas3DeclarationAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxComponentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxExtensions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGUIComponentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrologueDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEpilogueDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_galgas_33_DeclarationAST::reader_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_DeclarationAST::reader_mSyntaxComponentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions GALGAS_galgas_33_DeclarationAST::reader_mSyntaxExtensions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxExtensions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_DeclarationAST::reader_mGUIComponentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGUIComponentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_galgas_33_DeclarationAST::reader_mPrologueDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrologueDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_galgas_33_DeclarationAST::reader_mSourceRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_galgas_33_DeclarationAST::reader_mEpilogueDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEpilogueDeclarationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @galgas3DeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_DeclarationAST ("galgas3DeclarationAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_DeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_DeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_DeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_DeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_DeclarationAST GALGAS_galgas_33_DeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_DeclarationAST result ;
  const GALGAS_galgas_33_DeclarationAST * p = (const GALGAS_galgas_33_DeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_DeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3DeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Category Reader '@typeKindEnum kind'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_kind (const GALGAS_typeKindEnum & inObject,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKindEnum::kNotBuilt:
    break ;
  case GALGAS_typeKindEnum::kEnum_classType:
    {
      result_outResult = GALGAS_string ("class") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("enumeration") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_listType:
    {
      result_outResult = GALGAS_string ("list") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_sortedListType:
    {
      result_outResult = GALGAS_string ("sorted list") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_mapType:
    {
      result_outResult = GALGAS_string ("map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_uniqueMapType:
    {
      result_outResult = GALGAS_string ("unique map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_mapProxyType:
    {
      result_outResult = GALGAS_string ("map proxy") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_listMapType:
    {
      result_outResult = GALGAS_string ("list map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_structType:
    {
      result_outResult = GALGAS_string ("struct") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_graphType:
    {
      result_outResult = GALGAS_string ("graph") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_predefinedType:
    {
      result_outResult = GALGAS_string ("predefined") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_arrayType:
    {
      result_outResult = GALGAS_string ("array") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_externType:
    {
      result_outResult = GALGAS_string ("extern") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@predefinedTypeAST getConstructorMap'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_predefinedTypeAST_getConstructorMap> gCategoryMethodTable_predefinedTypeAST_getConstructorMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getConstructorMap (const int32_t inClassIndex,
                                            categoryMethodSignature_predefinedTypeAST_getConstructorMap inMethod) {
  gCategoryMethodTable_predefinedTypeAST_getConstructorMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getConstructorMap (const cPtr_predefinedTypeAST * inObject,
                                           GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                           GALGAS_constructorMap & out_outConstructorMap,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  out_outConstructorMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_predefinedTypeAST_getConstructorMap f = NULL ;
    if (classIndex < gCategoryMethodTable_predefinedTypeAST_getConstructorMap.count ()) {
      f = gCategoryMethodTable_predefinedTypeAST_getConstructorMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_predefinedTypeAST_getConstructorMap.count ()) {
           f = gCategoryMethodTable_predefinedTypeAST_getConstructorMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_predefinedTypeAST_getConstructorMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outConstructorMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                GALGAS_constructorMap & outArgument_outConstructorMap,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outConstructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 441)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         categoryMethod_predefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_predefinedTypeAST_getConstructorMap (void) {
  gCategoryMethodTable_predefinedTypeAST_getConstructorMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getConstructorMap (defineCategoryMethod_predefinedTypeAST_getConstructorMap,
                                                                freeCategoryMethod_predefinedTypeAST_getConstructorMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@predefinedTypeAST getReaderMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_predefinedTypeAST_getReaderMap> gCategoryMethodTable_predefinedTypeAST_getReaderMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getReaderMap (const int32_t inClassIndex,
                                       categoryMethodSignature_predefinedTypeAST_getReaderMap inMethod) {
  gCategoryMethodTable_predefinedTypeAST_getReaderMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getReaderMap (const cPtr_predefinedTypeAST * inObject,
                                      GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                      GALGAS_getterMap & out_outReaderMap,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outReaderMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_predefinedTypeAST_getReaderMap f = NULL ;
    if (classIndex < gCategoryMethodTable_predefinedTypeAST_getReaderMap.count ()) {
      f = gCategoryMethodTable_predefinedTypeAST_getReaderMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_predefinedTypeAST_getReaderMap.count ()) {
           f = gCategoryMethodTable_predefinedTypeAST_getReaderMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_predefinedTypeAST_getReaderMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outReaderMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_getReaderMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                           GALGAS_getterMap & outArgument_outReaderMap,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReaderMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 449)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_getReaderMap (void) {
  enterCategoryMethod_getReaderMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                    categoryMethod_predefinedTypeAST_getReaderMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_predefinedTypeAST_getReaderMap (void) {
  gCategoryMethodTable_predefinedTypeAST_getReaderMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getReaderMap (defineCategoryMethod_predefinedTypeAST_getReaderMap,
                                                           freeCategoryMethod_predefinedTypeAST_getReaderMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@predefinedTypeAST getModifierMap'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_predefinedTypeAST_getModifierMap> gCategoryMethodTable_predefinedTypeAST_getModifierMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getModifierMap (const int32_t inClassIndex,
                                         categoryMethodSignature_predefinedTypeAST_getModifierMap inMethod) {
  gCategoryMethodTable_predefinedTypeAST_getModifierMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getModifierMap (const cPtr_predefinedTypeAST * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        GALGAS_setterMap & out_outModifierMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  out_outModifierMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_predefinedTypeAST_getModifierMap f = NULL ;
    if (classIndex < gCategoryMethodTable_predefinedTypeAST_getModifierMap.count ()) {
      f = gCategoryMethodTable_predefinedTypeAST_getModifierMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_predefinedTypeAST_getModifierMap.count ()) {
           f = gCategoryMethodTable_predefinedTypeAST_getModifierMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_predefinedTypeAST_getModifierMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outModifierMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                             GALGAS_setterMap & outArgument_outModifierMap,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 457)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_getModifierMap (void) {
  enterCategoryMethod_getModifierMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                      categoryMethod_predefinedTypeAST_getModifierMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_predefinedTypeAST_getModifierMap (void) {
  gCategoryMethodTable_predefinedTypeAST_getModifierMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getModifierMap (defineCategoryMethod_predefinedTypeAST_getModifierMap,
                                                             freeCategoryMethod_predefinedTypeAST_getModifierMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@predefinedTypeAST getInstanceMethodMap'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_predefinedTypeAST_getInstanceMethodMap> gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getInstanceMethodMap (const int32_t inClassIndex,
                                               categoryMethodSignature_predefinedTypeAST_getInstanceMethodMap inMethod) {
  gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getInstanceMethodMap (const cPtr_predefinedTypeAST * inObject,
                                              GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                              GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outInstanceMethodMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_predefinedTypeAST_getInstanceMethodMap f = NULL ;
    if (classIndex < gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap.count ()) {
      f = gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap.count ()) {
           f = gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outInstanceMethodMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                   GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 465)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_getInstanceMethodMap (void) {
  enterCategoryMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                            categoryMethod_predefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_predefinedTypeAST_getInstanceMethodMap (void) {
  gCategoryMethodTable_predefinedTypeAST_getInstanceMethodMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getInstanceMethodMap (defineCategoryMethod_predefinedTypeAST_getInstanceMethodMap,
                                                                   freeCategoryMethod_predefinedTypeAST_getInstanceMethodMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@predefinedTypeAST getClassMethodMap'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_predefinedTypeAST_getClassMethodMap> gCategoryMethodTable_predefinedTypeAST_getClassMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getClassMethodMap (const int32_t inClassIndex,
                                            categoryMethodSignature_predefinedTypeAST_getClassMethodMap inMethod) {
  gCategoryMethodTable_predefinedTypeAST_getClassMethodMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getClassMethodMap (const cPtr_predefinedTypeAST * inObject,
                                           GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                           GALGAS_classMethodMap & out_outClassMethodMap,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  out_outClassMethodMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_predefinedTypeAST_getClassMethodMap f = NULL ;
    if (classIndex < gCategoryMethodTable_predefinedTypeAST_getClassMethodMap.count ()) {
      f = gCategoryMethodTable_predefinedTypeAST_getClassMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_predefinedTypeAST_getClassMethodMap.count ()) {
           f = gCategoryMethodTable_predefinedTypeAST_getClassMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_predefinedTypeAST_getClassMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outClassMethodMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 473)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_getClassMethodMap (void) {
  enterCategoryMethod_getClassMethodMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         categoryMethod_predefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_predefinedTypeAST_getClassMethodMap (void) {
  gCategoryMethodTable_predefinedTypeAST_getClassMethodMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getClassMethodMap (defineCategoryMethod_predefinedTypeAST_getClassMethodMap,
                                                                freeCategoryMethod_predefinedTypeAST_getClassMethodMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category reader '@predefinedTypeAST getSupportedOperatorFlags'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_predefinedTypeAST_getSupportedOperatorFlags> gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_getSupportedOperatorFlags (const int32_t inClassIndex,
                                                    categoryReaderSignature_predefinedTypeAST_getSupportedOperatorFlags inReader) {
  gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryReader_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_predefinedTypeAST_getSupportedOperatorFlags f = NULL ;
    if (classIndex < gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags.count ()) {
      f = gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags.count ()) {
           f = gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_predefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_predefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryReader_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                 categoryReader_predefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_predefinedTypeAST_getSupportedOperatorFlags (void) {
  gCategoryReaderTable_predefinedTypeAST_getSupportedOperatorFlags.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_predefinedTypeAST_getSupportedOperatorFlags (defineCategoryReader_predefinedTypeAST_getSupportedOperatorFlags,
                                                                        freeCategoryReader_predefinedTypeAST_getSupportedOperatorFlags) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@predefinedTypeAST getAddAssignArgumentList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_predefinedTypeAST_getAddAssignArgumentList> gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getAddAssignArgumentList (const int32_t inClassIndex,
                                                   categoryMethodSignature_predefinedTypeAST_getAddAssignArgumentList inMethod) {
  gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getAddAssignArgumentList (const cPtr_predefinedTypeAST * inObject,
                                                  GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                  GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  out_outAddAssignArgumentList.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_predefinedTypeAST_getAddAssignArgumentList f = NULL ;
    if (classIndex < gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList.count ()) {
      f = gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList.count ()) {
           f = gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outAddAssignArgumentList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                       GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAddAssignArgumentList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypes.galgas", 488)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_getAddAssignArgumentList (void) {
  enterCategoryMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                categoryMethod_predefinedTypeAST_getAddAssignArgumentList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_predefinedTypeAST_getAddAssignArgumentList (void) {
  gCategoryMethodTable_predefinedTypeAST_getAddAssignArgumentList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getAddAssignArgumentList (defineCategoryMethod_predefinedTypeAST_getAddAssignArgumentList,
                                                                       freeCategoryMethod_predefinedTypeAST_getAddAssignArgumentList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@predefinedTypeAST getEnumerationList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_predefinedTypeAST_getEnumerationList> gCategoryMethodTable_predefinedTypeAST_getEnumerationList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getEnumerationList (const int32_t inClassIndex,
                                             categoryMethodSignature_predefinedTypeAST_getEnumerationList inMethod) {
  gCategoryMethodTable_predefinedTypeAST_getEnumerationList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getEnumerationList (const cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                            GALGAS_stringlist & out_outEnumerationVariant,
                                            GALGAS_string & out_outEnumeratedType,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outEnumerationList.drop () ;
  out_outEnumerationVariant.drop () ;
  out_outEnumeratedType.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_predefinedTypeAST_getEnumerationList f = NULL ;
    if (classIndex < gCategoryMethodTable_predefinedTypeAST_getEnumerationList.count ()) {
      f = gCategoryMethodTable_predefinedTypeAST_getEnumerationList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_predefinedTypeAST_getEnumerationList.count ()) {
           f = gCategoryMethodTable_predefinedTypeAST_getEnumerationList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_predefinedTypeAST_getEnumerationList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outEnumerationList, out_outEnumerationVariant, out_outEnumeratedType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                 GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GALGAS_stringlist & outArgument_outEnumerationVariant,
                                                                 GALGAS_string & outArgument_outEnumeratedType,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypes.galgas", 502)) ;
  outArgument_outEnumerationVariant = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticsTypes.galgas", 503)) ;
  outArgument_outEnumeratedType = GALGAS_string::makeEmptyString () ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_getEnumerationList (void) {
  enterCategoryMethod_getEnumerationList (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          categoryMethod_predefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_predefinedTypeAST_getEnumerationList (void) {
  gCategoryMethodTable_predefinedTypeAST_getEnumerationList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getEnumerationList (defineCategoryMethod_predefinedTypeAST_getEnumerationList,
                                                                 freeCategoryMethod_predefinedTypeAST_getEnumerationList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Category Reader '@location sourceFile'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_sourceFile (const GALGAS_location & inObject,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_location temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.reader_isNowhere (SOURCE_FILE ("semanticContext.galgas", 19)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult = GALGAS_string ("SOURCE_FILE (\"\", 0)") ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_location temp_2 = inObject ;
    const GALGAS_location temp_3 = inObject ;
    result_outResult = GALGAS_string ("SOURCE_FILE (").add_operation (temp_2.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).reader_lastPathComponent (SOURCE_FILE ("semanticContext.galgas", 22)).reader_utf_38_Representation (SOURCE_FILE ("semanticContext.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (temp_3.reader_line (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).reader_string (SOURCE_FILE ("semanticContext.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category Reader '@location commaSourceFile'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_commaSourceFile (const GALGAS_location & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_location temp_0 = inObject ;
  result_outResult = GALGAS_string (" COMMA_").add_operation (categoryReader_sourceFile (temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@semanticInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext> gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInstructionInSemanticContext (const int32_t inClassIndex,
                                                            categoryMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext inMethod) {
  gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticInstructionAST_enterInstructionInSemanticContext (void) {
  gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_enterInstructionInSemanticContext (NULL,
                                                                                     freeCategoryMethod_semanticInstructionAST_enterInstructionInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                           GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.count ()) {
      f = gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.count ()) {
           f = gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@semanticExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext> gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterExpressionInSemanticContext (const int32_t inClassIndex,
                                                           categoryMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext inMethod) {
  gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticExpressionAST_enterExpressionInSemanticContext (void) {
  gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticExpressionAST_enterExpressionInSemanticContext (NULL,
                                                                                   freeCategoryMethod_semanticExpressionAST_enterExpressionInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                          GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.count ()) {
      f = gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.count ()) {
           f = gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@semanticInstructionListAST enterInstructionListInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInstructionListInSemanticContext (const GALGAS_semanticInstructionListAST inObject,
                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_semanticInstructionListAST temp_0 = inObject ;
  cEnumerator_semanticInstructionListAST enumerator_3573 (temp_0, kEnumeration_up) ;
  while (enumerator_3573.hasCurrentObject ()) {
    callCategoryMethod_enterInstructionInSemanticContext ((const cPtr_semanticInstructionAST *) enumerator_3573.current_mInstruction (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 58)) ;
    enumerator_3573.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@actualOutputExpressionList enterInSemanticContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInSemanticContext (const GALGAS_actualOutputExpressionList inObject,
                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_actualOutputExpressionList temp_0 = inObject ;
  cEnumerator_actualOutputExpressionList enumerator_3880 (temp_0, kEnumeration_up) ;
  while (enumerator_3880.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_3880.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 68)) ;
    enumerator_3880.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category reader '@semanticDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticDeclarationAST_keyRepresentation> gCategoryReaderTable_semanticDeclarationAST_keyRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_keyRepresentation (const int32_t inClassIndex,
                                            categoryReaderSignature_semanticDeclarationAST_keyRepresentation inReader) {
  gCategoryReaderTable_semanticDeclarationAST_keyRepresentation.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticDeclarationAST_keyRepresentation (void) {
  gCategoryReaderTable_semanticDeclarationAST_keyRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationAST_keyRepresentation (NULL,
                                                                     freeCategoryReader_semanticDeclarationAST_keyRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticDeclarationAST_keyRepresentation f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticDeclarationAST_keyRepresentation.count ()) {
      f = gCategoryReaderTable_semanticDeclarationAST_keyRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticDeclarationAST_keyRepresentation.count ()) {
           f = gCategoryReaderTable_semanticDeclarationAST_keyRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticDeclarationAST_keyRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@semanticDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationAST_enterInSemanticContext> gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_semanticDeclarationAST_enterInSemanticContext inMethod) {
  gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationAST_enterInSemanticContext (void) {
  gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationAST_enterInSemanticContext (NULL,
                                                                          freeCategoryMethod_semanticDeclarationAST_enterInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                const GALGAS_categoryMethodMapForBuildingContext constin_inCategoryMethodMapForBuildingContext,
                                                const GALGAS_categoryReaderMapForBuildingContext constin_inCategoryReaderMapForBuildingContext,
                                                const GALGAS_categoryModifierMapForBuildingContext constin_inCategoryModifierMapForBuildingContext,
                                                GALGAS_semanticContext & io_ioSemanticContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationAST_enterInSemanticContext f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext.count ()) {
      f = gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext.count ()) {
           f = gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationAST_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inCategoryMethodMapForBuildingContext, constin_inCategoryReaderMapForBuildingContext, constin_inCategoryModifierMapForBuildingContext, io_ioSemanticContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Reader '@predefinedTypeKindEnum defaultConstructorName'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_defaultConstructorName (const GALGAS_predefinedTypeKindEnum & inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const GALGAS_predefinedTypeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outName = GALGAS_string ("default") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outName = GALGAS_string ("emptyBinarySet") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outName = GALGAS_string ("emptySet") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outName = GALGAS_string ("emptyData") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outName = GALGAS_string ("nowhere") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outName = GALGAS_string ("zero") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outName = GALGAS_string ("start") ;
    }
    break ;
  }
//---
  return result_outName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category method '@semanticDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationAST_enterDeclarationInGraph> gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterDeclarationInGraph (const int32_t inClassIndex,
                                                  categoryMethodSignature_semanticDeclarationAST_enterDeclarationInGraph inMethod) {
  gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationAST_enterDeclarationInGraph (void) {
  gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationAST_enterDeclarationInGraph (NULL,
                                                                           freeCategoryMethod_semanticDeclarationAST_enterDeclarationInGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                 GALGAS_categoryMethodMapForBuildingContext & io_ioCategoryMethodMapForBuildingContext,
                                                 GALGAS_categoryReaderMapForBuildingContext & io_ioCategoryReaderMapForBuildingContext,
                                                 GALGAS_categoryModifierMapForBuildingContext & io_ioCategoryModifierMapForBuildingContext,
                                                 GALGAS_semanticDeclarationListAST & io_ioCategoryOverrideDefinitionList,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationAST_enterDeclarationInGraph f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph.count ()) {
      f = gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph.count ()) {
           f = gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationAST_enterDeclarationInGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticTypePrecedenceGraph, io_ioCategoryMethodMapForBuildingContext, io_ioCategoryReaderMapForBuildingContext, io_ioCategoryModifierMapForBuildingContext, io_ioCategoryOverrideDefinitionList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@semanticDeclarationAST addAssociatedElement'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationAST_addAssociatedElement> gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addAssociatedElement (const int32_t inClassIndex,
                                               categoryMethodSignature_semanticDeclarationAST_addAssociatedElement inMethod) {
  gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                              GALGAS_semanticDeclarationListAST & io_ioSemanticDeclarationList,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationAST_addAssociatedElement f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement.count ()) {
      f = gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement.count ()) {
           f = gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticDeclarationList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioSemanticDeclarationList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_semanticDeclarationAST.mSlotID,
                                            categoryMethod_semanticDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationAST_addAssociatedElement (void) {
  gCategoryMethodTable_semanticDeclarationAST_addAssociatedElement.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationAST_addAssociatedElement (defineCategoryMethod_semanticDeclarationAST_addAssociatedElement,
                                                                        freeCategoryMethod_semanticDeclarationAST_addAssociatedElement) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@semanticInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticInstructionForGeneration_generateInstruction> gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateInstruction (const int32_t inClassIndex,
                                              categoryMethodSignature_semanticInstructionForGeneration_generateInstruction inMethod) {
  gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticInstructionForGeneration_generateInstruction (void) {
  gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionForGeneration_generateInstruction (NULL,
                                                                                 freeCategoryMethod_semanticInstructionForGeneration_generateInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                             GALGAS_string & io_ioGeneratedCode,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticInstructionForGeneration_generateInstruction f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction.count ()) {
      f = gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction.count ()) {
           f = gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticInstructionForGeneration_generateInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inGenerateSyntaxDirectedTranslationString, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category reader '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration> gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_appendPrimitiveTypeDeclaration (const int32_t inClassIndex,
                                                         categoryReaderSignature_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration inReader) {
  gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration.count ()) {
      f = gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration.count ()) {
           f = gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outHeader ; // Returned variable
  result_outHeader = GALGAS_string::makeEmptyString () ;
//---
  return result_outHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration (void) {
  enterCategoryReader_appendPrimitiveTypeDeclaration (kTypeDescriptor_GALGAS_semanticDeclarationForGeneration.mSlotID,
                                                      categoryReader_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration (void) {
  gCategoryReaderTable_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration (defineCategoryReader_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration,
                                                                                            freeCategoryReader_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract category reader '@semanticDeclarationForGeneration implementationCppFileName'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticDeclarationForGeneration_implementationCppFileName> gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_implementationCppFileName (const int32_t inClassIndex,
                                                    categoryReaderSignature_semanticDeclarationForGeneration_implementationCppFileName inReader) {
  gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticDeclarationForGeneration_implementationCppFileName (void) {
  gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationForGeneration_implementationCppFileName (NULL,
                                                                                       freeCategoryReader_semanticDeclarationForGeneration_implementationCppFileName) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticDeclarationForGeneration_implementationCppFileName f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName.count ()) {
      f = gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName.count ()) {
           f = gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticDeclarationForGeneration_implementationCppFileName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category reader '@semanticDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticDeclarationForGeneration_hasCppHeaderFile> gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_hasCppHeaderFile (const int32_t inClassIndex,
                                           categoryReaderSignature_semanticDeclarationForGeneration_hasCppHeaderFile inReader) {
  gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticDeclarationForGeneration_hasCppHeaderFile (void) {
  gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationForGeneration_hasCppHeaderFile (NULL,
                                                                              freeCategoryReader_semanticDeclarationForGeneration_hasCppHeaderFile) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticDeclarationForGeneration_hasCppHeaderFile f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile.count ()) {
      f = gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile.count ()) {
           f = gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticDeclarationForGeneration_hasCppHeaderFile.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@semanticDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticDeclarationForGeneration_isPredefined> gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isPredefined (const int32_t inClassIndex,
                                       categoryReaderSignature_semanticDeclarationForGeneration_isPredefined inReader) {
  gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticDeclarationForGeneration_isPredefined (void) {
  gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationForGeneration_isPredefined (NULL,
                                                                          freeCategoryReader_semanticDeclarationForGeneration_isPredefined) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticDeclarationForGeneration_isPredefined f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined.count ()) {
      f = gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined.count ()) {
           f = gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticDeclarationForGeneration_isPredefined.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@semanticDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticDeclarationForGeneration_headerKind> gCategoryReaderTable_semanticDeclarationForGeneration_headerKind ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerKind (const int32_t inClassIndex,
                                     categoryReaderSignature_semanticDeclarationForGeneration_headerKind inReader) {
  gCategoryReaderTable_semanticDeclarationForGeneration_headerKind.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticDeclarationForGeneration_headerKind (void) {
  gCategoryReaderTable_semanticDeclarationForGeneration_headerKind.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationForGeneration_headerKind (NULL,
                                                                        freeCategoryReader_semanticDeclarationForGeneration_headerKind) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind callCategoryReader_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_headerKind result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticDeclarationForGeneration_headerKind f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticDeclarationForGeneration_headerKind.count ()) {
      f = gCategoryReaderTable_semanticDeclarationForGeneration_headerKind (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticDeclarationForGeneration_headerKind.count ()) {
           f = gCategoryReaderTable_semanticDeclarationForGeneration_headerKind (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticDeclarationForGeneration_headerKind.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_> gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_ ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendDeclaration_31_ (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_ inMethod) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                               GALGAS_stringset & io_ioInclusionSet,
                                               GALGAS_string & out_outHeader,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_ f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_.count ()) {
      f = gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_ (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_.count ()) {
           f = gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_ (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GALGAS_string::makeEmptyString () ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_semanticDeclarationForGeneration.mSlotID,
                                             categoryMethod_semanticDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_31_ (void) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_31_.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_31_,
                                                                                   freeCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_31_) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_> gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_ ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendDeclaration_32_ (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_ inMethod) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                               const GALGAS_bool constin_inGenerateForGalgas_33_,
                                               const GALGAS_string constin_inOutputDirectory,
                                               GALGAS_stringset & io_ioInclusionSet,
                                               GALGAS_string & out_outHeader,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_ f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_.count ()) {
      f = gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_ (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_.count ()) {
           f = gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_ (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inGenerateForGalgas_33_, constin_inOutputDirectory, io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticDeclarationForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                                   const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GALGAS_string::makeEmptyString () ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_semanticDeclarationForGeneration.mSlotID,
                                             categoryMethod_semanticDeclarationForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_32_ (void) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendDeclaration_32_.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationForGeneration_appendDeclaration_32_ (defineCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_32_,
                                                                                   freeCategoryMethod_semanticDeclarationForGeneration_appendDeclaration_32_) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category reader '@semanticDeclarationForGeneration appendTypeGenericImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticDeclarationForGeneration_appendTypeGenericImplementation> gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_appendTypeGenericImplementation (const int32_t inClassIndex,
                                                          categoryReaderSignature_semanticDeclarationForGeneration_appendTypeGenericImplementation inReader) {
  gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticDeclarationForGeneration_appendTypeGenericImplementation f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation.count ()) {
      f = gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation.count ()) {
           f = gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticDeclarationForGeneration_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outImplementation ; // Returned variable
  result_outImplementation = GALGAS_string::makeEmptyString () ;
//---
  return result_outImplementation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationForGeneration_appendTypeGenericImplementation (void) {
  enterCategoryReader_appendTypeGenericImplementation (kTypeDescriptor_GALGAS_semanticDeclarationForGeneration.mSlotID,
                                                       categoryReader_semanticDeclarationForGeneration_appendTypeGenericImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticDeclarationForGeneration_appendTypeGenericImplementation (void) {
  gCategoryReaderTable_semanticDeclarationForGeneration_appendTypeGenericImplementation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationForGeneration_appendTypeGenericImplementation (defineCategoryReader_semanticDeclarationForGeneration_appendTypeGenericImplementation,
                                                                                             freeCategoryReader_semanticDeclarationForGeneration_appendTypeGenericImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@semanticDeclarationForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation> gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSpecificImplementation (const int32_t inClassIndex,
                                                       categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation inMethod) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                      const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                      GALGAS_stringset & io_ioInclusionSet,
                                                      GALGAS_string & out_outImplementation,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  out_outImplementation.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation.count ()) {
      f = gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation.count ()) {
           f = gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUnifiedTypeMap, io_ioInclusionSet, out_outImplementation, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                          GALGAS_string & outArgument_outImplementation,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_semanticDeclarationForGeneration.mSlotID,
                                                    categoryMethod_semanticDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationForGeneration_appendSpecificImplementation (void) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificImplementation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_semanticDeclarationForGeneration_appendSpecificImplementation,
                                                                                          freeCategoryMethod_semanticDeclarationForGeneration_appendSpecificImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendSpecificFiles'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificFiles> gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSpecificFiles (const int32_t inClassIndex,
                                              categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificFiles inMethod) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                             const GALGAS_string constin_inProductDirectory,
                                             GALGAS_stringset & io_ioAllProductFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificFiles f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles.count ()) {
      f = gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles.count ()) {
           f = gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inProductDirectory, io_ioAllProductFileSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticDeclarationForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                 GALGAS_stringset & /* ioArgument_ioAllProductFileSet */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticDeclarationForGeneration_appendSpecificFiles (void) {
  enterCategoryMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_semanticDeclarationForGeneration.mSlotID,
                                           categoryMethod_semanticDeclarationForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationForGeneration_appendSpecificFiles (void) {
  gCategoryMethodTable_semanticDeclarationForGeneration_appendSpecificFiles.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationForGeneration_appendSpecificFiles (defineCategoryMethod_semanticDeclarationForGeneration_appendSpecificFiles,
                                                                                 freeCategoryMethod_semanticDeclarationForGeneration_appendSpecificFiles) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category method '@semanticExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticExpressionAST_analyzeSemanticExpression> gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSemanticExpression (const int32_t inClassIndex,
                                                    categoryMethodSignature_semanticExpressionAST_analyzeSemanticExpression inMethod) {
  gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticExpressionAST_analyzeSemanticExpression (void) {
  gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticExpressionAST_analyzeSemanticExpression (NULL,
                                                                            freeCategoryMethod_semanticExpressionAST_analyzeSemanticExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
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
    categoryMethodSignature_semanticExpressionAST_analyzeSemanticExpression f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
      f = gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
           f = gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inType, constin_inAnalysisContext, io_ioVariableMap, out_outExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@abstractCollectionValueElement enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractCollectionValueElement_enterInSemanticContext> gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) {
  gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractCollectionValueElement_enterInSemanticContext (void) {
  gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCollectionValueElement_enterInSemanticContext (NULL,
                                                                                  freeCategoryMethod_abstractCollectionValueElement_enterInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElement) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractCollectionValueElement_enterInSemanticContext f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
      f = gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
           f = gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractCollectionValueElement analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractCollectionValueElement_analyze> gCategoryMethodTable_abstractCollectionValueElement_analyze ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_abstractCollectionValueElement_analyze inMethod) {
  gCategoryMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractCollectionValueElement_analyze (void) {
  gCategoryMethodTable_abstractCollectionValueElement_analyze.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCollectionValueElement_analyze (NULL,
                                                                   freeCategoryMethod_abstractCollectionValueElement_analyze) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const cPtr_abstractCollectionValueElement * inObject,
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
    categoryMethodSignature_abstractCollectionValueElement_analyze f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractCollectionValueElement_analyze.count ()) {
      f = gCategoryMethodTable_abstractCollectionValueElement_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractCollectionValueElement_analyze.count ()) {
           f = gCategoryMethodTable_abstractCollectionValueElement_analyze (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inElementType, io_ioVariableMap, io_ioCollectionValueElementListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@semanticInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticInstructionAST_analyzeSemanticInstruction> gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSemanticInstruction (const int32_t inClassIndex,
                                                     categoryMethodSignature_semanticInstructionAST_analyzeSemanticInstruction inMethod) {
  gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticInstructionAST_analyzeSemanticInstruction (void) {
  gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSemanticInstruction (NULL,
                                                                              freeCategoryMethod_semanticInstructionAST_analyzeSemanticInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticInstructionAST_analyzeSemanticInstruction f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction.count ()) {
      f = gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction.count ()) {
           f = gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticInstructionAST_analyzeSemanticInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, io_ioInstructionListForGeneration, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@actualParameterAST checkAgainstFormalArgument'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_actualParameterAST_checkAgainstFormalArgument> gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkAgainstFormalArgument (const int32_t inClassIndex,
                                                     categoryMethodSignature_actualParameterAST_checkAgainstFormalArgument inMethod) {
  gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_actualParameterAST_checkAgainstFormalArgument (void) {
  gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_actualParameterAST_checkAgainstFormalArgument (NULL,
                                                                          freeCategoryMethod_actualParameterAST_checkAgainstFormalArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    const GALGAS_lstring constin_inFormalSelector,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inFormalArgumentType,
                                                    const GALGAS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    GALGAS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                    GALGAS_stringset & io_ioExclusiveVariableSet,
                                                    GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_actualParameterAST_checkAgainstFormalArgument f = NULL ;
    if (classIndex < gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument.count ()) {
      f = gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument.count ()) {
           f = gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_actualParameterAST_checkAgainstFormalArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inFormalSelector, constin_inFormalArgumentType, constin_inFormalArgumentPassingMode, io_ioVariableMap, io_ioActualParameterListForGeneration, io_ioExclusiveVariableSet, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Reader '@formalArgumentPassingModeAST correspondingEffectiveParameterString'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_correspondingEffectiveParameterString (const GALGAS_formalArgumentPassingModeAST & inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@actualParameterAST enterParameterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_actualParameterAST_enterParameterInSemanticContext> gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterParameterInSemanticContext (const int32_t inClassIndex,
                                                          categoryMethodSignature_actualParameterAST_enterParameterInSemanticContext inMethod) {
  gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_actualParameterAST_enterParameterInSemanticContext (void) {
  gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_actualParameterAST_enterParameterInSemanticContext (NULL,
                                                                               freeCategoryMethod_actualParameterAST_enterParameterInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                         GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_actualParameterAST_enterParameterInSemanticContext f = NULL ;
    if (classIndex < gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext.count ()) {
      f = gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext.count ()) {
           f = gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_actualParameterAST_enterParameterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@abstractEnumeratedCollectionAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext> gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext inMethod) {
  gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractEnumeratedCollectionAST_enterInSemanticContext (void) {
  gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractEnumeratedCollectionAST_enterInSemanticContext (NULL,
                                                                                   freeCategoryMethod_abstractEnumeratedCollectionAST_enterInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.count ()) {
      f = gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.count ()) {
           f = gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@abstractEnumeratedCollectionAST analyzeEnumeration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration> gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeEnumeration (const int32_t inClassIndex,
                                             categoryMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration inMethod) {
  gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractEnumeratedCollectionAST_analyzeEnumeration (void) {
  gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractEnumeratedCollectionAST_analyzeEnumeration (NULL,
                                                                               freeCategoryMethod_abstractEnumeratedCollectionAST_analyzeEnumeration) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
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
    categoryMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.count ()) {
      f = gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.count ()) {
           f = gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, io_ioVariableMap, io_ioLocalConstantListForDoBranch, out_outEnumeratorCppName, out_outEnumerationExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT> gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                       categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) {
  gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (void) {
  gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (NULL,
                                                                                                                   freeCategoryMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                      const GALGAS_analysisContext constin_inAnalysisContext,
                                                      const GALGAS_bool constin_inHasTranslateFeature,
                                                      const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                      GALGAS_stringlist & io_ioAssignementList,
                                                      GALGAS_variableMap & io_ioVariableMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.count ()) {
      f = gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.count ()) {
           f = gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@semanticDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationAST_semanticAnalysis> gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_semanticDeclarationAST_semanticAnalysis inMethod) {
  gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationAST_semanticAnalysis (void) {
  gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationAST_semanticAnalysis (NULL,
                                                                    freeCategoryMethod_semanticDeclarationAST_semanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                          const GALGAS_string constin_inProductDirectory,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          const GALGAS_predefinedTypes constin_inPredefinedTypes,
                                          GALGAS_semanticDeclarationSortedListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationAST_semanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis.count ()) {
      f = gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis.count ()) {
           f = gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationAST_semanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inProductDirectory, constin_inSemanticContext, constin_inPredefinedTypes, io_ioSemanticDeclarationListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@syntaxInstructionAST analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction> gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSyntaxInstruction (const int32_t inClassIndex,
                                                   categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction inMethod) {
  gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_syntaxInstructionAST_analyzeSyntaxInstruction (void) {
  gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxInstructionAST_analyzeSyntaxInstruction (NULL,
                                                                          freeCategoryMethod_syntaxInstructionAST_analyzeSyntaxInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                                  const GALGAS_bool constin_inHasTranslateFeature,
                                                  const GALGAS_terminalMap constin_inTerminalMap,
                                                  const GALGAS_string constin_inLexiqueName,
                                                  const GALGAS_nonterminalMap constin_inNonterminalMap,
                                                  const GALGAS_string constin_inComponentName,
                                                  const GALGAS_stringset constin_inIndexNameSet,
                                                  GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                  GALGAS_variableMap & io_ioVariableMap,
                                                  GALGAS_uint & io_ioSelectMethodCount,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction f = NULL ;
    if (classIndex < gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.count ()) {
      f = gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.count ()) {
           f = gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inHasTranslateFeature, constin_inTerminalMap, constin_inLexiqueName, constin_inNonterminalMap, constin_inComponentName, constin_inIndexNameSet, io_ioInstructionListForGeneration, io_ioVariableMap, io_ioSelectMethodCount, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractInputParameter analyzeInputParameter'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractInputParameter_analyzeInputParameter> gCategoryMethodTable_abstractInputParameter_analyzeInputParameter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeInputParameter (const int32_t inClassIndex,
                                                categoryMethodSignature_abstractInputParameter_analyzeInputParameter inMethod) {
  gCategoryMethodTable_abstractInputParameter_analyzeInputParameter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractInputParameter_analyzeInputParameter (void) {
  gCategoryMethodTable_abstractInputParameter_analyzeInputParameter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractInputParameter_analyzeInputParameter (NULL,
                                                                         freeCategoryMethod_abstractInputParameter_analyzeInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                               const GALGAS_analysisContext constin_inAnalysisContext,
                                               const GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                               const GALGAS_string constin_inLexicalAttributeName,
                                               GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                               GALGAS_variableMap & io_ioVariableMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInputParameter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractInputParameter_analyzeInputParameter f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractInputParameter_analyzeInputParameter.count ()) {
      f = gCategoryMethodTable_abstractInputParameter_analyzeInputParameter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractInputParameter_analyzeInputParameter.count ()) {
           f = gCategoryMethodTable_abstractInputParameter_analyzeInputParameter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractInputParameter_analyzeInputParameter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inRequiredLexicalType, constin_inLexicalAttributeName, io_ioTerminalCheckAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT> gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSDT (const int32_t inClassIndex,
                                     categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT inMethod) {
  gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (void) {
  gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (NULL,
                                                                                                 freeCategoryMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                    const GALGAS_bool constin_inHasTranslateFeature,
                                    GALGAS_variableMap & io_ioVariableMap,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.count ()) {
      f = gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.count ()) {
           f = gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inHasTranslateFeature, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode> gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCode (const int32_t inClassIndex,
                                       categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode inMethod) {
  gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (void) {
  gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (NULL,
                                                                                                   freeCategoryMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                      const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                      const GALGAS_string constin_inAccessMethodName,
                                      GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                      GALGAS_string & io_ioGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.count ()) {
      f = gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.count ()) {
           f = gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inGenerateSyntaxDirectedTranslationString, constin_inAccessMethodName, io_ioUnusedVariableCppNameSet, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract category method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode> gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                        categoryMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) {
  gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (void) {
  gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (NULL,
                                                                                                      freeCategoryMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
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
    categoryMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
      f = gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
           f = gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTargetType, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inCppTargetVar, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@semanticInstructionForGeneration appendSyntaxSignature'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature> gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSyntaxSignature (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature inMethod) {
  gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                               const GALGAS_string constin_inPosfix,
                                               GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.count ()) {
      f = gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.count ()) {
           f = gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inPosfix, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * /* inObject */,
                                                                                   const GALGAS_string /* constinArgument_inPosfix */,
                                                                                   GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_semanticInstructionForGeneration.mSlotID,
                                             categoryMethod_semanticInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticInstructionForGeneration_appendSyntaxSignature (void) {
  gCategoryMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_semanticInstructionForGeneration_appendSyntaxSignature,
                                                                                   freeCategoryMethod_semanticInstructionForGeneration_appendSyntaxSignature) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category reader '@semanticInstructionForGeneration compareSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticInstructionForGeneration_compareSyntaxInstruction> gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_compareSyntaxInstruction (const int32_t inClassIndex,
                                                   categoryReaderSignature_semanticInstructionForGeneration_compareSyntaxInstruction inReader) {
  gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                         const GALGAS_semanticInstructionForGeneration & in_inTestedInstruction,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticInstructionForGeneration_compareSyntaxInstruction f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction.count ()) {
      f = gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction.count ()) {
           f = gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inTestedInstruction, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * /* inObject */,
                                                                                             const GALGAS_semanticInstructionForGeneration & /* constinArgument_inTestedInstruction */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  result_outOk = GALGAS_bool (true) ;
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionForGeneration.mSlotID,
                                                categoryReader_semanticInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticInstructionForGeneration_compareSyntaxInstruction (void) {
  gCategoryReaderTable_semanticInstructionForGeneration_compareSyntaxInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_semanticInstructionForGeneration_compareSyntaxInstruction,
                                                                                      freeCategoryReader_semanticInstructionForGeneration_compareSyntaxInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@syntaxInstructionAST transformInstruction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_syntaxInstructionAST_transformInstruction> gCategoryMethodTable_syntaxInstructionAST_transformInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_transformInstruction (const int32_t inClassIndex,
                                               categoryMethodSignature_syntaxInstructionAST_transformInstruction inMethod) {
  gCategoryMethodTable_syntaxInstructionAST_transformInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_syntaxInstructionAST_transformInstruction (void) {
  gCategoryMethodTable_syntaxInstructionAST_transformInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxInstructionAST_transformInstruction (NULL,
                                                                      freeCategoryMethod_syntaxInstructionAST_transformInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                              GALGAS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                              const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                              GALGAS_uint & io_ioAddedNonTerminalIndex,
                                              GALGAS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_syntaxInstructionAST_transformInstruction f = NULL ;
    if (classIndex < gCategoryMethodTable_syntaxInstructionAST_transformInstruction.count ()) {
      f = gCategoryMethodTable_syntaxInstructionAST_transformInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_syntaxInstructionAST_transformInstruction.count ()) {
           f = gCategoryMethodTable_syntaxInstructionAST_transformInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_syntaxInstructionAST_transformInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioActuallyUsedTerminalSymbolMap, constin_inNonTerminalSymbolMap, io_ioAddedNonTerminalIndex, io_ioSyntaxInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@semanticDeclarationAST buildCategoryListMaps'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticDeclarationAST_buildCategoryListMaps> gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildCategoryListMaps (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticDeclarationAST_buildCategoryListMaps inMethod) {
  gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                               GALGAS_genericCategoryMethodListMap & io_ioAbstractCategoryModifierListMapAST,
                                               GALGAS_genericCategoryMethodListMap & io_ioCategoryModifierListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioOverridingCategoryModifierListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioOverridingAbstractCategoryModifierListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioAbstractCategoryMethodListMapAST,
                                               GALGAS_genericCategoryMethodListMap & io_ioCategoryMethodListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioOverridingCategoryMethodListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioOverridingAbstractCategoryMethodListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioAbstractCategoryReaderListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioCategoryReaderListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioOverridingCategoryReaderListMap,
                                               GALGAS_genericCategoryMethodListMap & io_ioOverridingAbstractCategoryReaderListMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticDeclarationAST_buildCategoryListMaps f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps.count ()) {
      f = gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps.count ()) {
           f = gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioAbstractCategoryModifierListMapAST, io_ioCategoryModifierListMap, io_ioOverridingCategoryModifierListMap, io_ioOverridingAbstractCategoryModifierListMap, io_ioAbstractCategoryMethodListMapAST, io_ioCategoryMethodListMap, io_ioOverridingCategoryMethodListMap, io_ioOverridingAbstractCategoryMethodListMap, io_ioAbstractCategoryReaderListMap, io_ioCategoryReaderListMap, io_ioOverridingCategoryReaderListMap, io_ioOverridingAbstractCategoryReaderListMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticDeclarationAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                         GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticDeclarationAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_semanticDeclarationAST.mSlotID,
                                             categoryMethod_semanticDeclarationAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticDeclarationAST_buildCategoryListMaps (void) {
  gCategoryMethodTable_semanticDeclarationAST_buildCategoryListMaps.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationAST_buildCategoryListMaps (defineCategoryMethod_semanticDeclarationAST_buildCategoryListMaps,
                                                                         freeCategoryMethod_semanticDeclarationAST_buildCategoryListMaps) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element::~ GALGAS_templateInstructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (const GALGAS_templateInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::constructor_new (const GALGAS_templateInstructionAST & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_templateInstructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionListAST_2D_element::objectCompare (const GALGAS_templateInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionAST GALGAS_templateInstructionListAST_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateInstructionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ("templateInstructionListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  const GALGAS_templateInstructionListAST_2D_element * p = (const GALGAS_templateInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (void) :
mAttribute_mExpression (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element::~ GALGAS_templateInstructionIfBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                            const GALGAS_templateInstructionListAST & inOperand1) :
mAttribute_mExpression (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::constructor_new (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                                            const GALGAS_templateInstructionListAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionIfBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionIfBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionIfBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionIfBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInstructionIfBranchListAST_2D_element::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfBranchListAST_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @templateInstructionIfBranchListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ("templateInstructionIfBranchListAST-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  const GALGAS_templateInstructionIfBranchListAST_2D_element * p = (const GALGAS_templateInstructionIfBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) :
mAttribute_mConstantList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element::~ GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                    const GALGAS_templateInstructionListAST & inOperand1) :
mAttribute_mConstantList (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListAST_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_templateInstructionListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                                                    const GALGAS_templateInstructionListAST & inOperand1 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionSwitchBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantList.objectCompare (inOperand.mAttribute_mConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionSwitchBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mConstantList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::drop (void) {
  mAttribute_mConstantList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionSwitchBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListAST_2D_element::reader_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionSwitchBranchListAST_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @templateInstructionSwitchBranchListAST-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ("templateInstructionSwitchBranchListAST-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  const GALGAS_templateInstructionSwitchBranchListAST_2D_element * p = (const GALGAS_templateInstructionSwitchBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) :
mAttribute_mConstantList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::~ GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                                        const GALGAS_templateInstructionListForGeneration & inOperand1) :
mAttribute_mConstantList (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                             GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                                                                        const GALGAS_templateInstructionListForGeneration & inOperand1 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantList.objectCompare (inOperand.mAttribute_mConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mConstantList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mConstantList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionSwitchBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::reader_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @templateInstructionSwitchBranchListForGeneration-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ("templateInstructionSwitchBranchListForGeneration-element",
                                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element * p = (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element::~ GALGAS_lexicalInstructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::constructor_new (const GALGAS_lexicalInstructionAST & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalInstructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalInstructionListAST_2D_element::objectCompare (const GALGAS_lexicalInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalInstructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionListAST_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalInstructionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ("lexicalInstructionListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  const GALGAS_lexicalInstructionListAST_2D_element * p = (const GALGAS_lexicalInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (void) :
mAttribute_mLexicalRule () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element::~ GALGAS_lexicalRuleListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & inOperand0) :
mAttribute_mLexicalRule (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::constructor_new (const GALGAS_abstractLexicalRuleAST & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRuleListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRuleListAST_2D_element::objectCompare (const GALGAS_lexicalRuleListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRule.objectCompare (inOperand.mAttribute_mLexicalRule) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalRuleListAST_2D_element::isValid (void) const {
  return mAttribute_mLexicalRule.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST_2D_element::drop (void) {
  mAttribute_mLexicalRule.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @lexicalRuleListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalRule.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST GALGAS_lexicalRuleListAST_2D_element::reader_mLexicalRule (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRule ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalRuleListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ("lexicalRuleListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRuleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  const GALGAS_lexicalRuleListAST_2D_element * p = (const GALGAS_lexicalRuleListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRuleListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (void) :
mAttribute_mWhileExpression (),
mAttribute_mWhileInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element::~ GALGAS_lexicalWhileBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                          const GALGAS_lexicalInstructionListAST & inOperand1) :
mAttribute_mWhileExpression (inOperand0),
mAttribute_mWhileInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::constructor_new (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                          const GALGAS_lexicalInstructionListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalWhileBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalWhileBranchListAST_2D_element::objectCompare (const GALGAS_lexicalWhileBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mWhileExpression.objectCompare (inOperand.mAttribute_mWhileExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWhileInstructionList.objectCompare (inOperand.mAttribute_mWhileInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalWhileBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mWhileExpression.isValid () && mAttribute_mWhileInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST_2D_element::drop (void) {
  mAttribute_mWhileExpression.drop () ;
  mAttribute_mWhileInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalWhileBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalWhileBranchListAST_2D_element::reader_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalWhileBranchListAST_2D_element::reader_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalWhileBranchListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ("lexicalWhileBranchListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  const GALGAS_lexicalWhileBranchListAST_2D_element * p = (const GALGAS_lexicalWhileBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWhileBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (void) :
mAttribute_mSelectExpression (),
mAttribute_mSelectInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element::~ GALGAS_lexicalSelectBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                            const GALGAS_lexicalInstructionListAST & inOperand1) :
mAttribute_mSelectExpression (inOperand0),
mAttribute_mSelectInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::constructor_new (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                            const GALGAS_lexicalInstructionListAST & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSelectBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalSelectBranchListAST_2D_element::objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelectExpression.objectCompare (inOperand.mAttribute_mSelectExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectInstructionList.objectCompare (inOperand.mAttribute_mSelectInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalSelectBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mSelectExpression.isValid () && mAttribute_mSelectInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST_2D_element::drop (void) {
  mAttribute_mSelectExpression.drop () ;
  mAttribute_mSelectInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @lexicalSelectBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalSelectBranchListAST_2D_element::reader_mSelectExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectBranchListAST_2D_element::reader_mSelectInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @lexicalSelectBranchListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ("lexicalSelectBranchListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  const GALGAS_lexicalSelectBranchListAST_2D_element * p = (const GALGAS_lexicalSelectBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSelectBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) :
mAttribute_mLexicalRoutineActualArgument () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::~ GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0) :
mAttribute_mLexicalRoutineActualArgument (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::constructor_new (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRoutineActualArgument.objectCompare (inOperand.mAttribute_mLexicalRoutineActualArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::isValid (void) const {
  return mAttribute_mLexicalRoutineActualArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::drop (void) {
  mAttribute_mLexicalRoutineActualArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineCallActualArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalRoutineActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::reader_mLexicalRoutineActualArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineActualArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexicalRoutineCallActualArgumentListAST-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ("lexicalRoutineCallActualArgumentListAST-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element * p = (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) :
mAttribute_mLexicalActualInputArgument () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0) :
mAttribute_mLexicalActualInputArgument (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::constructor_new (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalActualInputArgument.objectCompare (inOperand.mAttribute_mLexicalActualInputArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::isValid (void) const {
  return mAttribute_mLexicalActualInputArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::drop (void) {
  mAttribute_mLexicalActualInputArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionCallActualArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalActualInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::reader_mLexicalActualInputArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalActualInputArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @lexicalFunctionCallActualArgumentListAST-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ("lexicalFunctionCallActualArgumentListAST-element",
                                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element * p = (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList_2D_element::GALGAS_lexicalTypeList_2D_element (void) :
mAttribute_mLexicalType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList_2D_element::~ GALGAS_lexicalTypeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList_2D_element::GALGAS_lexicalTypeList_2D_element (const GALGAS_lexicalTypeEnum & inOperand0) :
mAttribute_mLexicalType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList_2D_element GALGAS_lexicalTypeList_2D_element::constructor_new (const GALGAS_lexicalTypeEnum & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalTypeList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalTypeList_2D_element::objectCompare (const GALGAS_lexicalTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalType.objectCompare (inOperand.mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalTypeList_2D_element::isValid (void) const {
  return mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList_2D_element::drop (void) {
  mAttribute_mLexicalType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @lexicalTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeList_2D_element::reader_mLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalTypeList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeList_2D_element ("lexicalTypeList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList_2D_element GALGAS_lexicalTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeList_2D_element result ;
  const GALGAS_lexicalTypeList_2D_element * p = (const GALGAS_lexicalTypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (void) :
mAttribute_mLength (),
mAttribute_mName (),
mAttribute_mTerminalName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element::~ GALGAS_tokenSortedlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2) :
mAttribute_mLength (inOperand0),
mAttribute_mName (inOperand1),
mAttribute_mTerminalName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tokenSortedlist_2D_element (GALGAS_uint::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_string & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_tokenSortedlist_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tokenSortedlist_2D_element::objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLength.objectCompare (inOperand.mAttribute_mLength) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalName.objectCompare (inOperand.mAttribute_mTerminalName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_tokenSortedlist_2D_element::isValid (void) const {
  return mAttribute_mLength.isValid () && mAttribute_mName.isValid () && mAttribute_mTerminalName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist_2D_element::drop (void) {
  mAttribute_mLength.drop () ;
  mAttribute_mName.drop () ;
  mAttribute_mTerminalName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @tokenSortedlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLength.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_tokenSortedlist_2D_element::reader_mLength (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLength ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tokenSortedlist_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tokenSortedlist_2D_element::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @tokenSortedlist-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ("tokenSortedlist-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tokenSortedlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tokenSortedlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  const GALGAS_tokenSortedlist_2D_element * p = (const GALGAS_tokenSortedlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tokenSortedlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) :
mAttribute_mLexicalFormalArgumentMode (),
mAttribute_mLexicalFormalArgumentType (),
mAttribute_mArgumentNameForComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element::~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                        const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                        const GALGAS_string & inOperand2) :
mAttribute_mLexicalFormalArgumentMode (inOperand0),
mAttribute_mLexicalFormalArgumentType (inOperand1),
mAttribute_mArgumentNameForComment (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::constructor_new (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                        const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalRoutineFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRoutineFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalFormalArgumentMode.objectCompare (inOperand.mAttribute_mLexicalFormalArgumentMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalFormalArgumentType.objectCompare (inOperand.mAttribute_mLexicalFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentNameForComment.objectCompare (inOperand.mAttribute_mArgumentNameForComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalRoutineFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mLexicalFormalArgumentMode.isValid () && mAttribute_mLexicalFormalArgumentType.isValid () && mAttribute_mArgumentNameForComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::drop (void) {
  mAttribute_mLexicalFormalArgumentMode.drop () ;
  mAttribute_mLexicalFormalArgumentType.drop () ;
  mAttribute_mArgumentNameForComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalFormalArgumentMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList_2D_element::reader_mLexicalFormalArgumentMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFormalArgumentMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList_2D_element::reader_mLexicalFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList_2D_element::reader_mArgumentNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentNameForComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalRoutineFormalArgumentList-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ("lexicalRoutineFormalArgumentList-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  const GALGAS_lexicalRoutineFormalArgumentList_2D_element * p = (const GALGAS_lexicalRoutineFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) :
mAttribute_mLexicalType (),
mAttribute_mArgumentNameForComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element::~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                          const GALGAS_string & inOperand1) :
mAttribute_mLexicalType (inOperand0),
mAttribute_mArgumentNameForComment (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::constructor_new (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                                          const GALGAS_string & inOperand1 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalFunctionFormalArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalFunctionFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalType.objectCompare (inOperand.mAttribute_mLexicalType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentNameForComment.objectCompare (inOperand.mAttribute_mArgumentNameForComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalFunctionFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mLexicalType.isValid () && mAttribute_mArgumentNameForComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::drop (void) {
  mAttribute_mLexicalType.drop () ;
  mAttribute_mArgumentNameForComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionFormalArgumentList_2D_element::reader_mLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionFormalArgumentList_2D_element::reader_mArgumentNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentNameForComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalFunctionFormalArgumentList-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ("lexicalFunctionFormalArgumentList-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  const GALGAS_lexicalFunctionFormalArgumentList_2D_element * p = (const GALGAS_lexicalFunctionFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList_2D_element::GALGAS_lexiqueComponentGenerationList_2D_element (void) :
mAttribute_mLexiqueComponentName (),
mAttribute_mCppHeaderContents (),
mAttribute_mCppContents (),
mAttribute_mCocoaHeaderContents (),
mAttribute_mCocoaContents () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList_2D_element::~ GALGAS_lexiqueComponentGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList_2D_element::GALGAS_lexiqueComponentGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2,
                                                                                                    const GALGAS_string & inOperand3,
                                                                                                    const GALGAS_string & inOperand4) :
mAttribute_mLexiqueComponentName (inOperand0),
mAttribute_mCppHeaderContents (inOperand1),
mAttribute_mCppContents (inOperand2),
mAttribute_mCocoaHeaderContents (inOperand3),
mAttribute_mCocoaContents (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList_2D_element GALGAS_lexiqueComponentGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueComponentGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList_2D_element GALGAS_lexiqueComponentGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_string & inOperand3,
                                                                                                                    const GALGAS_string & inOperand4 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueComponentGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexiqueComponentGenerationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexiqueComponentGenerationList_2D_element::objectCompare (const GALGAS_lexiqueComponentGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueComponentName.objectCompare (inOperand.mAttribute_mLexiqueComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppHeaderContents.objectCompare (inOperand.mAttribute_mCppHeaderContents) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppContents.objectCompare (inOperand.mAttribute_mCppContents) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCocoaHeaderContents.objectCompare (inOperand.mAttribute_mCocoaHeaderContents) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCocoaContents.objectCompare (inOperand.mAttribute_mCocoaContents) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexiqueComponentGenerationList_2D_element::isValid (void) const {
  return mAttribute_mLexiqueComponentName.isValid () && mAttribute_mCppHeaderContents.isValid () && mAttribute_mCppContents.isValid () && mAttribute_mCocoaHeaderContents.isValid () && mAttribute_mCocoaContents.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList_2D_element::drop (void) {
  mAttribute_mLexiqueComponentName.drop () ;
  mAttribute_mCppHeaderContents.drop () ;
  mAttribute_mCppContents.drop () ;
  mAttribute_mCocoaHeaderContents.drop () ;
  mAttribute_mCocoaContents.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @lexiqueComponentGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexiqueComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppHeaderContents.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppContents.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCocoaHeaderContents.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCocoaContents.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList_2D_element::reader_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList_2D_element::reader_mCppHeaderContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppHeaderContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList_2D_element::reader_mCppContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList_2D_element::reader_mCocoaHeaderContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCocoaHeaderContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList_2D_element::reader_mCocoaContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCocoaContents ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexiqueComponentGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentGenerationList_2D_element ("lexiqueComponentGenerationList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueComponentGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList_2D_element GALGAS_lexiqueComponentGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentGenerationList_2D_element result ;
  const GALGAS_lexiqueComponentGenerationList_2D_element * p = (const GALGAS_lexiqueComponentGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (void) :
mAttribute_mLeadingCharacterStrippedCount (),
mAttribute_mTerminalList (),
mAttribute_mLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element::~ GALGAS_guiLabelListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_terminalLabelListAST & inOperand1,
                                                                      const GALGAS_location & inOperand2) :
mAttribute_mLeadingCharacterStrippedCount (inOperand0),
mAttribute_mTerminalList (inOperand1),
mAttribute_mLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiLabelListAST_2D_element (GALGAS_uint::constructor_default (HERE),
                                            GALGAS_terminalLabelListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                      const GALGAS_terminalLabelListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiLabelListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiLabelListAST_2D_element::objectCompare (const GALGAS_guiLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLeadingCharacterStrippedCount.objectCompare (inOperand.mAttribute_mLeadingCharacterStrippedCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalList.objectCompare (inOperand.mAttribute_mTerminalList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocation.objectCompare (inOperand.mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiLabelListAST_2D_element::isValid (void) const {
  return mAttribute_mLeadingCharacterStrippedCount.isValid () && mAttribute_mTerminalList.isValid () && mAttribute_mLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST_2D_element::drop (void) {
  mAttribute_mLeadingCharacterStrippedCount.drop () ;
  mAttribute_mTerminalList.drop () ;
  mAttribute_mLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @guiLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLeadingCharacterStrippedCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiLabelListAST_2D_element::reader_mLeadingCharacterStrippedCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeadingCharacterStrippedCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_guiLabelListAST_2D_element::reader_mTerminalList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guiLabelListAST_2D_element::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @guiLabelListAST-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ("guiLabelListAST-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  const GALGAS_guiLabelListAST_2D_element * p = (const GALGAS_guiLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element::GALGAS_guiCommandLineOptionList_2D_element (void) :
mAttribute_mOptionComponent (),
mAttribute_mOptionIdentifier (),
mAttribute_mOptionChar (),
mAttribute_mOptionString (),
mAttribute_mComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element::~ GALGAS_guiCommandLineOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element::GALGAS_guiCommandLineOptionList_2D_element (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_char & inOperand2,
                                                                                        const GALGAS_string & inOperand3,
                                                                                        const GALGAS_string & inOperand4) :
mAttribute_mOptionComponent (inOperand0),
mAttribute_mOptionIdentifier (inOperand1),
mAttribute_mOptionChar (inOperand2),
mAttribute_mOptionString (inOperand3),
mAttribute_mComment (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCommandLineOptionList_2D_element (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_char::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_char & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_guiCommandLineOptionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiCommandLineOptionList_2D_element::objectCompare (const GALGAS_guiCommandLineOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionComponent.objectCompare (inOperand.mAttribute_mOptionComponent) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionIdentifier.objectCompare (inOperand.mAttribute_mOptionIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionChar.objectCompare (inOperand.mAttribute_mOptionChar) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionString.objectCompare (inOperand.mAttribute_mOptionString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mComment.objectCompare (inOperand.mAttribute_mComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiCommandLineOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionComponent.isValid () && mAttribute_mOptionIdentifier.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList_2D_element::drop (void) {
  mAttribute_mOptionComponent.drop () ;
  mAttribute_mOptionIdentifier.drop () ;
  mAttribute_mOptionChar.drop () ;
  mAttribute_mOptionString.drop () ;
  mAttribute_mComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @guiCommandLineOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionComponent.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionChar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::reader_mOptionComponent (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::reader_mOptionIdentifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_guiCommandLineOptionList_2D_element::reader_mOptionChar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::reader_mOptionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::reader_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @guiCommandLineOptionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ("guiCommandLineOptionList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCommandLineOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  const GALGAS_guiCommandLineOptionList_2D_element * p = (const GALGAS_guiCommandLineOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCommandLineOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (void) :
mAttribute_mKey (),
mAttribute_mContents () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element::~ GALGAS_textMacroList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1) :
mAttribute_mKey (inOperand0),
mAttribute_mContents (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_textMacroList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_textMacroList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_textMacroList_2D_element::objectCompare (const GALGAS_textMacroList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mKey.objectCompare (inOperand.mAttribute_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mContents.objectCompare (inOperand.mAttribute_mContents) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_textMacroList_2D_element::isValid (void) const {
  return mAttribute_mKey.isValid () && mAttribute_mContents.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList_2D_element::drop (void) {
  mAttribute_mKey.drop () ;
  mAttribute_mContents.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @textMacroList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mContents.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList_2D_element::reader_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList_2D_element::reader_mContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mContents ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @textMacroList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList_2D_element ("textMacroList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_textMacroList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_textMacroList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  const GALGAS_textMacroList_2D_element * p = (const GALGAS_textMacroList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_textMacroList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element::GALGAS_importedLexiqueList_2D_element (void) :
mAttribute_mLexiqueClassName (),
mAttribute_mBlockComment (),
mAttribute_mTitle (),
mAttribute_mTextMacroList (),
mAttribute_mLabels () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element::~ GALGAS_importedLexiqueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element::GALGAS_importedLexiqueList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_textMacroList & inOperand3,
                                                                              const GALGAS_guiLabelListAST & inOperand4) :
mAttribute_mLexiqueClassName (inOperand0),
mAttribute_mBlockComment (inOperand1),
mAttribute_mTitle (inOperand2),
mAttribute_mTextMacroList (inOperand3),
mAttribute_mLabels (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_importedLexiqueList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_textMacroList::constructor_emptyList (HERE),
                                                GALGAS_guiLabelListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_string & inOperand2,
                                                                                              const GALGAS_textMacroList & inOperand3,
                                                                                              const GALGAS_guiLabelListAST & inOperand4 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_importedLexiqueList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_importedLexiqueList_2D_element::objectCompare (const GALGAS_importedLexiqueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueClassName.objectCompare (inOperand.mAttribute_mLexiqueClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlockComment.objectCompare (inOperand.mAttribute_mBlockComment) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTitle.objectCompare (inOperand.mAttribute_mTitle) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTextMacroList.objectCompare (inOperand.mAttribute_mTextMacroList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabels.objectCompare (inOperand.mAttribute_mLabels) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_importedLexiqueList_2D_element::isValid (void) const {
  return mAttribute_mLexiqueClassName.isValid () && mAttribute_mBlockComment.isValid () && mAttribute_mTitle.isValid () && mAttribute_mTextMacroList.isValid () && mAttribute_mLabels.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList_2D_element::drop (void) {
  mAttribute_mLexiqueClassName.drop () ;
  mAttribute_mBlockComment.drop () ;
  mAttribute_mTitle.drop () ;
  mAttribute_mTextMacroList.drop () ;
  mAttribute_mLabels.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @importedLexiqueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexiqueClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlockComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTitle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTextMacroList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabels.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList_2D_element::reader_mLexiqueClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList_2D_element::reader_mBlockComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList_2D_element::reader_mTitle (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTitle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_importedLexiqueList_2D_element::reader_mTextMacroList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTextMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_importedLexiqueList_2D_element::reader_mLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabels ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @importedLexiqueList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ("importedLexiqueList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_importedLexiqueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_importedLexiqueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  const GALGAS_importedLexiqueList_2D_element * p = (const GALGAS_importedLexiqueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_importedLexiqueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element::GALGAS_semanticExpressionListAST_2D_element (void) :
mAttribute_mExpression (),
mAttribute_mEndOfExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element::~ GALGAS_semanticExpressionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element::GALGAS_semanticExpressionListAST_2D_element (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                          const GALGAS_location & inOperand1) :
mAttribute_mExpression (inOperand0),
mAttribute_mEndOfExpressionLocation (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element GALGAS_semanticExpressionListAST_2D_element::constructor_new (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                                          const GALGAS_location & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticExpressionListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticExpressionListAST_2D_element::objectCompare (const GALGAS_semanticExpressionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfExpressionLocation.objectCompare (inOperand.mAttribute_mEndOfExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticExpressionListAST_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () && mAttribute_mEndOfExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
  mAttribute_mEndOfExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @semanticExpressionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_semanticExpressionListAST_2D_element::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_semanticExpressionListAST_2D_element::reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @semanticExpressionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListAST_2D_element ("semanticExpressionListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element GALGAS_semanticExpressionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST_2D_element result ;
  const GALGAS_semanticExpressionListAST_2D_element * p = (const GALGAS_semanticExpressionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (void) :
mAttribute_mActualParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element::~ GALGAS_actualParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (const GALGAS_actualParameterAST & inOperand0) :
mAttribute_mActualParameter (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::constructor_new (const GALGAS_actualParameterAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualParameterListAST_2D_element::objectCompare (const GALGAS_actualParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualParameter.objectCompare (inOperand.mAttribute_mActualParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mActualParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST_2D_element::drop (void) {
  mAttribute_mActualParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterAST GALGAS_actualParameterListAST_2D_element::reader_mActualParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @actualParameterListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ("actualParameterListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  const GALGAS_actualParameterListAST_2D_element * p = (const GALGAS_actualParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element::~ GALGAS_semanticInstructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (const GALGAS_semanticInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::constructor_new (const GALGAS_semanticInstructionAST & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticInstructionListAST_2D_element::objectCompare (const GALGAS_semanticInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticInstructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @semanticInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionAST GALGAS_semanticInstructionListAST_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @semanticInstructionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ("semanticInstructionListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  const GALGAS_semanticInstructionListAST_2D_element * p = (const GALGAS_semanticInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (void) :
mAttribute_mSemanticDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element::~ GALGAS_semanticDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (const GALGAS_semanticDeclarationAST & inOperand0) :
mAttribute_mSemanticDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::constructor_new (const GALGAS_semanticDeclarationAST & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticDeclarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticDeclarationListAST_2D_element::objectCompare (const GALGAS_semanticDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticDeclaration.objectCompare (inOperand.mAttribute_mSemanticDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mSemanticDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST_2D_element::drop (void) {
  mAttribute_mSemanticDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @semanticDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSemanticDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationListAST_2D_element::reader_mSemanticDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @semanticDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ("semanticDeclarationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  const GALGAS_semanticDeclarationListAST_2D_element * p = (const GALGAS_semanticDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) :
mAttribute_mAscending (),
mAttribute_mEnumeratedCollection () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::~ GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                                                                  const GALGAS_abstractEnumeratedCollectionAST & inOperand1) :
mAttribute_mAscending (inOperand0),
mAttribute_mEnumeratedCollection (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                                  const GALGAS_abstractEnumeratedCollectionAST & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_forInstructionEnumeratedObjectListAST_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAscending.objectCompare (inOperand.mAttribute_mAscending) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratedCollection.objectCompare (inOperand.mAttribute_mEnumeratedCollection) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_forInstructionEnumeratedObjectListAST_2D_element::isValid (void) const {
  return mAttribute_mAscending.isValid () && mAttribute_mEnumeratedCollection.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::drop (void) {
  mAttribute_mAscending.drop () ;
  mAttribute_mEnumeratedCollection.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAscending.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forInstructionEnumeratedObjectListAST_2D_element::reader_mAscending (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAscending ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractEnumeratedCollectionAST GALGAS_forInstructionEnumeratedObjectListAST_2D_element::reader_mEnumeratedCollection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedCollection ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @forInstructionEnumeratedObjectListAST-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ("forInstructionEnumeratedObjectListAST-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectListAST_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (void) :
mAttribute_mSwitchConstantList (),
mAttribute_mAssociatedValuesExtraction (),
mAttribute_mInstructions (),
mAttribute_mEndOfBranch () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element::~ GALGAS_switchBranchesAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                          const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                          const GALGAS_semanticInstructionListAST & inOperand2,
                                                                          const GALGAS_location & inOperand3) :
mAttribute_mSwitchConstantList (inOperand0),
mAttribute_mAssociatedValuesExtraction (inOperand1),
mAttribute_mInstructions (inOperand2),
mAttribute_mEndOfBranch (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesAST_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                              GALGAS_switchExtractedValuesListAST::constructor_emptyList (HERE),
                                              GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                          const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                          const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                          const GALGAS_location & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_switchBranchesAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_switchBranchesAST_2D_element::objectCompare (const GALGAS_switchBranchesAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSwitchConstantList.objectCompare (inOperand.mAttribute_mSwitchConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAssociatedValuesExtraction.objectCompare (inOperand.mAttribute_mAssociatedValuesExtraction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructions.objectCompare (inOperand.mAttribute_mInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBranch.objectCompare (inOperand.mAttribute_mEndOfBranch) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_switchBranchesAST_2D_element::isValid (void) const {
  return mAttribute_mSwitchConstantList.isValid () && mAttribute_mAssociatedValuesExtraction.isValid () && mAttribute_mInstructions.isValid () && mAttribute_mEndOfBranch.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST_2D_element::drop (void) {
  mAttribute_mSwitchConstantList.drop () ;
  mAttribute_mAssociatedValuesExtraction.drop () ;
  mAttribute_mInstructions.drop () ;
  mAttribute_mEndOfBranch.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @switchBranchesAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchBranchesAST_2D_element::reader_mSwitchConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchBranchesAST_2D_element::reader_mAssociatedValuesExtraction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedValuesExtraction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_switchBranchesAST_2D_element::reader_mInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchBranchesAST_2D_element::reader_mEndOfBranch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBranch ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @switchBranchesAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ("switchBranchesAST-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchBranchesAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchBranchesAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  const GALGAS_switchBranchesAST_2D_element * p = (const GALGAS_switchBranchesAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchBranchesAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) :
mAttribute_mInsertOrReplaceDeclarationLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element::~ GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (const GALGAS_location & inOperand0) :
mAttribute_mInsertOrReplaceDeclarationLocation (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST_2D_element (GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::constructor_new (const GALGAS_location & inOperand0 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_insertOrReplaceDeclarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_insertOrReplaceDeclarationListAST_2D_element::objectCompare (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInsertOrReplaceDeclarationLocation.objectCompare (inOperand.mAttribute_mInsertOrReplaceDeclarationLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_insertOrReplaceDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mInsertOrReplaceDeclarationLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::drop (void) {
  mAttribute_mInsertOrReplaceDeclarationLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @insertOrReplaceDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_insertOrReplaceDeclarationListAST_2D_element::reader_mInsertOrReplaceDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertOrReplaceDeclarationLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @insertOrReplaceDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ("insertOrReplaceDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  const GALGAS_insertOrReplaceDeclarationListAST_2D_element * p = (const GALGAS_insertOrReplaceDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertOrReplaceDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element::GALGAS_matchInstructionBranchListAST_2D_element (void) :
mAttribute_mMatchEntryList (),
mAttribute_mEndOfMatchEntryList (),
mAttribute_mMatchBranchInstructionList (),
mAttribute_mEndOf_5F_instructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element::~ GALGAS_matchInstructionBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element::GALGAS_matchInstructionBranchListAST_2D_element (const GALGAS_matchEntryListAST & inOperand0,
                                                                                                  const GALGAS_location & inOperand1,
                                                                                                  const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                  const GALGAS_location & inOperand3) :
mAttribute_mMatchEntryList (inOperand0),
mAttribute_mEndOfMatchEntryList (inOperand1),
mAttribute_mMatchBranchInstructionList (inOperand2),
mAttribute_mEndOf_5F_instructionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element GALGAS_matchInstructionBranchListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchInstructionBranchListAST_2D_element (GALGAS_matchEntryListAST::constructor_emptyList (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element GALGAS_matchInstructionBranchListAST_2D_element::constructor_new (const GALGAS_matchEntryListAST & inOperand0,
                                                                                                                  const GALGAS_location & inOperand1,
                                                                                                                  const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                                  const GALGAS_location & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_matchInstructionBranchListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchInstructionBranchListAST_2D_element::objectCompare (const GALGAS_matchInstructionBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMatchEntryList.objectCompare (inOperand.mAttribute_mMatchEntryList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfMatchEntryList.objectCompare (inOperand.mAttribute_mEndOfMatchEntryList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMatchBranchInstructionList.objectCompare (inOperand.mAttribute_mMatchBranchInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOf_5F_instructionList.objectCompare (inOperand.mAttribute_mEndOf_5F_instructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchInstructionBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mMatchEntryList.isValid () && mAttribute_mEndOfMatchEntryList.isValid () && mAttribute_mMatchBranchInstructionList.isValid () && mAttribute_mEndOf_5F_instructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST_2D_element::drop (void) {
  mAttribute_mMatchEntryList.drop () ;
  mAttribute_mEndOfMatchEntryList.drop () ;
  mAttribute_mMatchBranchInstructionList.drop () ;
  mAttribute_mEndOf_5F_instructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @matchInstructionBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMatchEntryList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfMatchEntryList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMatchBranchInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOf_5F_instructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchInstructionBranchListAST_2D_element::reader_mMatchEntryList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_matchInstructionBranchListAST_2D_element::reader_mEndOfMatchEntryList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_matchInstructionBranchListAST_2D_element::reader_mMatchBranchInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchBranchInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_matchInstructionBranchListAST_2D_element::reader_mEndOf_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_instructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @matchInstructionBranchListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListAST_2D_element ("matchInstructionBranchListAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element GALGAS_matchInstructionBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST_2D_element result ;
  const GALGAS_matchInstructionBranchListAST_2D_element * p = (const GALGAS_matchInstructionBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element::~ GALGAS_syntaxInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::constructor_new (const GALGAS_syntaxInstructionAST & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_syntaxInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxInstructionList_2D_element::objectCompare (const GALGAS_syntaxInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxInstructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @syntaxInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionList_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @syntaxInstructionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ("syntaxInstructionList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  const GALGAS_syntaxInstructionList_2D_element * p = (const GALGAS_syntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (void) :
mAttribute_mSyntaxInstructionList (),
mAttribute_mEndOf_5F_instructions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element::~ GALGAS_listOfSyntaxInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                              const GALGAS_location & inOperand1) :
mAttribute_mSyntaxInstructionList (inOperand0),
mAttribute_mEndOf_5F_instructions (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSyntaxInstructionList_2D_element (GALGAS_syntaxInstructionList::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::constructor_new (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                                              const GALGAS_location & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_listOfSyntaxInstructionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_listOfSyntaxInstructionList_2D_element::objectCompare (const GALGAS_listOfSyntaxInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxInstructionList.objectCompare (inOperand.mAttribute_mSyntaxInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOf_5F_instructions.objectCompare (inOperand.mAttribute_mEndOf_5F_instructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_listOfSyntaxInstructionList_2D_element::isValid (void) const {
  return mAttribute_mSyntaxInstructionList.isValid () && mAttribute_mEndOf_5F_instructions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList_2D_element::drop (void) {
  mAttribute_mSyntaxInstructionList.drop () ;
  mAttribute_mEndOf_5F_instructions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @listOfSyntaxInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_listOfSyntaxInstructionList_2D_element::reader_mSyntaxInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_listOfSyntaxInstructionList_2D_element::reader_mEndOf_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_instructions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @listOfSyntaxInstructionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ("listOfSyntaxInstructionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  const GALGAS_listOfSyntaxInstructionList_2D_element * p = (const GALGAS_listOfSyntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listOfSyntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (void) :
mAttribute_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element::~ GALGAS_collectionValueElementList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (const GALGAS_abstractCollectionValueElement & inOperand0) :
mAttribute_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::constructor_new (const GALGAS_abstractCollectionValueElement & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_collectionValueElementList_2D_element::objectCompare (const GALGAS_collectionValueElementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElement.objectCompare (inOperand.mAttribute_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_collectionValueElementList_2D_element::isValid (void) const {
  return mAttribute_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList_2D_element::drop (void) {
  mAttribute_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @collectionValueElementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElement GALGAS_collectionValueElementList_2D_element::reader_mElement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @collectionValueElementList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ("collectionValueElementList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_collectionValueElementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_collectionValueElementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  const GALGAS_collectionValueElementList_2D_element * p = (const GALGAS_collectionValueElementList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element::~ GALGAS_syntaxExtensions_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (const GALGAS_string & inOperand0,
                                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxExtensions_2D_element (GALGAS_string::constructor_default (HERE),
                                             GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxExtensions_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxExtensions_2D_element::objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxExtensions_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxExtensions_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxExtensions_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @syntaxExtensions-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_syntaxExtensions_2D_element::reader_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_syntaxExtensions_2D_element::reader_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @syntaxExtensions-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ("syntaxExtensions-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxExtensions_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxExtensions_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensions_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  const GALGAS_syntaxExtensions_2D_element * p = (const GALGAS_syntaxExtensions_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxExtensions_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensions-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (void) :
mAttribute_mInstructionList (),
mAttribute_mEndOfInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element::~ GALGAS_prologueEpilogueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                const GALGAS_location & inOperand1) :
mAttribute_mInstructionList (inOperand0),
mAttribute_mEndOfInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prologueEpilogueList_2D_element (GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::constructor_new (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                                const GALGAS_location & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prologueEpilogueList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prologueEpilogueList_2D_element::objectCompare (const GALGAS_prologueEpilogueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructionList.objectCompare (inOperand.mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prologueEpilogueList_2D_element::isValid (void) const {
  return mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList_2D_element::drop (void) {
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @prologueEpilogueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_prologueEpilogueList_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_prologueEpilogueList_2D_element::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @prologueEpilogueList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ("prologueEpilogueList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prologueEpilogueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prologueEpilogueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prologueEpilogueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  const GALGAS_prologueEpilogueList_2D_element * p = (const GALGAS_prologueEpilogueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prologueEpilogueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element::~ GALGAS_templateInstructionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::constructor_new (const GALGAS_templateInstructionForGeneration & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_templateInstructionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionListForGeneration_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @templateInstructionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ("templateInstructionListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  const GALGAS_templateInstructionListForGeneration_2D_element * p = (const GALGAS_templateInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element::~ GALGAS_semanticInstructionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionForGeneration & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::constructor_new (const GALGAS_semanticInstructionForGeneration & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticInstructionListForGeneration_2D_element::objectCompare (const GALGAS_semanticInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionListForGeneration_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @semanticInstructionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ("semanticInstructionListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  const GALGAS_semanticInstructionListForGeneration_2D_element * p = (const GALGAS_semanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) :
mAttribute_mInstructionList (),
mAttribute_mEndOfInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::~ GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                            const GALGAS_location & inOperand1) :
mAttribute_mInstructionList (inOperand0),
mAttribute_mEndOfInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSemanticInstructionListForGeneration_2D_element (GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::constructor_new (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                                            const GALGAS_location & inOperand1 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_listOfSemanticInstructionListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_listOfSemanticInstructionListForGeneration_2D_element::objectCompare (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructionList.objectCompare (inOperand.mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_listOfSemanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::drop (void) {
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @listOfSemanticInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_listOfSemanticInstructionListForGeneration_2D_element::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @listOfSemanticInstructionListForGeneration-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ("listOfSemanticInstructionListForGeneration-element",
                                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSemanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  const GALGAS_listOfSemanticInstructionListForGeneration_2D_element * p = (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration_2D_element::GALGAS_semanticDeclarationSortedListForGeneration_2D_element (void) :
mAttribute_mMessage (),
mAttribute_mDeclaration (),
mAttribute_mSortKey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration_2D_element::~ GALGAS_semanticDeclarationSortedListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration_2D_element::GALGAS_semanticDeclarationSortedListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                            const GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                                                                                            const GALGAS_string & inOperand2) :
mAttribute_mMessage (inOperand0),
mAttribute_mDeclaration (inOperand1),
mAttribute_mSortKey (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration_2D_element GALGAS_semanticDeclarationSortedListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                            const GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                                                                                                            const GALGAS_string & inOperand2 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationSortedListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_semanticDeclarationSortedListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticDeclarationSortedListForGeneration_2D_element::objectCompare (const GALGAS_semanticDeclarationSortedListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMessage.objectCompare (inOperand.mAttribute_mMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSortKey.objectCompare (inOperand.mAttribute_mSortKey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticDeclarationSortedListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mMessage.isValid () && mAttribute_mDeclaration.isValid () && mAttribute_mSortKey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration_2D_element::drop (void) {
  mAttribute_mMessage.drop () ;
  mAttribute_mDeclaration.drop () ;
  mAttribute_mSortKey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @semanticDeclarationSortedListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSortKey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_semanticDeclarationSortedListForGeneration_2D_element::reader_mMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration GALGAS_semanticDeclarationSortedListForGeneration_2D_element::reader_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_semanticDeclarationSortedListForGeneration_2D_element::reader_mSortKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortKey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @semanticDeclarationSortedListForGeneration-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationSortedListForGeneration_2D_element ("semanticDeclarationSortedListForGeneration-element",
                                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationSortedListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationSortedListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationSortedListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationSortedListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration_2D_element GALGAS_semanticDeclarationSortedListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationSortedListForGeneration_2D_element result ;
  const GALGAS_semanticDeclarationSortedListForGeneration_2D_element * p = (const GALGAS_semanticDeclarationSortedListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationSortedListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationSortedListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (void) :
mAttribute_mSyntaxComponentName (),
mAttribute_mNonTerminalToAddCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element::~ GALGAS_nonTerminalToAddList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_uint & inOperand1) :
mAttribute_mSyntaxComponentName (inOperand0),
mAttribute_mNonTerminalToAddCount (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalToAddList_2D_element (GALGAS_string::constructor_default (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_uint & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonTerminalToAddList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonTerminalToAddList_2D_element::objectCompare (const GALGAS_nonTerminalToAddList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentName.objectCompare (inOperand.mAttribute_mSyntaxComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalToAddCount.objectCompare (inOperand.mAttribute_mNonTerminalToAddCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonTerminalToAddList_2D_element::isValid (void) const {
  return mAttribute_mSyntaxComponentName.isValid () && mAttribute_mNonTerminalToAddCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList_2D_element::drop (void) {
  mAttribute_mSyntaxComponentName.drop () ;
  mAttribute_mNonTerminalToAddCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalToAddList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalToAddCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_nonTerminalToAddList_2D_element::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalToAddList_2D_element::reader_mNonTerminalToAddCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalToAddCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @nonTerminalToAddList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ("nonTerminalToAddList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalToAddList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalToAddList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalToAddList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  const GALGAS_nonTerminalToAddList_2D_element * p = (const GALGAS_nonTerminalToAddList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalToAddList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mTargetVarCppName (),
mAttribute_mSourceLexicalAttributeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element::~ GALGAS_terminalCheckAssignementList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mAttribute_mTypeName (inOperand0),
mAttribute_mTargetVarCppName (inOperand1),
mAttribute_mSourceLexicalAttributeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalCheckAssignementList_2D_element (GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_terminalCheckAssignementList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalCheckAssignementList_2D_element::objectCompare (const GALGAS_terminalCheckAssignementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetVarCppName.objectCompare (inOperand.mAttribute_mTargetVarCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceLexicalAttributeName.objectCompare (inOperand.mAttribute_mSourceLexicalAttributeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalCheckAssignementList_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mTargetVarCppName.isValid () && mAttribute_mSourceLexicalAttributeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mTargetVarCppName.drop () ;
  mAttribute_mSourceLexicalAttributeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @terminalCheckAssignementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList_2D_element::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList_2D_element::reader_mTargetVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList_2D_element::reader_mSourceLexicalAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceLexicalAttributeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @terminalCheckAssignementList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ("terminalCheckAssignementList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalCheckAssignementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalCheckAssignementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckAssignementList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  const GALGAS_terminalCheckAssignementList_2D_element * p = (const GALGAS_terminalCheckAssignementList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalCheckAssignementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (void) :
mAttribute_mSwitchConstantList (),
mAttribute_mExtractedAssociatedValuesForGeneration (),
mAttribute_mLocationIndex (),
mAttribute_mInstructions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element::~ GALGAS_switchBranchesForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                              const GALGAS_uint & inOperand2,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mAttribute_mSwitchConstantList (inOperand0),
mAttribute_mExtractedAssociatedValuesForGeneration (inOperand1),
mAttribute_mLocationIndex (inOperand2),
mAttribute_mInstructions (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesForGeneration_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                        GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_uint::constructor_default (HERE),
                                                        GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                              const GALGAS_uint & inOperand2,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_switchBranchesForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_switchBranchesForGeneration_2D_element::objectCompare (const GALGAS_switchBranchesForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSwitchConstantList.objectCompare (inOperand.mAttribute_mSwitchConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtractedAssociatedValuesForGeneration.objectCompare (inOperand.mAttribute_mExtractedAssociatedValuesForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocationIndex.objectCompare (inOperand.mAttribute_mLocationIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructions.objectCompare (inOperand.mAttribute_mInstructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_switchBranchesForGeneration_2D_element::isValid (void) const {
  return mAttribute_mSwitchConstantList.isValid () && mAttribute_mExtractedAssociatedValuesForGeneration.isValid () && mAttribute_mLocationIndex.isValid () && mAttribute_mInstructions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration_2D_element::drop (void) {
  mAttribute_mSwitchConstantList.drop () ;
  mAttribute_mExtractedAssociatedValuesForGeneration.drop () ;
  mAttribute_mLocationIndex.drop () ;
  mAttribute_mInstructions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @switchBranchesForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocationIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchBranchesForGeneration_2D_element::reader_mSwitchConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_switchBranchesForGeneration_2D_element::reader_mExtractedAssociatedValuesForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtractedAssociatedValuesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_switchBranchesForGeneration_2D_element::reader_mLocationIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocationIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_switchBranchesForGeneration_2D_element::reader_mInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @switchBranchesForGeneration-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ("switchBranchesForGeneration-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchBranchesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchBranchesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  const GALGAS_switchBranchesForGeneration_2D_element * p = (const GALGAS_switchBranchesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchBranchesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (void) :
mAttribute_mFilewrapperTemplateName (),
mAttribute_mFilewrapperTemplateFormalInputParameters (),
mAttribute_mTemplateInstructionListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element::~ GALGAS_filewrapperTemplateListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand2) :
mAttribute_mFilewrapperTemplateName (inOperand0),
mAttribute_mFilewrapperTemplateFormalInputParameters (inOperand1),
mAttribute_mTemplateInstructionListForGeneration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                 GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_filewrapperTemplateListForGeneration_2D_element::objectCompare (const GALGAS_filewrapperTemplateListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateName.objectCompare (inOperand.mAttribute_mFilewrapperTemplateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateFormalInputParameters.objectCompare (inOperand.mAttribute_mFilewrapperTemplateFormalInputParameters) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateInstructionListForGeneration.objectCompare (inOperand.mAttribute_mTemplateInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_filewrapperTemplateListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFilewrapperTemplateName.isValid () && mAttribute_mFilewrapperTemplateFormalInputParameters.isValid () && mAttribute_mTemplateInstructionListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration_2D_element::drop (void) {
  mAttribute_mFilewrapperTemplateName.drop () ;
  mAttribute_mFilewrapperTemplateFormalInputParameters.drop () ;
  mAttribute_mTemplateInstructionListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperTemplateListForGeneration_2D_element::reader_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_filewrapperTemplateListForGeneration_2D_element::reader_mFilewrapperTemplateFormalInputParameters (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateFormalInputParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_filewrapperTemplateListForGeneration_2D_element::reader_mTemplateInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateInstructionListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @filewrapperTemplateListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ("filewrapperTemplateListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  const GALGAS_filewrapperTemplateListForGeneration_2D_element * p = (const GALGAS_filewrapperTemplateListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element::GALGAS_matchListForGeneration_2D_element (void) :
mAttribute_mIsType (),
mAttribute_mTypeNameOrEnumerationConstantName (),
mAttribute_mLocalConstantName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element::~ GALGAS_matchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element::GALGAS_matchListForGeneration_2D_element (const GALGAS_bool & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mIsType (inOperand0),
mAttribute_mTypeNameOrEnumerationConstantName (inOperand1),
mAttribute_mLocalConstantName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element GALGAS_matchListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchListForGeneration_2D_element (GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_string::constructor_default (HERE),
                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element GALGAS_matchListForGeneration_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_matchListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchListForGeneration_2D_element::objectCompare (const GALGAS_matchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsType.objectCompare (inOperand.mAttribute_mIsType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeNameOrEnumerationConstantName.objectCompare (inOperand.mAttribute_mTypeNameOrEnumerationConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocalConstantName.objectCompare (inOperand.mAttribute_mLocalConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mIsType.isValid () && mAttribute_mTypeNameOrEnumerationConstantName.isValid () && mAttribute_mLocalConstantName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration_2D_element::drop (void) {
  mAttribute_mIsType.drop () ;
  mAttribute_mTypeNameOrEnumerationConstantName.drop () ;
  mAttribute_mLocalConstantName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @matchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_matchListForGeneration_2D_element::reader_mIsType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_matchListForGeneration_2D_element::reader_mTypeNameOrEnumerationConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeNameOrEnumerationConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_matchListForGeneration_2D_element::reader_mLocalConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocalConstantName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @matchListForGeneration-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchListForGeneration_2D_element ("matchListForGeneration-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element GALGAS_matchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_matchListForGeneration_2D_element result ;
  const GALGAS_matchListForGeneration_2D_element * p = (const GALGAS_matchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element::GALGAS_matchInstructionBranchListForGeneration_2D_element (void) :
mAttribute_mMatchListForGeneration (),
mAttribute_mMatchBranchInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element::~ GALGAS_matchInstructionBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element::GALGAS_matchInstructionBranchListForGeneration_2D_element (const GALGAS_matchListForGeneration & inOperand0,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inOperand1) :
mAttribute_mMatchListForGeneration (inOperand0),
mAttribute_mMatchBranchInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element GALGAS_matchInstructionBranchListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchInstructionBranchListForGeneration_2D_element (GALGAS_matchListForGeneration::constructor_emptyList (HERE),
                                                                    GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element GALGAS_matchInstructionBranchListForGeneration_2D_element::constructor_new (const GALGAS_matchListForGeneration & inOperand0,
                                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inOperand1 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_matchInstructionBranchListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchInstructionBranchListForGeneration_2D_element::objectCompare (const GALGAS_matchInstructionBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMatchListForGeneration.objectCompare (inOperand.mAttribute_mMatchListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMatchBranchInstructionList.objectCompare (inOperand.mAttribute_mMatchBranchInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchInstructionBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mMatchListForGeneration.isValid () && mAttribute_mMatchBranchInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mMatchListForGeneration.drop () ;
  mAttribute_mMatchBranchInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @matchInstructionBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMatchListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMatchBranchInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchInstructionBranchListForGeneration_2D_element::reader_mMatchListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_matchInstructionBranchListForGeneration_2D_element::reader_mMatchBranchInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchBranchInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @matchInstructionBranchListForGeneration-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListForGeneration_2D_element ("matchInstructionBranchListForGeneration-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element GALGAS_matchInstructionBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListForGeneration_2D_element result ;
  const GALGAS_matchInstructionBranchListForGeneration_2D_element * p = (const GALGAS_matchInstructionBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element::GALGAS_collectionValueElementListForGeneration_2D_element (void) :
mAttribute_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element::~ GALGAS_collectionValueElementListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element::GALGAS_collectionValueElementListForGeneration_2D_element (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0) :
mAttribute_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element GALGAS_collectionValueElementListForGeneration_2D_element::constructor_new (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_collectionValueElementListForGeneration_2D_element::objectCompare (const GALGAS_collectionValueElementListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElement.objectCompare (inOperand.mAttribute_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_collectionValueElementListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration_2D_element::drop (void) {
  mAttribute_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @collectionValueElementListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElementForGeneration GALGAS_collectionValueElementListForGeneration_2D_element::reader_mElement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @collectionValueElementListForGeneration-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ("collectionValueElementListForGeneration-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_collectionValueElementListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_collectionValueElementListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element GALGAS_collectionValueElementListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration_2D_element result ;
  const GALGAS_collectionValueElementListForGeneration_2D_element * p = (const GALGAS_collectionValueElementListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (void) :
mAttribute_mNonterminalName (),
mAttribute_mRuleIndex (),
mAttribute_mLabelImplementationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element::~ GALGAS_ruleDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_uint & inOperand1,
                                                                              const GALGAS_ruleLabelImplementationList & inOperand2) :
mAttribute_mNonterminalName (inOperand0),
mAttribute_mRuleIndex (inOperand1),
mAttribute_mLabelImplementationList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleDeclarationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_uint::constructor_default (HERE),
                                                GALGAS_ruleLabelImplementationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_uint & inOperand1,
                                                                                              const GALGAS_ruleLabelImplementationList & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ruleDeclarationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ruleDeclarationList_2D_element::objectCompare (const GALGAS_ruleDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalName.objectCompare (inOperand.mAttribute_mNonterminalName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRuleIndex.objectCompare (inOperand.mAttribute_mRuleIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelImplementationList.objectCompare (inOperand.mAttribute_mLabelImplementationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ruleDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mNonterminalName.isValid () && mAttribute_mRuleIndex.isValid () && mAttribute_mLabelImplementationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList_2D_element::drop (void) {
  mAttribute_mNonterminalName.drop () ;
  mAttribute_mRuleIndex.drop () ;
  mAttribute_mLabelImplementationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @ruleDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRuleIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelImplementationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_ruleDeclarationList_2D_element::reader_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ruleDeclarationList_2D_element::reader_mRuleIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleDeclarationList_2D_element::reader_mLabelImplementationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelImplementationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @ruleDeclarationList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ("ruleDeclarationList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ruleDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ruleDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  const GALGAS_ruleDeclarationList_2D_element * p = (const GALGAS_ruleDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ruleDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element::GALGAS_keySortedList_2D_element (void) :
mAttribute_mKey (),
mAttribute_mOrder () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element::~ GALGAS_keySortedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element::GALGAS_keySortedList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_uint & inOperand1) :
mAttribute_mKey (inOperand0),
mAttribute_mOrder (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element GALGAS_keySortedList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_keySortedList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element GALGAS_keySortedList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_uint & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_keySortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_keySortedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_keySortedList_2D_element::objectCompare (const GALGAS_keySortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mKey.objectCompare (inOperand.mAttribute_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOrder.objectCompare (inOperand.mAttribute_mOrder) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_keySortedList_2D_element::isValid (void) const {
  return mAttribute_mKey.isValid () && mAttribute_mOrder.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList_2D_element::drop (void) {
  mAttribute_mKey.drop () ;
  mAttribute_mOrder.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @keySortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOrder.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_keySortedList_2D_element::reader_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_keySortedList_2D_element::reader_mOrder (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrder ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @keySortedList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_keySortedList_2D_element ("keySortedList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_keySortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_keySortedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_keySortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_keySortedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element GALGAS_keySortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_keySortedList_2D_element result ;
  const GALGAS_keySortedList_2D_element * p = (const GALGAS_keySortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_keySortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("keySortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (void) :
mAttribute_mConstantName (),
mAttribute_mAssociatedValueTypeList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element::~ GALGAS_enumConstantListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_unifiedTypeMapProxyList & inOperand1) :
mAttribute_mConstantName (inOperand0),
mAttribute_mAssociatedValueTypeList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMapProxyList & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantListForGeneration_2D_element::objectCompare (const GALGAS_enumConstantListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantName.objectCompare (inOperand.mAttribute_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAssociatedValueTypeList.objectCompare (inOperand.mAttribute_mAssociatedValueTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mConstantName.isValid () && mAttribute_mAssociatedValueTypeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration_2D_element::drop (void) {
  mAttribute_mConstantName.drop () ;
  mAttribute_mAssociatedValueTypeList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @enumConstantListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAssociatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumConstantListForGeneration_2D_element::reader_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_enumConstantListForGeneration_2D_element::reader_mAssociatedValueTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedValueTypeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @enumConstantListForGeneration-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ("enumConstantListForGeneration-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  const GALGAS_enumConstantListForGeneration_2D_element * p = (const GALGAS_enumConstantListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element::GALGAS_mapStateTransitionSortedList_2D_element (void) :
mAttribute_mActionIndex (),
mAttribute_mActionName (),
mAttribute_mTargetStateIndex (),
mAttribute_mTargetStateName (),
mAttribute_mTransitionMessageKind (),
mAttribute_mTransitionMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element::~ GALGAS_mapStateTransitionSortedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element::GALGAS_mapStateTransitionSortedList_2D_element (const GALGAS_uint & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_uint & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                                const GALGAS_string & inOperand5) :
mAttribute_mActionIndex (inOperand0),
mAttribute_mActionName (inOperand1),
mAttribute_mTargetStateIndex (inOperand2),
mAttribute_mTargetStateName (inOperand3),
mAttribute_mTransitionMessageKind (inOperand4),
mAttribute_mTransitionMessage (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element GALGAS_mapStateTransitionSortedList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_uint & inOperand2,
                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                                                const GALGAS_string & inOperand5 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_mapStateTransitionSortedList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapStateTransitionSortedList_2D_element::objectCompare (const GALGAS_mapStateTransitionSortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActionIndex.objectCompare (inOperand.mAttribute_mActionIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetStateIndex.objectCompare (inOperand.mAttribute_mTargetStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetStateName.objectCompare (inOperand.mAttribute_mTargetStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionMessageKind.objectCompare (inOperand.mAttribute_mTransitionMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionMessage.objectCompare (inOperand.mAttribute_mTransitionMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapStateTransitionSortedList_2D_element::isValid (void) const {
  return mAttribute_mActionIndex.isValid () && mAttribute_mActionName.isValid () && mAttribute_mTargetStateIndex.isValid () && mAttribute_mTargetStateName.isValid () && mAttribute_mTransitionMessageKind.isValid () && mAttribute_mTransitionMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList_2D_element::drop (void) {
  mAttribute_mActionIndex.drop () ;
  mAttribute_mActionName.drop () ;
  mAttribute_mTargetStateIndex.drop () ;
  mAttribute_mTargetStateName.drop () ;
  mAttribute_mTransitionMessageKind.drop () ;
  mAttribute_mTransitionMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @mapStateTransitionSortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActionIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateTransitionSortedList_2D_element::reader_mActionIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateTransitionSortedList_2D_element::reader_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateTransitionSortedList_2D_element::reader_mTargetStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateTransitionSortedList_2D_element::reader_mTargetStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateTransitionSortedList_2D_element::reader_mTransitionMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateTransitionSortedList_2D_element::reader_mTransitionMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @mapStateTransitionSortedList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateTransitionSortedList_2D_element ("mapStateTransitionSortedList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateTransitionSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateTransitionSortedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateTransitionSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateTransitionSortedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element GALGAS_mapStateTransitionSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList_2D_element result ;
  const GALGAS_mapStateTransitionSortedList_2D_element * p = (const GALGAS_mapStateTransitionSortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateTransitionSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateTransitionSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element::GALGAS_mapStateSortedList_2D_element (void) :
mAttribute_mStateIndex (),
mAttribute_mStateName (),
mAttribute_mStateMessageKind (),
mAttribute_mStateMessage (),
mAttribute_mTransitionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element::~ GALGAS_mapStateSortedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element::GALGAS_mapStateSortedList_2D_element (const GALGAS_uint & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_mapStateTransitionSortedList & inOperand4) :
mAttribute_mStateIndex (inOperand0),
mAttribute_mStateName (inOperand1),
mAttribute_mStateMessageKind (inOperand2),
mAttribute_mStateMessage (inOperand3),
mAttribute_mTransitionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element GALGAS_mapStateSortedList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_mapStateTransitionSortedList & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapStateSortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_mapStateSortedList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapStateSortedList_2D_element::objectCompare (const GALGAS_mapStateSortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStateIndex.objectCompare (inOperand.mAttribute_mStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateName.objectCompare (inOperand.mAttribute_mStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateMessageKind.objectCompare (inOperand.mAttribute_mStateMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateMessage.objectCompare (inOperand.mAttribute_mStateMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionList.objectCompare (inOperand.mAttribute_mTransitionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapStateSortedList_2D_element::isValid (void) const {
  return mAttribute_mStateIndex.isValid () && mAttribute_mStateName.isValid () && mAttribute_mStateMessageKind.isValid () && mAttribute_mStateMessage.isValid () && mAttribute_mTransitionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList_2D_element::drop (void) {
  mAttribute_mStateIndex.drop () ;
  mAttribute_mStateName.drop () ;
  mAttribute_mStateMessageKind.drop () ;
  mAttribute_mStateMessage.drop () ;
  mAttribute_mTransitionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @mapStateSortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateSortedList_2D_element::reader_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateSortedList_2D_element::reader_mStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateSortedList_2D_element::reader_mStateMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateSortedList_2D_element::reader_mStateMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList GALGAS_mapStateSortedList_2D_element::reader_mTransitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @mapStateSortedList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateSortedList_2D_element ("mapStateSortedList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateSortedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateSortedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element GALGAS_mapStateSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapStateSortedList_2D_element result ;
  const GALGAS_mapStateSortedList_2D_element * p = (const GALGAS_mapStateSortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element::GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) :
mAttribute_mStartStateIndex (),
mAttribute_mStartStateName (),
mAttribute_mCurrentStateIndex (),
mAttribute_mCurrentStateName (),
mAttribute_mFinalStateIndex (),
mAttribute_mFinalStateName (),
mAttribute_mBehaviourMessageKind (),
mAttribute_mBehaviourMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element::~ GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element::GALGAS_branchBehaviourSortedListForMapOverride_2D_element (const GALGAS_uint & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                      const GALGAS_uint & inOperand2,
                                                                                                                      const GALGAS_string & inOperand3,
                                                                                                                      const GALGAS_uint & inOperand4,
                                                                                                                      const GALGAS_string & inOperand5,
                                                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                                                      const GALGAS_string & inOperand7) :
mAttribute_mStartStateIndex (inOperand0),
mAttribute_mStartStateName (inOperand1),
mAttribute_mCurrentStateIndex (inOperand2),
mAttribute_mCurrentStateName (inOperand3),
mAttribute_mFinalStateIndex (inOperand4),
mAttribute_mFinalStateName (inOperand5),
mAttribute_mBehaviourMessageKind (inOperand6),
mAttribute_mBehaviourMessage (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element GALGAS_branchBehaviourSortedListForMapOverride_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                      const GALGAS_uint & inOperand2,
                                                                                                                                      const GALGAS_string & inOperand3,
                                                                                                                                      const GALGAS_uint & inOperand4,
                                                                                                                                      const GALGAS_string & inOperand5,
                                                                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                                                                      const GALGAS_string & inOperand7 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_branchBehaviourSortedListForMapOverride_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_branchBehaviourSortedListForMapOverride_2D_element::objectCompare (const GALGAS_branchBehaviourSortedListForMapOverride_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStartStateIndex.objectCompare (inOperand.mAttribute_mStartStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStartStateName.objectCompare (inOperand.mAttribute_mStartStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCurrentStateIndex.objectCompare (inOperand.mAttribute_mCurrentStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCurrentStateName.objectCompare (inOperand.mAttribute_mCurrentStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFinalStateIndex.objectCompare (inOperand.mAttribute_mFinalStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFinalStateName.objectCompare (inOperand.mAttribute_mFinalStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBehaviourMessageKind.objectCompare (inOperand.mAttribute_mBehaviourMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBehaviourMessage.objectCompare (inOperand.mAttribute_mBehaviourMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_branchBehaviourSortedListForMapOverride_2D_element::isValid (void) const {
  return mAttribute_mStartStateIndex.isValid () && mAttribute_mStartStateName.isValid () && mAttribute_mCurrentStateIndex.isValid () && mAttribute_mCurrentStateName.isValid () && mAttribute_mFinalStateIndex.isValid () && mAttribute_mFinalStateName.isValid () && mAttribute_mBehaviourMessageKind.isValid () && mAttribute_mBehaviourMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride_2D_element::drop (void) {
  mAttribute_mStartStateIndex.drop () ;
  mAttribute_mStartStateName.drop () ;
  mAttribute_mCurrentStateIndex.drop () ;
  mAttribute_mCurrentStateName.drop () ;
  mAttribute_mFinalStateIndex.drop () ;
  mAttribute_mFinalStateName.drop () ;
  mAttribute_mBehaviourMessageKind.drop () ;
  mAttribute_mBehaviourMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @branchBehaviourSortedListForMapOverride-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStartStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStartStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCurrentStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCurrentStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFinalStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFinalStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBehaviourMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBehaviourMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mStartStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mStartStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mCurrentStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCurrentStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mCurrentStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCurrentStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mFinalStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFinalStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mFinalStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFinalStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mBehaviourMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBehaviourMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::reader_mBehaviourMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBehaviourMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @branchBehaviourSortedListForMapOverride-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride_2D_element ("branchBehaviourSortedListForMapOverride-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchBehaviourSortedListForMapOverride_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchBehaviourSortedListForMapOverride_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchBehaviourSortedListForMapOverride_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element GALGAS_branchBehaviourSortedListForMapOverride_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride_2D_element result ;
  const GALGAS_branchBehaviourSortedListForMapOverride_2D_element * p = (const GALGAS_branchBehaviourSortedListForMapOverride_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchBehaviourSortedListForMapOverride_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchBehaviourSortedListForMapOverride-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

