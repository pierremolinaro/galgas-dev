#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-13.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualNewVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputOptionalActualTypeName.objectCompare (p->mAttribute_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualNewVariableParameterAST::objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewVariableParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewVariableParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                      const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                      const GALGAS_lstring & inAttribute_mInputActualParameterName
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mInputOptionalActualTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputOptionalActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualNewVariableParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mAttribute_mInputActualParameterName (in_mInputActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualNewVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

void cPtr_inputActualNewVariableParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewVariableParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualNewVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewVariableParameterAST (mAttribute_mActualSelector, mAttribute_mInputOptionalActualTypeName, mAttribute_mInputActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewVariableParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ("inputActualNewVariableParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualNewVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualNewVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewVariableParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  const GALGAS_inputActualNewVariableParameterAST * p = (const GALGAS_inputActualNewVariableParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualNewConstantParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputOptionalActualTypeName.objectCompare (p->mAttribute_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMarkedAsUnused.objectCompare (p->mAttribute_mMarkedAsUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualNewConstantParameterAST::objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewConstantParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewConstantParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                      const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                      const GALGAS_lstring & inAttribute_mInputActualParameterName,
                                                                                                      const GALGAS_bool & inAttribute_mMarkedAsUnused
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid () && inAttribute_mMarkedAsUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewConstantParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName, inAttribute_mMarkedAsUnused COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mInputOptionalActualTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputOptionalActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_inputActualNewConstantParameterAST::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mMarkedAsUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_inputActualNewConstantParameterAST::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMarkedAsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualNewConstantParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName,
                                                                                  const GALGAS_bool & in_mMarkedAsUnused
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mAttribute_mInputActualParameterName (in_mInputActualParameterName),
mAttribute_mMarkedAsUnused (in_mMarkedAsUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualNewConstantParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

void cPtr_inputActualNewConstantParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewConstantParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualNewConstantParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewConstantParameterAST (mAttribute_mActualSelector, mAttribute_mInputOptionalActualTypeName, mAttribute_mInputActualParameterName, mAttribute_mMarkedAsUnused COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewConstantParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ("inputActualNewConstantParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualNewConstantParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualNewConstantParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewConstantParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  const GALGAS_inputActualNewConstantParameterAST * p = (const GALGAS_inputActualNewConstantParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewConstantParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputSingleJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputSingleJokerActualParameterAST::objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputSingleJokerActualParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputSingleJokerActualParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputSingleJokerActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputSingleJokerActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputSingleJokerActualParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputSingleJokerActualParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputSingleJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mAttribute_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputSingleJokerActualParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  const GALGAS_inputSingleJokerActualParameterAST * p = (const GALGAS_inputSingleJokerActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputSingleJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterVariable) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterVariable::objectCompare (const GALGAS_inputParameterVariable & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterVariable::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterVariable (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @inputParameterVariable class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@inputParameterVariable:" ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @inputParameterVariable type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                               & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  const GALGAS_inputParameterVariable * p = (const GALGAS_inputParameterVariable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterDeclaredVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterDeclaredVariable::objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterDeclaredVariable::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredVariable (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredVariable::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @inputParameterDeclaredVariable class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@inputParameterDeclaredVariable:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterDeclaredVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @inputParameterDeclaredVariable type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                       & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  const GALGAS_inputParameterDeclaredVariable * p = (const GALGAS_inputParameterDeclaredVariable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterDeclaredVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterDeclaredConstant::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterDeclaredConstant::objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterDeclaredConstant::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredConstant (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredConstant::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredConstant::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @inputParameterDeclaredConstant class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@inputParameterDeclaredConstant:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterDeclaredConstant::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @inputParameterDeclaredConstant type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                       & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  const GALGAS_inputParameterDeclaredConstant * p = (const GALGAS_inputParameterDeclaredConstant *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterDeclaredConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_externRoutineDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_externRoutineDeclarationAST::objectCompare (const GALGAS_externRoutineDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_externRoutineDeclarationAST::GALGAS_externRoutineDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST::GALGAS_externRoutineDeclarationAST (const cPtr_externRoutineDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                        const GALGAS_bool & inAttribute_mIsInternal,
                                                                                        const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                        const GALGAS_formalParameterListAST & inAttribute_mFormalArgumentList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externRoutineDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsInternal, inAttribute_mRoutineName, inAttribute_mFormalArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_externRoutineDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_externRoutineDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externRoutineDeclarationAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_externRoutineDeclarationAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externRoutineDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mAttribute_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_externRoutineDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @externRoutineDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_externRoutineDeclarationAST::cPtr_externRoutineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_bool & in_mIsInternal,
                                                                    const GALGAS_lstring & in_mRoutineName,
                                                                    const GALGAS_formalParameterListAST & in_mFormalArgumentList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mIsInternal (in_mIsInternal),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mFormalArgumentList (in_mFormalArgumentList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_externRoutineDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;
}

void cPtr_externRoutineDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@externRoutineDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_externRoutineDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externRoutineDeclarationAST (mAttribute_mIsPredefined, mAttribute_mIsInternal, mAttribute_mRoutineName, mAttribute_mFormalArgumentList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @externRoutineDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineDeclarationAST ("externRoutineDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externRoutineDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externRoutineDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineDeclarationAST result ;
  const GALGAS_externRoutineDeclarationAST * p = (const GALGAS_externRoutineDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_procDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procDeclarationAST * p = (const cPtr_procDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineInstructionList.objectCompare (p->mAttribute_mRoutineInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfRoutineInstructionList.objectCompare (p->mAttribute_mEndOfRoutineInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procDeclarationAST::objectCompare (const GALGAS_procDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (void) :
GALGAS_externRoutineDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GALGAS_externRoutineDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_bool & inAttribute_mIsInternal,
                                                                      const GALGAS_lstring & inAttribute_mRoutineName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mFormalArgumentList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mRoutineInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfRoutineInstructionList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mRoutineInstructionList.isValid () && inAttribute_mEndOfRoutineInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsInternal, inAttribute_mRoutineName, inAttribute_mFormalArgumentList, inAttribute_mRoutineInstructionList, inAttribute_mEndOfRoutineInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_procDeclarationAST::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procDeclarationAST * p = (const cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    result = p->mAttribute_mRoutineInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_procDeclarationAST::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_procDeclarationAST::getter_mEndOfRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_procDeclarationAST * p = (const cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    result = p->mAttribute_mEndOfRoutineInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_procDeclarationAST::getter_mEndOfRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @procDeclarationAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_bool & in_mIsInternal,
                                                  const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                  const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                  const GALGAS_location & in_mEndOfRoutineInstructionList
                                                  COMMA_LOCATION_ARGS) :
cPtr_externRoutineDeclarationAST (in_mIsPredefined, in_mIsInternal, in_mRoutineName, in_mFormalArgumentList COMMA_THERE),
mAttribute_mRoutineInstructionList (in_mRoutineInstructionList),
mAttribute_mEndOfRoutineInstructionList (in_mEndOfRoutineInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

void cPtr_procDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@procDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mAttribute_mIsPredefined, mAttribute_mIsInternal, mAttribute_mRoutineName, mAttribute_mFormalArgumentList, mAttribute_mRoutineInstructionList, mAttribute_mEndOfRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @procDeclarationAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                           & kTypeDescriptor_GALGAS_externRoutineDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST result ;
  const GALGAS_procDeclarationAST * p = (const GALGAS_procDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_externFunctionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultTypeName.objectCompare (p->mAttribute_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableName.objectCompare (p->mAttribute_mResultVariableName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_externFunctionDeclarationAST::objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                          const GALGAS_formalInputParameterListAST & inAttribute_mFormalArgumentList,
                                                                                          const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mResultVariableName
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_mResultVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externFunctionDeclarationAST (inAttribute_mIsPredefined, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mResultTypeName, inAttribute_mResultVariableName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_externFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_externFunctionDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    result = p->mAttribute_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cPtr_externFunctionDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    result = p->mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_externFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    result = p->mAttribute_mResultVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_externFunctionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @externFunctionDeclarationAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mFunctionName,
                                                                      const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GALGAS_lstring & in_mResultTypeName,
                                                                      const GALGAS_lstring & in_mResultVariableName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mFormalArgumentList (in_mFormalArgumentList),
mAttribute_mResultTypeName (in_mResultTypeName),
mAttribute_mResultVariableName (in_mResultVariableName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

void cPtr_externFunctionDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@externFunctionDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_externFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mAttribute_mIsPredefined, mAttribute_mFunctionName, mAttribute_mFormalArgumentList, mAttribute_mResultTypeName, mAttribute_mResultVariableName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externFunctionDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST result ;
  const GALGAS_externFunctionDeclarationAST * p = (const GALGAS_externFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultTypeName.objectCompare (p->mAttribute_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableName.objectCompare (p->mAttribute_mResultVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfFunctionInstructionList.objectCompare (p->mAttribute_mEndOfFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsUsefull.objectCompare (p->mAttribute_mIsUsefull) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionDeclarationAST::objectCompare (const GALGAS_functionDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (void) :
GALGAS_externFunctionDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GALGAS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_lstring & inAttribute_mFunctionName,
                                                                              const GALGAS_formalInputParameterListAST & inAttribute_mFormalArgumentList,
                                                                              const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                              const GALGAS_lstring & inAttribute_mResultVariableName,
                                                                              const GALGAS_semanticInstructionListAST & inAttribute_mFunctionInstructionList,
                                                                              const GALGAS_location & inAttribute_mEndOfFunctionInstructionList,
                                                                              const GALGAS_bool & inAttribute_mIsInternal,
                                                                              const GALGAS_bool & inAttribute_mIsUsefull
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_mResultVariableName.isValid () && inAttribute_mFunctionInstructionList.isValid () && inAttribute_mEndOfFunctionInstructionList.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mIsUsefull.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionDeclarationAST (inAttribute_mIsPredefined, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mResultTypeName, inAttribute_mResultVariableName, inAttribute_mFunctionInstructionList, inAttribute_mEndOfFunctionInstructionList, inAttribute_mIsInternal, inAttribute_mIsUsefull COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_functionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_functionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mAttribute_mEndOfFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_functionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_functionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mAttribute_mIsUsefull ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_functionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUsefull ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @functionDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GALGAS_lstring & in_mResultTypeName,
                                                          const GALGAS_lstring & in_mResultVariableName,
                                                          const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                          const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                          const GALGAS_bool & in_mIsInternal,
                                                          const GALGAS_bool & in_mIsUsefull
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_mIsPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_mResultVariableName COMMA_THERE),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList),
mAttribute_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mAttribute_mIsInternal (in_mIsInternal),
mAttribute_mIsUsefull (in_mIsUsefull) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@functionDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mAttribute_mIsPredefined, mAttribute_mFunctionName, mAttribute_mFormalArgumentList, mAttribute_mResultTypeName, mAttribute_mResultVariableName, mAttribute_mFunctionInstructionList, mAttribute_mEndOfFunctionInstructionList, mAttribute_mIsInternal, mAttribute_mIsUsefull COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @functionDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                               & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  const GALGAS_functionDeclarationAST * p = (const GALGAS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_onceFunctionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultTypeName.objectCompare (p->mAttribute_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableName.objectCompare (p->mAttribute_mResultVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfFunctionInstructionList.objectCompare (p->mAttribute_mEndOfFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsUsefull.objectCompare (p->mAttribute_mIsUsefull) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_onceFunctionDeclarationAST::objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                             GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                      const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mResultVariableName,
                                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mFunctionInstructionList,
                                                                                      const GALGAS_location & inAttribute_mEndOfFunctionInstructionList,
                                                                                      const GALGAS_bool & inAttribute_mIsInternal,
                                                                                      const GALGAS_bool & inAttribute_mIsUsefull
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_mResultVariableName.isValid () && inAttribute_mFunctionInstructionList.isValid () && inAttribute_mEndOfFunctionInstructionList.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mIsUsefull.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationAST (inAttribute_mIsPredefined, inAttribute_mFunctionName, inAttribute_mResultTypeName, inAttribute_mResultVariableName, inAttribute_mFunctionInstructionList, inAttribute_mEndOfFunctionInstructionList, inAttribute_mIsInternal, inAttribute_mIsUsefull COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_onceFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_onceFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mResultVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_onceFunctionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_onceFunctionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_onceFunctionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_onceFunctionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mEndOfFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_onceFunctionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_onceFunctionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_onceFunctionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_onceFunctionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mIsUsefull ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_onceFunctionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUsefull ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @onceFunctionDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mFunctionName,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  const GALGAS_lstring & in_mResultVariableName,
                                                                  const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                  const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                  const GALGAS_bool & in_mIsInternal,
                                                                  const GALGAS_bool & in_mIsUsefull
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mResultTypeName (in_mResultTypeName),
mAttribute_mResultVariableName (in_mResultVariableName),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList),
mAttribute_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mAttribute_mIsInternal (in_mIsInternal),
mAttribute_mIsUsefull (in_mIsUsefull) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@onceFunctionDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_onceFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mAttribute_mIsPredefined, mAttribute_mFunctionName, mAttribute_mResultTypeName, mAttribute_mResultVariableName, mAttribute_mFunctionInstructionList, mAttribute_mEndOfFunctionInstructionList, mAttribute_mIsInternal, mAttribute_mIsUsefull COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @onceFunctionDeclarationAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  const GALGAS_onceFunctionDeclarationAST * p = (const GALGAS_onceFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_onceFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFileAbsolutePath.objectCompare (p->mAttribute_mSourceFileAbsolutePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperName.objectCompare (p->mAttribute_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperPath.objectCompare (p->mAttribute_mFilewrapperPath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTextFileExtensionList.objectCompare (p->mAttribute_mFilewrapperTextFileExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperBinaryFileExtensionList.objectCompare (p->mAttribute_mFilewrapperBinaryFileExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplateList.objectCompare (p->mAttribute_mFilewrapperTemplateList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_filewrapperDeclarationAST::objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_string::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE),
                                                            GALGAS_filewrapperTemplateListAST::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_bool & inAttribute_mIsInternal,
                                                                                    const GALGAS_string & inAttribute_mSourceFileAbsolutePath,
                                                                                    const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                    const GALGAS_lstring & inAttribute_mFilewrapperPath,
                                                                                    const GALGAS_lstringlist & inAttribute_mFilewrapperTextFileExtensionList,
                                                                                    const GALGAS_lstringlist & inAttribute_mFilewrapperBinaryFileExtensionList,
                                                                                    const GALGAS_filewrapperTemplateListAST & inAttribute_mFilewrapperTemplateList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mSourceFileAbsolutePath.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid () && inAttribute_mFilewrapperTextFileExtensionList.isValid () && inAttribute_mFilewrapperBinaryFileExtensionList.isValid () && inAttribute_mFilewrapperTemplateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsInternal, inAttribute_mSourceFileAbsolutePath, inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath, inAttribute_mFilewrapperTextFileExtensionList, inAttribute_mFilewrapperBinaryFileExtensionList, inAttribute_mFilewrapperTemplateList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_filewrapperDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_filewrapperDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperDeclarationAST::getter_mSourceFileAbsolutePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mSourceFileAbsolutePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_filewrapperDeclarationAST::getter_mSourceFileAbsolutePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileAbsolutePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperDeclarationAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperDeclarationAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperDeclarationAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperDeclarationAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::getter_mFilewrapperTextFileExtensionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperTextFileExtensionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_filewrapperDeclarationAST::getter_mFilewrapperTextFileExtensionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTextFileExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::getter_mFilewrapperBinaryFileExtensionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperBinaryFileExtensionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_filewrapperDeclarationAST::getter_mFilewrapperBinaryFileExtensionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperBinaryFileExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperDeclarationAST::getter_mFilewrapperTemplateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperTemplateList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST cPtr_filewrapperDeclarationAST::getter_mFilewrapperTemplateList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @filewrapperDeclarationAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_bool & in_mIsInternal,
                                                                const GALGAS_string & in_mSourceFileAbsolutePath,
                                                                const GALGAS_lstring & in_mFilewrapperName,
                                                                const GALGAS_lstring & in_mFilewrapperPath,
                                                                const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mIsInternal (in_mIsInternal),
mAttribute_mSourceFileAbsolutePath (in_mSourceFileAbsolutePath),
mAttribute_mFilewrapperName (in_mFilewrapperName),
mAttribute_mFilewrapperPath (in_mFilewrapperPath),
mAttribute_mFilewrapperTextFileExtensionList (in_mFilewrapperTextFileExtensionList),
mAttribute_mFilewrapperBinaryFileExtensionList (in_mFilewrapperBinaryFileExtensionList),
mAttribute_mFilewrapperTemplateList (in_mFilewrapperTemplateList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@filewrapperDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mAttribute_mIsPredefined, mAttribute_mIsInternal, mAttribute_mSourceFileAbsolutePath, mAttribute_mFilewrapperName, mAttribute_mFilewrapperPath, mAttribute_mFilewrapperTextFileExtensionList, mAttribute_mFilewrapperBinaryFileExtensionList, mAttribute_mFilewrapperTemplateList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @filewrapperDeclarationAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  const GALGAS_filewrapperDeclarationAST * p = (const GALGAS_filewrapperDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_collectionValueAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_collectionValueAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementList.objectCompare (p->mAttribute_mElementList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfCollectionValue.objectCompare (p->mAttribute_mEndOfCollectionValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_collectionValueAST::objectCompare (const GALGAS_collectionValueAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_collectionValueAST::GALGAS_collectionValueAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueAST GALGAS_collectionValueAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_collectionValueAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_collectionValueElementList::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueAST::GALGAS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_collectionValueAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueAST GALGAS_collectionValueAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_collectionValueElementList & inAttribute_mElementList,
                                                                      const GALGAS_location & inAttribute_mEndOfCollectionValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mElementList.isValid () && inAttribute_mEndOfCollectionValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_collectionValueAST (inAttribute_mTypeName, inAttribute_mElementList, inAttribute_mEndOfCollectionValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_collectionValueAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_collectionValueAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueAST::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result ;
  if (NULL != mObjectPtr) {
    const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    result = p->mAttribute_mElementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList cPtr_collectionValueAST::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_collectionValueAST::getter_mEndOfCollectionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    result = p->mAttribute_mEndOfCollectionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_collectionValueAST::getter_mEndOfCollectionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfCollectionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @collectionValueAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_collectionValueAST::cPtr_collectionValueAST (const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_collectionValueElementList & in_mElementList,
                                                  const GALGAS_location & in_mEndOfCollectionValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mElementList (in_mElementList),
mAttribute_mEndOfCollectionValue (in_mEndOfCollectionValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_collectionValueAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

void cPtr_collectionValueAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@collectionValueAST:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfCollectionValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_collectionValueAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_collectionValueAST (mAttribute_mTypeName, mAttribute_mElementList, mAttribute_mEndOfCollectionValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @collectionValueAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueAST ("collectionValueAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_collectionValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_collectionValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueAST GALGAS_collectionValueAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueAST result ;
  const GALGAS_collectionValueAST * p = (const GALGAS_collectionValueAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_galgas_33_SyntaxComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponentName.objectCompare (p->mAttribute_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (p->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalDeclarationList.objectCompare (p->mAttribute_mNonterminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRuleList.objectCompare (p->mAttribute_mRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (p->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_galgas_33_SyntaxComponentAST::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                                               GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mSyntaxComponentName,
                                                                                          const GALGAS_lstring & inAttribute_mLexiqueName,
                                                                                          const GALGAS_nonterminalDeclarationListAST & inAttribute_mNonterminalDeclarationList,
                                                                                          const GALGAS_syntaxRuleListAST & inAttribute_mRuleList,
                                                                                          const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonterminalDeclarationList.isValid () && inAttribute_mRuleList.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_galgas_33_SyntaxComponentAST (inAttribute_mIsPredefined, inAttribute_mSyntaxComponentName, inAttribute_mLexiqueName, inAttribute_mNonterminalDeclarationList, inAttribute_mRuleList, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mSyntaxComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_SyntaxComponentAST::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_SyntaxComponentAST::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentAST::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mNonterminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST cPtr_galgas_33_SyntaxComponentAST::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentAST::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mRuleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST cPtr_galgas_33_SyntaxComponentAST::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_SyntaxComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_galgas_33_SyntaxComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @galgas3SyntaxComponentAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mSyntaxComponentName,
                                                                      const GALGAS_lstring & in_mLexiqueName,
                                                                      const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                      const GALGAS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mSyntaxComponentName (in_mSyntaxComponentName),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mAttribute_mRuleList (in_mRuleList),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@galgas3SyntaxComponentAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRuleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_galgas_33_SyntaxComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mAttribute_mIsPredefined, mAttribute_mSyntaxComponentName, mAttribute_mLexiqueName, mAttribute_mNonterminalDeclarationList, mAttribute_mRuleList, mAttribute_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @galgas3SyntaxComponentAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  const GALGAS_galgas_33_SyntaxComponentAST * p = (const GALGAS_galgas_33_SyntaxComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_galgas_33_GrammarComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasIndexing.objectCompare (p->mAttribute_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarComponentName.objectCompare (p->mAttribute_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarClass.objectCompare (p->mAttribute_mGrammarClass) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponents.objectCompare (p->mAttribute_mSyntaxComponents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartSymbolName.objectCompare (p->mAttribute_mStartSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartSymbolLabelList.objectCompare (p->mAttribute_mStartSymbolLabelList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUnusedNonterminalList.objectCompare (p->mAttribute_mUnusedNonterminalList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (p->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_galgas_33_GrammarComponentAST::objectCompare (const GALGAS_galgas_33_GrammarComponentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_galgas_33_GrammarComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lbool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_nonTerminalLabelListAST::constructor_emptyList (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_bool::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_lbool & inAttribute_mHasIndexing,
                                                                                            const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                            const GALGAS_lstring & inAttribute_mGrammarClass,
                                                                                            const GALGAS_lstringlist & inAttribute_mSyntaxComponents,
                                                                                            const GALGAS_lstring & inAttribute_mStartSymbolName,
                                                                                            const GALGAS_nonTerminalLabelListAST & inAttribute_mStartSymbolLabelList,
                                                                                            const GALGAS_lstringlist & inAttribute_mUnusedNonterminalList,
                                                                                            const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mHasIndexing.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mGrammarClass.isValid () && inAttribute_mSyntaxComponents.isValid () && inAttribute_mStartSymbolName.isValid () && inAttribute_mStartSymbolLabelList.isValid () && inAttribute_mUnusedNonterminalList.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_galgas_33_GrammarComponentAST (inAttribute_mIsPredefined, inAttribute_mHasIndexing, inAttribute_mGrammarComponentName, inAttribute_mGrammarClass, inAttribute_mSyntaxComponents, inAttribute_mStartSymbolName, inAttribute_mStartSymbolLabelList, inAttribute_mUnusedNonterminalList, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_galgas_33_GrammarComponentAST::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mHasIndexing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool cPtr_galgas_33_GrammarComponentAST::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mGrammarComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::getter_mGrammarClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mGrammarClass ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::getter_mGrammarClass (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarClass ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mSyntaxComponents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_galgas_33_GrammarComponentAST::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mStartSymbolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentAST::getter_mStartSymbolLabelList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mStartSymbolLabelList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST cPtr_galgas_33_GrammarComponentAST::getter_mStartSymbolLabelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolLabelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::getter_mUnusedNonterminalList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mUnusedNonterminalList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_galgas_33_GrammarComponentAST::getter_mUnusedNonterminalList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedNonterminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_GrammarComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_galgas_33_GrammarComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @galgas3GrammarComponentAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lbool & in_mHasIndexing,
                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                        const GALGAS_lstring & in_mGrammarClass,
                                                                        const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                        const GALGAS_lstring & in_mStartSymbolName,
                                                                        const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GALGAS_bool & in_mHasTranslateFeature
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mHasIndexing (in_mHasIndexing),
mAttribute_mGrammarComponentName (in_mGrammarComponentName),
mAttribute_mGrammarClass (in_mGrammarClass),
mAttribute_mSyntaxComponents (in_mSyntaxComponents),
mAttribute_mStartSymbolName (in_mStartSymbolName),
mAttribute_mStartSymbolLabelList (in_mStartSymbolLabelList),
mAttribute_mUnusedNonterminalList (in_mUnusedNonterminalList),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

void cPtr_galgas_33_GrammarComponentAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@galgas3GrammarComponentAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_galgas_33_GrammarComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mAttribute_mIsPredefined, mAttribute_mHasIndexing, mAttribute_mGrammarComponentName, mAttribute_mGrammarClass, mAttribute_mSyntaxComponents, mAttribute_mStartSymbolName, mAttribute_mStartSymbolLabelList, mAttribute_mUnusedNonterminalList, mAttribute_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3GrammarComponentAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  const GALGAS_galgas_33_GrammarComponentAST * p = (const GALGAS_galgas_33_GrammarComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GrammarComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension Getter '@unifiedTypeMap-proxy baseType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy extensionGetter_baseType (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result_outBaseType ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 352)).isValid ()) {
    uint32_t variant_19114 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 352)).uintValue () ;
    bool loop_19114 = true ;
    while (loop_19114) {
      loop_19114 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 352)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 352)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 352)).isValid () ;
      if (loop_19114) {
        loop_19114 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 352)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 352)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 352)).boolValue () ;
      }
      if (loop_19114 && (0 == variant_19114)) {
        loop_19114 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticsTypes.galgas", 352)) ;
      }
      if (loop_19114) {
        variant_19114 -- ;
        result_outBaseType = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 353)) ;
      }
    }
  }
//---
  return result_outBaseType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@unifiedTypeMap-proxy addHeaderFileName'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_addHeaderFileName (const GALGAS_unifiedTypeMap_2D_proxy inObject,
                                        GALGAS_stringset & ioArgument_ioInclusions,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
  const enumGalgasBool test_2 = temp_0.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 360)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 360)).operator_and (GALGAS_bool (kIsNotEqual, temp_1.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 360)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticsTypes.galgas", 360)))) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 360)).boolEnum () ;
  if (kBoolTrue == test_2) {
    const GALGAS_unifiedTypeMap_2D_proxy temp_3 = inObject ;
    ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 361))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 361)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@unifiedTypeMap-proxy addHeaderFileName1'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_addHeaderFileName_31_ (const GALGAS_unifiedTypeMap_2D_proxy inObject,
                                            GALGAS_stringset & ioArgument_ioInclusions,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 368)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 368)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
    switch (temp_2.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 369)).enumValue ()) {
    case GALGAS_headerKind::kNotBuilt:
      break ;
    case GALGAS_headerKind::kEnum_noHeader:
      {
      }
      break ;
    case GALGAS_headerKind::kEnum_oneHeader:
      {
        const GALGAS_unifiedTypeMap_2D_proxy temp_3 = inObject ;
        ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 372))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 372)) ;
      }
      break ;
    case GALGAS_headerKind::kEnum_twoHeaders:
      {
        const GALGAS_unifiedTypeMap_2D_proxy temp_4 = inObject ;
        ioArgument_ioInclusions.addAssign_operation (temp_4.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 374)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 374))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 374)) ;
      }
      break ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_actualParameterForGeneration::objectCompare (const GALGAS_actualParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_actualParameterForGeneration::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_actualParameterForGeneration * p = (const cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    result = p->mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_actualParameterForGeneration::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @actualParameterForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType
                                                                      COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mFormalArgumentType (in_mFormalArgumentType) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @actualParameterForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterForGeneration ("actualParameterForGeneration",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration GALGAS_actualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterForGeneration result ;
  const GALGAS_actualParameterForGeneration * p = (const GALGAS_actualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension method '@actualParameterForGeneration generateActualParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_actualParameterForGeneration_generateActualParameter> gExtensionMethodTable_actualParameterForGeneration_generateActualParameter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateActualParameter (const int32_t inClassIndex,
                                                   extensionMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_actualParameterForGeneration_generateActualParameter (void) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_actualParameterForGeneration_generateActualParameter (NULL,
                                                                                 freeExtensionMethod_actualParameterForGeneration_generateActualParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                  GALGAS_stringset & io_ioInclusionSet,
                                                  GALGAS_uint & io_ioTemporaryVariableIndex,
                                                  GALGAS_string & io_ioImplementation,
                                                  GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GALGAS_stringlist & io_ioOutputVariableList,
                                                  GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GALGAS_string & out_outCppName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppName.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_actualParameterForGeneration_generateActualParameter f = NULL ;
    if (classIndex < gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
      f = gExtensionMethodTable_actualParameterForGeneration_generateActualParameter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
          f = gExtensionMethodTable_actualParameterForGeneration_generateActualParameter (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioImplementation, io_ioJokerParametersToReleaseList, io_ioOutputVariableList, io_ioUnusedVariableCppNameSet, out_outCppName, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputInputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentType.objectCompare (p->mAttribute_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutputInputVariableCppName.objectCompare (p->mAttribute_mOutputInputVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeList.objectCompare (p->mAttribute_mTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputInputActualParameterForGeneration::objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                          GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                          GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
                                                                                                                const GALGAS_string & inAttribute_mOutputInputVariableCppName,
                                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                                const GALGAS_unifiedTypeMapProxyList & inAttribute_mTypeList
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputInputVariableCppName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mTypeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputInputVariableCppName, inAttribute_mStructAttributeList, inAttribute_mTypeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_outputInputActualParameterForGeneration::getter_mOutputInputVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mAttribute_mOutputInputVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_outputInputActualParameterForGeneration::getter_mOutputInputVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutputInputVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_outputInputActualParameterForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_outputInputActualParameterForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_outputInputActualParameterForGeneration::getter_mTypeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mAttribute_mTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cPtr_outputInputActualParameterForGeneration::getter_mTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @outputInputActualParameterForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                            const GALGAS_string & in_mOutputInputVariableCppName,
                                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                            const GALGAS_unifiedTypeMapProxyList & in_mTypeList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mAttribute_mOutputInputVariableCppName (in_mOutputInputVariableCppName),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mTypeList (in_mTypeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputInputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

void cPtr_outputInputActualParameterForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@outputInputActualParameterForGeneration:" ;
  mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutputInputVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputInputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputActualParameterForGeneration (mAttribute_mFormalArgumentType, mAttribute_mOutputInputVariableCppName, mAttribute_mStructAttributeList, mAttribute_mTypeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @outputInputActualParameterForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ("outputInputActualParameterForGeneration",
                                                                & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputInputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration result ;
  const GALGAS_outputInputActualParameterForGeneration * p = (const GALGAS_outputInputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualParameterForGeneration * p = (const cPtr_inputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentType.objectCompare (p->mAttribute_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualCppName.objectCompare (p->mAttribute_mInputActualCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualParameterForGeneration::objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
                                                                                                    const GALGAS_string & inAttribute_mInputActualCppName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mInputActualCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mInputActualCppName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_inputActualParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualParameterForGeneration * p = (const cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    result = p->mAttribute_mInputActualCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_inputActualParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualParameterForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                const GALGAS_string & in_mInputActualCppName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mAttribute_mInputActualCppName (in_mInputActualCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

void cPtr_inputActualParameterForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@inputActualParameterForGeneration:" ;
  mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualParameterForGeneration (mAttribute_mFormalArgumentType, mAttribute_mInputActualCppName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputActualParameterForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualParameterForGeneration ("inputActualParameterForGeneration",
                                                          & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  const GALGAS_inputActualParameterForGeneration * p = (const GALGAS_inputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputJokerParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputJokerParameterForGeneration * p = (const cPtr_inputJokerParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentType.objectCompare (p->mAttribute_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualCppName.objectCompare (p->mAttribute_mInputActualCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputJokerParameterForGeneration::objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputJokerParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
                                                                                                  const GALGAS_string & inAttribute_mInputActualCppName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mInputActualCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputJokerParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mInputActualCppName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_inputJokerParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputJokerParameterForGeneration * p = (const cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    result = p->mAttribute_mInputActualCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_inputJokerParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @inputJokerParameterForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                              const GALGAS_string & in_mInputActualCppName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mAttribute_mInputActualCppName (in_mInputActualCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputJokerParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

void cPtr_inputJokerParameterForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@inputJokerParameterForGeneration:" ;
  mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputJokerParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputJokerParameterForGeneration (mAttribute_mFormalArgumentType, mAttribute_mInputActualCppName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputJokerParameterForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ("inputJokerParameterForGeneration",
                                                         & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputJokerParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputJokerParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerParameterForGeneration result ;
  const GALGAS_inputJokerParameterForGeneration * p = (const GALGAS_inputJokerParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputJokerParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexiqueDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (p->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderContents.objectCompare (p->mAttribute_mHeaderContents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppContents.objectCompare (p->mAttribute_mCppContents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCocoaHeader.objectCompare (p->mAttribute_mCocoaHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCocoaImplementation.objectCompare (p->mAttribute_mCocoaImplementation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexiqueDeclarationForGeneration::objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                const GALGAS_string & inAttribute_mLexiqueName,
                                                                                                const GALGAS_string & inAttribute_mHeaderContents,
                                                                                                const GALGAS_string & inAttribute_mCppContents,
                                                                                                const GALGAS_string & inAttribute_mCocoaHeader,
                                                                                                const GALGAS_string & inAttribute_mCocoaImplementation
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mHeaderContents.isValid () && inAttribute_mCppContents.isValid () && inAttribute_mCocoaHeader.isValid () && inAttribute_mCocoaImplementation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mLexiqueName, inAttribute_mHeaderContents, inAttribute_mCppContents, inAttribute_mCocoaHeader, inAttribute_mCocoaImplementation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mHeaderContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mHeaderContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mHeaderContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mCppContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mCppContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mCppContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mCocoaHeader (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mCocoaHeader ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mCocoaHeader (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCocoaHeader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mCocoaImplementation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mCocoaImplementation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mCocoaImplementation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCocoaImplementation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @lexiqueDeclarationForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                            const GALGAS_string & in_mImplementationCppFileName,
                                                                            const GALGAS_string & in_mLexiqueName,
                                                                            const GALGAS_string & in_mHeaderContents,
                                                                            const GALGAS_string & in_mCppContents,
                                                                            const GALGAS_string & in_mCocoaHeader,
                                                                            const GALGAS_string & in_mCocoaImplementation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mHeaderContents (in_mHeaderContents),
mAttribute_mCppContents (in_mCppContents),
mAttribute_mCocoaHeader (in_mCocoaHeader),
mAttribute_mCocoaImplementation (in_mCocoaImplementation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexiqueDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

void cPtr_lexiqueDeclarationForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexiqueDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHeaderContents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppContents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCocoaHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mLexiqueName, mAttribute_mHeaderContents, mAttribute_mCppContents, mAttribute_mCocoaHeader, mAttribute_mCocoaImplementation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexiqueDeclarationForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ("lexiqueDeclarationForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  const GALGAS_lexiqueDeclarationForGeneration * p = (const GALGAS_lexiqueDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarName.objectCompare (p->mAttribute_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (p->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonTerminalMapForGrammarAnalysis.objectCompare (p->mAttribute_mNonTerminalMapForGrammarAnalysis) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonTerminalToAddList.objectCompare (p->mAttribute_mNonTerminalToAddList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasIndexing.objectCompare (p->mAttribute_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponents.objectCompare (p->mAttribute_mSyntaxComponents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartSymbolName.objectCompare (p->mAttribute_mStartSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (p->mAttribute_mHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppFileContents.objectCompare (p->mAttribute_mCppFileContents) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarForGeneration::objectCompare (const GALGAS_grammarForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (HERE),
                                                       GALGAS_nonTerminalToAddList::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                          const GALGAS_string & inAttribute_mGrammarName,
                                                                          const GALGAS_string & inAttribute_mLexiqueName,
                                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inAttribute_mNonTerminalMapForGrammarAnalysis,
                                                                          const GALGAS_nonTerminalToAddList & inAttribute_mNonTerminalToAddList,
                                                                          const GALGAS_bool & inAttribute_mHasIndexing,
                                                                          const GALGAS_lstringlist & inAttribute_mSyntaxComponents,
                                                                          const GALGAS_string & inAttribute_mStartSymbolName,
                                                                          const GALGAS_bool & inAttribute_mHasTranslateFeature,
                                                                          const GALGAS_string & inAttribute_mCppFileContents
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonTerminalMapForGrammarAnalysis.isValid () && inAttribute_mNonTerminalToAddList.isValid () && inAttribute_mHasIndexing.isValid () && inAttribute_mSyntaxComponents.isValid () && inAttribute_mStartSymbolName.isValid () && inAttribute_mHasTranslateFeature.isValid () && inAttribute_mCppFileContents.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mGrammarName, inAttribute_mLexiqueName, inAttribute_mNonTerminalMapForGrammarAnalysis, inAttribute_mNonTerminalToAddList, inAttribute_mHasIndexing, inAttribute_mSyntaxComponents, inAttribute_mStartSymbolName, inAttribute_mHasTranslateFeature, inAttribute_mCppFileContents COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mGrammarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_grammarForGeneration::getter_mNonTerminalMapForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mNonTerminalMapForGrammarAnalysis ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis cPtr_grammarForGeneration::getter_mNonTerminalMapForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalMapForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_grammarForGeneration::getter_mNonTerminalToAddList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mNonTerminalToAddList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList cPtr_grammarForGeneration::getter_mNonTerminalToAddList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalToAddList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarForGeneration::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mHasIndexing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_grammarForGeneration::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_grammarForGeneration::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mSyntaxComponents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_grammarForGeneration::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mStartSymbolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarForGeneration::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_grammarForGeneration::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::getter_mCppFileContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mCppFileContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::getter_mCppFileContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppFileContents ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @grammarForGeneration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarForGeneration::cPtr_grammarForGeneration (const GALGAS_bool & in_mHasHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_string & in_mGrammarName,
                                                      const GALGAS_string & in_mLexiqueName,
                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                      const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                      const GALGAS_bool & in_mHasIndexing,
                                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                                      const GALGAS_string & in_mStartSymbolName,
                                                      const GALGAS_bool & in_mHasTranslateFeature,
                                                      const GALGAS_string & in_mCppFileContents
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mGrammarName (in_mGrammarName),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mNonTerminalMapForGrammarAnalysis (in_mNonTerminalMapForGrammarAnalysis),
mAttribute_mNonTerminalToAddList (in_mNonTerminalToAddList),
mAttribute_mHasIndexing (in_mHasIndexing),
mAttribute_mSyntaxComponents (in_mSyntaxComponents),
mAttribute_mStartSymbolName (in_mStartSymbolName),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature),
mAttribute_mCppFileContents (in_mCppFileContents) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@grammarForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mGrammarName, mAttribute_mLexiqueName, mAttribute_mNonTerminalMapForGrammarAnalysis, mAttribute_mNonTerminalToAddList, mAttribute_mHasIndexing, mAttribute_mSyntaxComponents, mAttribute_mStartSymbolName, mAttribute_mHasTranslateFeature, mAttribute_mCppFileContents COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @grammarForGeneration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  const GALGAS_grammarForGeneration * p = (const GALGAS_grammarForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_routinePrototypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_routinePrototypeDeclarationForGeneration * p = (const cPtr_routinePrototypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_routinePrototypeDeclarationForGeneration::objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                           GALGAS_string::constructor_default (HERE),
                                                                           GALGAS_string::constructor_default (HERE),
                                                                           GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routinePrototypeDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                                  const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                                  const GALGAS_string & inAttribute_mRoutineName,
                                                                                                                  const GALGAS_formalParameterListForGeneration & inAttribute_mFormalArgumentList
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_routinePrototypeDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mRoutineName, inAttribute_mFormalArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_routinePrototypeDeclarationForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_routinePrototypeDeclarationForGeneration * p = (const cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_routinePrototypeDeclarationForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_routinePrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_routinePrototypeDeclarationForGeneration * p = (const cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_routinePrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @routinePrototypeDeclarationForGeneration class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                              const GALGAS_string & in_mImplementationCppFileName,
                                                                                              const GALGAS_string & in_mRoutineName,
                                                                                              const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mFormalArgumentList (in_mFormalArgumentList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_routinePrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

void cPtr_routinePrototypeDeclarationForGeneration::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@routinePrototypeDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_routinePrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_routinePrototypeDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mRoutineName, mAttribute_mFormalArgumentList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @routinePrototypeDeclarationForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ("routinePrototypeDeclarationForGeneration",
                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routinePrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routinePrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routinePrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  const GALGAS_routinePrototypeDeclarationForGeneration * p = (const GALGAS_routinePrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routinePrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_routineImplementationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_routineImplementationForGeneration * p = (const cPtr_routineImplementationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGenerateStatic.objectCompare (p->mAttribute_mGenerateStatic) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineInstructionList.objectCompare (p->mAttribute_mRoutineInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_routineImplementationForGeneration::objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (void) :
GALGAS_routinePrototypeDeclarationForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_bool::constructor_default (HERE),
                                                                     GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) :
GALGAS_routinePrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineImplementationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                      const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                      const GALGAS_string & inAttribute_mRoutineName,
                                                                                                      const GALGAS_formalParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                      const GALGAS_bool & inAttribute_mGenerateStatic,
                                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_mRoutineInstructionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mGenerateStatic.isValid () && inAttribute_mRoutineInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_routineImplementationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mRoutineName, inAttribute_mFormalArgumentList, inAttribute_mGenerateStatic, inAttribute_mRoutineInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineImplementationForGeneration::getter_mGenerateStatic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineImplementationForGeneration * p = (const cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    result = p->mAttribute_mGenerateStatic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_routineImplementationForGeneration::getter_mGenerateStatic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerateStatic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_routineImplementationForGeneration::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineImplementationForGeneration * p = (const cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    result = p->mAttribute_mRoutineInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_routineImplementationForGeneration::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @routineImplementationForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                  const GALGAS_string & in_mImplementationCppFileName,
                                                                                  const GALGAS_string & in_mRoutineName,
                                                                                  const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                  const GALGAS_bool & in_mGenerateStatic,
                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (in_mHasHeader, in_mImplementationCppFileName, in_mRoutineName, in_mFormalArgumentList COMMA_THERE),
mAttribute_mGenerateStatic (in_mGenerateStatic),
mAttribute_mRoutineInstructionList (in_mRoutineInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_routineImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

void cPtr_routineImplementationForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@routineImplementationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGenerateStatic.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_routineImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_routineImplementationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mRoutineName, mAttribute_mFormalArgumentList, mAttribute_mGenerateStatic, mAttribute_mRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineImplementationForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineImplementationForGeneration ("routineImplementationForGeneration",
                                                           & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineImplementationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration result ;
  const GALGAS_routineImplementationForGeneration * p = (const GALGAS_routineImplementationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionPrototypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (p->mAttribute_mReturnType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionPrototypeDeclarationForGeneration::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                            GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                                    const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                                    const GALGAS_string & inAttribute_mFunctionName,
                                                                                                                    const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPrototypeDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionPrototypeDeclarationForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_functionPrototypeDeclarationForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_functionPrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_functionPrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionPrototypeDeclarationForGeneration::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_functionPrototypeDeclarationForGeneration::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @functionPrototypeDeclarationForGeneration class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                const GALGAS_string & in_mImplementationCppFileName,
                                                                                                const GALGAS_string & in_mFunctionName,
                                                                                                const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mFormalArgumentList (in_mFormalArgumentList),
mAttribute_mReturnType (in_mReturnType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

void cPtr_functionPrototypeDeclarationForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@functionPrototypeDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReturnType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionPrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFunctionName, mAttribute_mFormalArgumentList, mAttribute_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @functionPrototypeDeclarationForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  const GALGAS_functionPrototypeDeclarationForGeneration * p = (const GALGAS_functionPrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionPrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionImplementationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (p->mAttribute_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableCppName.objectCompare (p->mAttribute_mResultVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionImplementationForGeneration::objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (void) :
GALGAS_functionPrototypeDeclarationForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GALGAS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_string & inAttribute_mFunctionName,
                                                                                                        const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType,
                                                                                                        const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionImplementationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionImplementationForGeneration::getter_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    result = p->mAttribute_mResultVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_functionImplementationForGeneration::getter_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_functionImplementationForGeneration::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_functionImplementationForGeneration::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @functionImplementationForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                                                    const GALGAS_string & in_mResultVariableCppName,
                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_mHasHeader, in_mImplementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType COMMA_THERE),
mAttribute_mResultVariableCppName (in_mResultVariableCppName),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

void cPtr_functionImplementationForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@functionImplementationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFunctionName, mAttribute_mFormalArgumentList, mAttribute_mReturnType, mAttribute_mResultVariableCppName, mAttribute_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionImplementationForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                            & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  const GALGAS_functionImplementationForGeneration * p = (const GALGAS_functionImplementationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_onceFunctionDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (p->mAttribute_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableCppName.objectCompare (p->mAttribute_mResultVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_onceFunctionDeclarationForGeneration::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_string & inAttribute_mFunctionName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType,
                                                                                                          const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_onceFunctionDeclarationForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_onceFunctionDeclarationForGeneration::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_onceFunctionDeclarationForGeneration::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::getter_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mResultVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_onceFunctionDeclarationForGeneration::getter_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_onceFunctionDeclarationForGeneration::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_onceFunctionDeclarationForGeneration::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @onceFunctionDeclarationForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_string & in_mFunctionName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                                                      const GALGAS_string & in_mResultVariableCppName,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mReturnType (in_mReturnType),
mAttribute_mResultVariableCppName (in_mResultVariableCppName),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

void cPtr_onceFunctionDeclarationForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@onceFunctionDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_onceFunctionDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFunctionName, mAttribute_mReturnType, mAttribute_mResultVariableCppName, mAttribute_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @onceFunctionDeclarationForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  const GALGAS_onceFunctionDeclarationForGeneration * p = (const GALGAS_onceFunctionDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_onceFunctionDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_primitiveTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_primitiveTypeForGeneration * p = (const cPtr_primitiveTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_primitiveTypeForGeneration::objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primitiveTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_primitiveTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_primitiveTypeForGeneration::getter_mPredefinedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_primitiveTypeForGeneration * p = (const cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    result = p->mAttribute_mPredefinedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_primitiveTypeForGeneration::getter_mPredefinedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_primitiveTypeForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_predefinedTypeKindEnum result ;
  if (NULL != mObjectPtr) {
    const cPtr_primitiveTypeForGeneration * p = (const cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum cPtr_primitiveTypeForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @primitiveTypeForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mPredefinedTypeName (in_mPredefinedTypeName),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_primitiveTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

void cPtr_primitiveTypeForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@primitiveTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_primitiveTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_primitiveTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @primitiveTypeForGeneration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primitiveTypeForGeneration ("primitiveTypeForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primitiveTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primitiveTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration result ;
  const GALGAS_primitiveTypeForGeneration * p = (const GALGAS_primitiveTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primitiveTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperName.objectCompare (p->mAttribute_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperAbsolutePath.objectCompare (p->mAttribute_mFilewrapperAbsolutePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperFileMap.objectCompare (p->mAttribute_mFilewrapperFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperDirectoryMap.objectCompare (p->mAttribute_mFilewrapperDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplateListForGeneration.objectCompare (p->mAttribute_mFilewrapperTemplateListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_filewrapperDeclarationForGeneration::objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                                                      GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                                                      GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_string & inAttribute_mFilewrapperName,
                                                                                                        const GALGAS_string & inAttribute_mFilewrapperAbsolutePath,
                                                                                                        const GALGAS_wrapperFileMap & inAttribute_mFilewrapperFileMap,
                                                                                                        const GALGAS_wrapperDirectoryMap & inAttribute_mFilewrapperDirectoryMap,
                                                                                                        const GALGAS_filewrapperTemplateListForGeneration & inAttribute_mFilewrapperTemplateListForGeneration
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperAbsolutePath.isValid () && inAttribute_mFilewrapperFileMap.isValid () && inAttribute_mFilewrapperDirectoryMap.isValid () && inAttribute_mFilewrapperTemplateListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFilewrapperName, inAttribute_mFilewrapperAbsolutePath, inAttribute_mFilewrapperFileMap, inAttribute_mFilewrapperDirectoryMap, inAttribute_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_filewrapperDeclarationForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::getter_mFilewrapperAbsolutePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperAbsolutePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_filewrapperDeclarationForGeneration::getter_mFilewrapperAbsolutePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperAbsolutePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_filewrapperDeclarationForGeneration::getter_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_wrapperFileMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperFileMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap cPtr_filewrapperDeclarationForGeneration::getter_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_filewrapperDeclarationForGeneration::getter_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperDirectoryMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap cPtr_filewrapperDeclarationForGeneration::getter_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperDeclarationForGeneration::getter_mFilewrapperTemplateListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperTemplateListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration cPtr_filewrapperDeclarationForGeneration::getter_mFilewrapperTemplateListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @filewrapperDeclarationForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFilewrapperName,
                                                                                    const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mFilewrapperName (in_mFilewrapperName),
mAttribute_mFilewrapperAbsolutePath (in_mFilewrapperAbsolutePath),
mAttribute_mFilewrapperFileMap (in_mFilewrapperFileMap),
mAttribute_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mAttribute_mFilewrapperTemplateListForGeneration (in_mFilewrapperTemplateListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

void cPtr_filewrapperDeclarationForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@filewrapperDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperAbsolutePath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperTemplateListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFilewrapperName, mAttribute_mFilewrapperAbsolutePath, mAttribute_mFilewrapperFileMap, mAttribute_mFilewrapperDirectoryMap, mAttribute_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @filewrapperDeclarationForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  const GALGAS_filewrapperDeclarationForGeneration * p = (const GALGAS_filewrapperDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_programComponentForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_programComponentForGeneration * p = (const cPtr_programComponentForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInclusionSet.objectCompare (p->mAttribute_mInclusionSet) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationString.objectCompare (p->mAttribute_mImplementationString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_programComponentForGeneration::objectCompare (const GALGAS_programComponentForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_programComponentForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_stringset::constructor_emptySet (HERE),
                                                                GALGAS_string::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_programComponentForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                            const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                            const GALGAS_stringset & inAttribute_mInclusionSet,
                                                                                            const GALGAS_string & inAttribute_mImplementationString
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mInclusionSet.isValid () && inAttribute_mImplementationString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_programComponentForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mInclusionSet, inAttribute_mImplementationString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_programComponentForGeneration::getter_mInclusionSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_programComponentForGeneration * p = (const cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    result = p->mAttribute_mInclusionSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cPtr_programComponentForGeneration::getter_mInclusionSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInclusionSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_programComponentForGeneration::getter_mImplementationString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_programComponentForGeneration * p = (const cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    result = p->mAttribute_mImplementationString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_programComponentForGeneration::getter_mImplementationString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementationString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @programComponentForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                        const GALGAS_stringset & in_mInclusionSet,
                                                                        const GALGAS_string & in_mImplementationString
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mInclusionSet (in_mInclusionSet),
mAttribute_mImplementationString (in_mImplementationString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_programComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

void cPtr_programComponentForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@programComponentForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInclusionSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_programComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_programComponentForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mInclusionSet, mAttribute_mImplementationString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @programComponentForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programComponentForGeneration ("programComponentForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_programComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_programComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration result ;
  const GALGAS_programComponentForGeneration * p = (const GALGAS_programComponentForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mAttribute_mSemanticContext (),
mAttribute_mPredefinedTypes (),
mAttribute_mSelfCopyTypeProxy (),
mAttribute_mSelfObjectCppName (),
mAttribute_mSelfTypeProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext::GALGAS_analysisContext (const GALGAS_semanticContext & inOperand0,
                                                const GALGAS_predefinedTypes & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_string & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mAttribute_mSemanticContext (inOperand0),
mAttribute_mPredefinedTypes (inOperand1),
mAttribute_mSelfCopyTypeProxy (inOperand2),
mAttribute_mSelfObjectCppName (inOperand3),
mAttribute_mSelfTypeProxy (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext GALGAS_analysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_analysisContext (GALGAS_semanticContext::constructor_default (HERE),
                                 GALGAS_predefinedTypes::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_string::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext GALGAS_analysisContext::constructor_new (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_string & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_analysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_analysisContext::objectCompare (const GALGAS_analysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticContext.objectCompare (inOperand.mAttribute_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPredefinedTypes.objectCompare (inOperand.mAttribute_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfCopyTypeProxy.objectCompare (inOperand.mAttribute_mSelfCopyTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfObjectCppName.objectCompare (inOperand.mAttribute_mSelfObjectCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfTypeProxy.objectCompare (inOperand.mAttribute_mSelfTypeProxy) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_analysisContext::isValid (void) const {
  return mAttribute_mSemanticContext.isValid () && mAttribute_mPredefinedTypes.isValid () && mAttribute_mSelfCopyTypeProxy.isValid () && mAttribute_mSelfObjectCppName.isValid () && mAttribute_mSelfTypeProxy.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_analysisContext::drop (void) {
  mAttribute_mSemanticContext.drop () ;
  mAttribute_mPredefinedTypes.drop () ;
  mAttribute_mSelfCopyTypeProxy.drop () ;
  mAttribute_mSelfObjectCppName.drop () ;
  mAttribute_mSelfTypeProxy.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_analysisContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @analysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfCopyTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfObjectCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfTypeProxy.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_analysisContext::getter_mSemanticContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_analysisContext::getter_mPredefinedTypes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_analysisContext::getter_mSelfCopyTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfCopyTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_analysisContext::getter_mSelfObjectCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfObjectCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_analysisContext::getter_mSelfTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfTypeProxy ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @analysisContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analysisContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext GALGAS_analysisContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  const GALGAS_analysisContext * p = (const GALGAS_analysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT> gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (void) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (NULL,
                                                                                                                   freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
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
    extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.count ()) {
      f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.count ()) {
          f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
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

GALGAS_lstring GALGAS_assignmentInstructionAST::getter_mTargetVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mTargetVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_assignmentInstructionAST::getter_mTargetVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_assignmentInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_assignmentInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_plusEqualElementsInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_plusEqualElementsInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_plusEqualElementsInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_plusEqualElementsInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_plusEqualElementsInstructionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mAttribute_mExpressions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_plusEqualElementsInstructionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_plusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_plusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_plusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_plusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_plusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_plusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult cPtr_minusEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
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


typeComparisonResult GALGAS_minusEqualExpressionInstructionAST::objectCompare (const GALGAS_minusEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (const cPtr_minusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_minusEqualExpressionInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_minusEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_minusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_minusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_minusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_minusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_minusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_minusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @minusEqualExpressionInstructionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_minusEqualExpressionInstructionAST::cPtr_minusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
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

const C_galgas_type_descriptor * cPtr_minusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

void cPtr_minusEqualExpressionInstructionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@minusEqualExpressionInstructionAST:" ;
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

acPtr_class * cPtr_minusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_minusEqualExpressionInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mStructAttributeList, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @minusEqualExpressionInstructionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ("minusEqualExpressionInstructionAST",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_minusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_minusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_minusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST result ;
  const GALGAS_minusEqualExpressionInstructionAST * p = (const GALGAS_minusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_minusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("minusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_mulEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
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


typeComparisonResult GALGAS_mulEqualExpressionInstructionAST::objectCompare (const GALGAS_mulEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (const cPtr_mulEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mulEqualExpressionInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mulEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mulEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mulEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_mulEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_mulEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_mulEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_mulEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @mulEqualExpressionInstructionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_mulEqualExpressionInstructionAST::cPtr_mulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
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

const C_galgas_type_descriptor * cPtr_mulEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

void cPtr_mulEqualExpressionInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@mulEqualExpressionInstructionAST:" ;
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

acPtr_class * cPtr_mulEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mulEqualExpressionInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mStructAttributeList, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @mulEqualExpressionInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ("mulEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mulEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mulEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mulEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST result ;
  const GALGAS_mulEqualExpressionInstructionAST * p = (const GALGAS_mulEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mulEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mulEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_divEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
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


typeComparisonResult GALGAS_divEqualExpressionInstructionAST::objectCompare (const GALGAS_divEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (const cPtr_divEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divEqualExpressionInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_divEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_divEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_divEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_divEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_divEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_divEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @divEqualExpressionInstructionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_divEqualExpressionInstructionAST::cPtr_divEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
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

const C_galgas_type_descriptor * cPtr_divEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

void cPtr_divEqualExpressionInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@divEqualExpressionInstructionAST:" ;
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

acPtr_class * cPtr_divEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divEqualExpressionInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mStructAttributeList, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @divEqualExpressionInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ("divEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_divEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_divEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST result ;
  const GALGAS_divEqualExpressionInstructionAST * p = (const GALGAS_divEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_string GALGAS_plusEqualnstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_plusEqualnstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_plusEqualnstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_plusEqualnstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_plusEqualnstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_plusEqualnstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForCheckingFormalParameterUsing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_plusEqualnstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_plusEqualnstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_plusEqualnstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_plusEqualnstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_plusEqualnstructionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration cPtr_plusEqualnstructionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult cPtr_enumeratedCollectionImplicitVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mPrefix.objectCompare (p->mAttribute_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedExpression.objectCompare (p->mAttribute_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfEnumerationExpression.objectCompare (p->mAttribute_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                                const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (inAttribute_mPrefix.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionImplicitVarInExpAST (inAttribute_mPrefix, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumeratedCollectionImplicitVarInExpAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mAttribute_mPrefix ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumeratedCollectionImplicitVarInExpAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionImplicitVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mAttribute_mEnumeratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionImplicitVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_enumeratedCollectionImplicitVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mAttribute_mEndOfEnumerationExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_enumeratedCollectionImplicitVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfEnumerationExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @enumeratedCollectionImplicitVarInExpAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumeratedCollectionImplicitVarInExpAST::cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mAttribute_mPrefix (in_mPrefix),
mAttribute_mEnumeratedExpression (in_mEnumeratedExpression),
mAttribute_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionImplicitVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

void cPtr_enumeratedCollectionImplicitVarInExpAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionImplicitVarInExpAST:" ;
  mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumeratedCollectionImplicitVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionImplicitVarInExpAST (mAttribute_mPrefix, mAttribute_mEnumeratedExpression, mAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @enumeratedCollectionImplicitVarInExpAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ("enumeratedCollectionImplicitVarInExpAST",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumeratedCollectionVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationOptionalTypeName.objectCompare (p->mAttribute_mEnumerationOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationVariable.objectCompare (p->mAttribute_mEnumerationVariable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedExpression.objectCompare (p->mAttribute_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfEnumerationExpression.objectCompare (p->mAttribute_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumeratedCollectionVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionVarInExpAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationOptionalTypeName,
                                                                                                const GALGAS_lstring & inAttribute_mEnumerationVariable,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  if (inAttribute_mEnumerationOptionalTypeName.isValid () && inAttribute_mEnumerationVariable.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionVarInExpAST (inAttribute_mEnumerationOptionalTypeName, inAttribute_mEnumerationVariable, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::getter_mEnumerationOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEnumerationOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumeratedCollectionVarInExpAST::getter_mEnumerationOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::getter_mEnumerationVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEnumerationVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumeratedCollectionVarInExpAST::getter_mEnumerationVariable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEnumeratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_enumeratedCollectionVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEndOfEnumerationExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_enumeratedCollectionVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfEnumerationExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @enumeratedCollectionVarInExpAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumeratedCollectionVarInExpAST::cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                                            const GALGAS_lstring & in_mEnumerationVariable,
                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mAttribute_mEnumerationOptionalTypeName (in_mEnumerationOptionalTypeName),
mAttribute_mEnumerationVariable (in_mEnumerationVariable),
mAttribute_mEnumeratedExpression (in_mEnumeratedExpression),
mAttribute_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

void cPtr_enumeratedCollectionVarInExpAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionVarInExpAST:" ;
  mAttribute_mEnumerationOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumerationVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumeratedCollectionVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionVarInExpAST (mAttribute_mEnumerationOptionalTypeName, mAttribute_mEnumerationVariable, mAttribute_mEnumeratedExpression, mAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @enumeratedCollectionVarInExpAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ("enumeratedCollectionVarInExpAST",
                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  const GALGAS_enumeratedCollectionVarInExpAST * p = (const GALGAS_enumeratedCollectionVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedObjectList.objectCompare (p->mAttribute_mEnumeratedObjectList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexVariableName.objectCompare (p->mAttribute_mIndexVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhileExpression.objectCompare (p->mAttribute_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_while_5F_expression.objectCompare (p->mAttribute_mEndOf_5F_while_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBeforeInstructionList.objectCompare (p->mAttribute_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_before_5F_branch.objectCompare (p->mAttribute_mEndOf_5F_before_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBetweenInstructionList.objectCompare (p->mAttribute_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_between_5F_branch.objectCompare (p->mAttribute_mEndOf_5F_between_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_do_5F_branch.objectCompare (p->mAttribute_mEndOf_5F_do_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAfterInstructionList.objectCompare (p->mAttribute_mAfterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_after_5F_branch.objectCompare (p->mAttribute_mEndOf_5F_after_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_foreach_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_foreach_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_forInstructionEnumeratedObjectListAST & inAttribute_mEnumeratedObjectList,
                                                                    const GALGAS_lstring & inAttribute_mIndexVariableName,
                                                                    const GALGAS_semanticExpressionAST & inAttribute_mWhileExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_while_5F_expression,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mBeforeInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_before_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mBetweenInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_between_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mAfterInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_after_5F_branch,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_foreach_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEnumeratedObjectList.isValid () && inAttribute_mIndexVariableName.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_while_5F_expression.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mEndOf_5F_before_5F_branch.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mEndOf_5F_between_5F_branch.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_branch.isValid () && inAttribute_mAfterInstructionList.isValid () && inAttribute_mEndOf_5F_after_5F_branch.isValid () && inAttribute_mEndOf_5F_foreach_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mInstructionLocation, inAttribute_mEnumeratedObjectList, inAttribute_mIndexVariableName, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_while_5F_expression, inAttribute_mBeforeInstructionList, inAttribute_mEndOf_5F_before_5F_branch, inAttribute_mBetweenInstructionList, inAttribute_mEndOf_5F_between_5F_branch, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_branch, inAttribute_mAfterInstructionList, inAttribute_mEndOf_5F_after_5F_branch, inAttribute_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionAST::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEnumeratedObjectList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST cPtr_forInstructionAST::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedObjectList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionAST::getter_mIndexVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mIndexVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionAST::getter_mIndexVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_while_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_while_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_while_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_while_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mBeforeInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBeforeInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_before_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_before_5F_branch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_before_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_before_5F_branch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mBetweenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBetweenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_between_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_between_5F_branch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_between_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_between_5F_branch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_do_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_do_5F_branch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_do_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_do_5F_branch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mAfterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAfterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_after_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_after_5F_branch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_after_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_after_5F_branch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_foreach_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_foreach_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_foreach_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_foreach_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @forInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                                const GALGAS_lstring & in_mIndexVariableName,
                                                const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                                const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                                const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mEnumeratedObjectList (in_mEnumeratedObjectList),
mAttribute_mIndexVariableName (in_mIndexVariableName),
mAttribute_mWhileExpression (in_mWhileExpression),
mAttribute_mEndOf_5F_while_5F_expression (in_mEndOf_5F_while_5F_expression),
mAttribute_mBeforeInstructionList (in_mBeforeInstructionList),
mAttribute_mEndOf_5F_before_5F_branch (in_mEndOf_5F_before_5F_branch),
mAttribute_mBetweenInstructionList (in_mBetweenInstructionList),
mAttribute_mEndOf_5F_between_5F_branch (in_mEndOf_5F_between_5F_branch),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mEndOf_5F_do_5F_branch (in_mEndOf_5F_do_5F_branch),
mAttribute_mAfterInstructionList (in_mAfterInstructionList),
mAttribute_mEndOf_5F_after_5F_branch (in_mEndOf_5F_after_5F_branch),
mAttribute_mEndOf_5F_foreach_5F_instruction (in_mEndOf_5F_foreach_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_while_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_before_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_between_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_do_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_after_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_foreach_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mAttribute_mInstructionLocation, mAttribute_mEnumeratedObjectList, mAttribute_mIndexVariableName, mAttribute_mWhileExpression, mAttribute_mEndOf_5F_while_5F_expression, mAttribute_mBeforeInstructionList, mAttribute_mEndOf_5F_before_5F_branch, mAttribute_mBetweenInstructionList, mAttribute_mEndOf_5F_between_5F_branch, mAttribute_mDoInstructionList, mAttribute_mEndOf_5F_do_5F_branch, mAttribute_mAfterInstructionList, mAttribute_mEndOf_5F_after_5F_branch, mAttribute_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @forInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInVar:" ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationResultInVar type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ("grammarInstructionSyntaxDirectedTranslationResultInVar",
                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar type                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                                  const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//              Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                              const GALGAS_lstring & in_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst type                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst",
                                                                                         & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInFileInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarComponentName.objectCompare (p->mAttribute_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabelName.objectCompare (p->mAttribute_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSourceExpression.objectCompare (p->mAttribute_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInFileInstructionAST::objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (const cPtr_grammarInFileInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInFileInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                        const GALGAS_lstring & inAttribute_mLabelName,
                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression,
                                                                                        const GALGAS_location & inAttribute_mEndOfSourceExpression,
                                                                                        const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mEndOfSourceExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInFileInstructionAST (inAttribute_mInstructionLocation, inAttribute_mGrammarComponentName, inAttribute_mLabelName, inAttribute_mSourceExpression, inAttribute_mEndOfSourceExpression, inAttribute_mActualParameterList, inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInFileInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mAttribute_mGrammarComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInFileInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInFileInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mAttribute_mLabelName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInFileInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_grammarInFileInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_grammarInFileInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_grammarInFileInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mAttribute_mEndOfSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_grammarInFileInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_grammarInFileInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_grammarInFileInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInFileInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_grammarInFileInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @grammarInFileInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInFileInstructionAST::cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_lstring & in_mGrammarComponentName,
                                                                    const GALGAS_lstring & in_mLabelName,
                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                                                    const GALGAS_location & in_mEndOfSourceExpression,
                                                                    const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mGrammarComponentName (in_mGrammarComponentName),
mAttribute_mLabelName (in_mLabelName),
mAttribute_mSourceExpression (in_mSourceExpression),
mAttribute_mEndOfSourceExpression (in_mEndOfSourceExpression),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInFileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

void cPtr_grammarInFileInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@grammarInFileInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInFileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInFileInstructionAST (mAttribute_mInstructionLocation, mAttribute_mGrammarComponentName, mAttribute_mLabelName, mAttribute_mSourceExpression, mAttribute_mEndOfSourceExpression, mAttribute_mActualParameterList, mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @grammarInFileInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInFileInstructionAST ("grammarInFileInstructionAST",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST result ;
  const GALGAS_grammarInFileInstructionAST * p = (const GALGAS_grammarInFileInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInFileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInStringInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarComponentName.objectCompare (p->mAttribute_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabelName.objectCompare (p->mAttribute_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSourceExpression.objectCompare (p->mAttribute_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameExpression.objectCompare (p->mAttribute_mNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfNameExpression.objectCompare (p->mAttribute_mEndOfNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInStringInstructionAST::objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (const cPtr_grammarInStringInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInStringInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                            const GALGAS_lstring & inAttribute_mLabelName,
                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression,
                                                                                            const GALGAS_location & inAttribute_mEndOfSourceExpression,
                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mNameExpression,
                                                                                            const GALGAS_location & inAttribute_mEndOfNameExpression,
                                                                                            const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mEndOfSourceExpression.isValid () && inAttribute_mNameExpression.isValid () && inAttribute_mEndOfNameExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInStringInstructionAST (inAttribute_mInstructionLocation, inAttribute_mGrammarComponentName, inAttribute_mLabelName, inAttribute_mSourceExpression, inAttribute_mEndOfSourceExpression, inAttribute_mNameExpression, inAttribute_mEndOfNameExpression, inAttribute_mActualParameterList, inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInStringInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mGrammarComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInStringInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInStringInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mLabelName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInStringInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_grammarInStringInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_grammarInStringInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mEndOfSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_grammarInStringInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::getter_mNameExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mNameExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_grammarInStringInstructionAST::getter_mNameExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_grammarInStringInstructionAST::getter_mEndOfNameExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mEndOfNameExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_grammarInStringInstructionAST::getter_mEndOfNameExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfNameExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_grammarInStringInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_grammarInStringInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInStringInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_grammarInStringInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @grammarInStringInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInStringInstructionAST::cPtr_grammarInStringInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                        const GALGAS_lstring & in_mLabelName,
                                                                        const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                                                        const GALGAS_location & in_mEndOfSourceExpression,
                                                                        const GALGAS_semanticExpressionAST & in_mNameExpression,
                                                                        const GALGAS_location & in_mEndOfNameExpression,
                                                                        const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mGrammarComponentName (in_mGrammarComponentName),
mAttribute_mLabelName (in_mLabelName),
mAttribute_mSourceExpression (in_mSourceExpression),
mAttribute_mEndOfSourceExpression (in_mEndOfSourceExpression),
mAttribute_mNameExpression (in_mNameExpression),
mAttribute_mEndOfNameExpression (in_mEndOfNameExpression),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInStringInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

void cPtr_grammarInStringInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@grammarInStringInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInStringInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInStringInstructionAST (mAttribute_mInstructionLocation, mAttribute_mGrammarComponentName, mAttribute_mLabelName, mAttribute_mSourceExpression, mAttribute_mEndOfSourceExpression, mAttribute_mNameExpression, mAttribute_mEndOfNameExpression, mAttribute_mActualParameterList, mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @grammarInStringInstructionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInStringInstructionAST ("grammarInStringInstructionAST",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST result ;
  const GALGAS_grammarInStringInstructionAST * p = (const GALGAS_grammarInStringInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInStringInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_incDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
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
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_incDecInstructionAST::objectCompare (const GALGAS_incDecInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_lstring & inAttribute_mReceiverName,
                                                                          const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                          const GALGAS_incDecKind & inAttribute_mKind
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_incDecInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_incDecInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_incDecInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_incDecInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @incDecInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mReceiverName,
                                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                                      const GALGAS_incDecKind & in_mKind
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@incDecInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_incDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mStructAttributeList, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @incDecInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  const GALGAS_incDecInstructionAST * p = (const GALGAS_incDecInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_incDecNoOVFInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
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
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_incDecNoOVFInstructionAST::objectCompare (const GALGAS_incDecNoOVFInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (const cPtr_incDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                    const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_incDecNoOVFInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_incDecNoOVFInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_incDecNoOVFInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecNoOVFInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @incDecNoOVFInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_incDecNoOVFInstructionAST::cPtr_incDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_lstring & in_mReceiverName,
                                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                                const GALGAS_incDecKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

void cPtr_incDecNoOVFInstructionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_incDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mStructAttributeList, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @incDecNoOVFInstructionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ("incDecNoOVFInstructionAST",
                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  const GALGAS_incDecNoOVFInstructionAST * p = (const GALGAS_incDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_location GALGAS_incDecInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_incDecInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_incDecInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_incDecInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_incDecInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_incDecInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_incDecInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_incDecInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
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

GALGAS_location GALGAS_incDecNoOVFInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_incDecNoOVFInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_incDecNoOVFInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_incDecNoOVFInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_incDecNoOVFInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_incDecNoOVFInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_incDecNoOVFInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecNoOVFInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConstant.objectCompare (p->mAttribute_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionalTypeName.objectCompare (p->mAttribute_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariableName.objectCompare (p->mAttribute_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_bool & inAttribute_mIsConstant,
                                                                                                                                        const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                                                        const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIsConstant.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mIsConstant, inAttribute_mOptionalTypeName, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mAttribute_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mAttribute_mVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                    Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_localVariableOrConstantDeclarationWithAssignmentAST::cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                                                    const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                    const GALGAS_lstring & in_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mIsConstant (in_mIsConstant),
mAttribute_mOptionalTypeName (in_mOptionalTypeName),
mAttribute_mVariableName (in_mVariableName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithAssignmentAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (mAttribute_mInstructionLocation, mAttribute_mIsConstant, mAttribute_mOptionalTypeName, mAttribute_mVariableName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @localVariableOrConstantDeclarationWithAssignmentAST type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ("localVariableOrConstantDeclarationWithAssignmentAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST * p = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_undefinedLocalConstantDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstantTypeName.objectCompare (p->mAttribute_mConstantTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstantName.objectCompare (p->mAttribute_mConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationAST::objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (const cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_lstring & inAttribute_mConstantTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mConstantName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantTypeName.isValid () && inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationAST (inAttribute_mInstructionLocation, inAttribute_mConstantTypeName, inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    result = p->mAttribute_mConstantTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_undefinedLocalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    result = p->mAttribute_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_undefinedLocalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @undefinedLocalConstantDeclarationAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_undefinedLocalConstantDeclarationAST::cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                                      const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mConstantTypeName (in_mConstantTypeName),
mAttribute_mConstantName (in_mConstantName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

void cPtr_undefinedLocalConstantDeclarationAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_undefinedLocalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationAST (mAttribute_mInstructionLocation, mAttribute_mConstantTypeName, mAttribute_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @undefinedLocalConstantDeclarationAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ("undefinedLocalConstantDeclarationAST",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  const GALGAS_undefinedLocalConstantDeclarationAST * p = (const GALGAS_undefinedLocalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_localConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariableName.objectCompare (p->mAttribute_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_localConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localConstantDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    result = p->mAttribute_mVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_localConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_localConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_localConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @localConstantDeclarationWithAssignmentAST class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_localConstantDeclarationWithAssignmentAST::cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mVariableName (in_mVariableName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_localConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

void cPtr_localConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@localConstantDeclarationWithAssignmentAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_localConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localConstantDeclarationWithAssignmentAST (mAttribute_mInstructionLocation, mAttribute_mVariableName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @localConstantDeclarationWithAssignmentAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ("localConstantDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localConstantDeclarationWithAssignmentAST * p = (const GALGAS_localConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_undefinedLocalConstantDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppVariableName.objectCompare (p->mAttribute_mCppVariableName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                                 GALGAS_string::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                                              const GALGAS_string & inAttribute_mCppVariableName
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (inAttribute_mTargetType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_undefinedLocalConstantDeclarationForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_undefinedLocalConstantDeclarationForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_undefinedLocalConstantDeclarationForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    result = p->mAttribute_mCppVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_undefinedLocalConstantDeclarationForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @undefinedLocalConstantDeclarationForGeneration class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                                          const GALGAS_string & in_mCppVariableName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mCppVariableName (in_mCppVariableName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationForGeneration:" ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mAttribute_mTargetType, mAttribute_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @undefinedLocalConstantDeclarationForGeneration type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration * p = (const GALGAS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_semanticExpressionAST GALGAS_methodCallInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_methodCallInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_methodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_methodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_methodCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_methodCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_procCallInstructionAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_procCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_procCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult cPtr_procCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procCallInstructionForGeneration::objectCompare (const GALGAS_procCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionForGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_actualParameterListForGeneration::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                  const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionForGeneration (inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallInstructionForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_procCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_procCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @procCallInstructionForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mActualParameterList (in_mActualParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

void cPtr_procCallInstructionForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@procCallInstructionForGeneration:" ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionForGeneration (mAttribute_mRoutineName, mAttribute_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @procCallInstructionForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionForGeneration ("procCallInstructionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration result ;
  const GALGAS_procCallInstructionForGeneration * p = (const GALGAS_procCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mAttribute_mSetterName.objectCompare (p->mAttribute_mSetterName) ;
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
                                                                                  const GALGAS_lstring & inAttribute_mSetterName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mTypeNameForCasting.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mReceiverStructAttributes, inAttribute_mTypeNameForCasting, inAttribute_mSetterName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_setterCallInstructionAST::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mReceiverStructAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_setterCallInstructionAST::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverStructAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionAST::getter_mTypeNameForCasting (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mTypeNameForCasting ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionAST::getter_mTypeNameForCasting (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeNameForCasting ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_setterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_setterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @setterCallInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_setterCallInstructionAST::cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mReceiverName,
                                                              const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                              const GALGAS_lstring & in_mTypeNameForCasting,
                                                              const GALGAS_lstring & in_mSetterName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mReceiverStructAttributes (in_mReceiverStructAttributes),
mAttribute_mTypeNameForCasting (in_mTypeNameForCasting),
mAttribute_mSetterName (in_mSetterName),
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
  mAttribute_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_setterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setterCallInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mReceiverStructAttributes, mAttribute_mTypeNameForCasting, mAttribute_mSetterName, mAttribute_mActualParameterList COMMA_THERE)) ;
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

typeComparisonResult cPtr_selfSetterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSetterName.objectCompare (p->mAttribute_mSetterName) ;
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
                                                                                          const GALGAS_lstring & inAttribute_mSetterName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfSetterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mSetterName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_selfSetterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    result = p->mAttribute_mSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_selfSetterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_selfSetterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_selfSetterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @selfSetterCallInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfSetterCallInstructionAST::cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mSetterName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mSetterName (in_mSetterName),
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
  mAttribute_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfSetterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionAST (mAttribute_mInstructionLocation, mAttribute_mSetterName, mAttribute_mActualParameterList COMMA_THERE)) ;
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
    result = mAttribute_mSetterName.objectCompare (p->mAttribute_mSetterName) ;
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
                                                                                                      const GALGAS_lstring & inAttribute_mSetterName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverBaseName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mCastType.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverBaseName, inAttribute_mReceiverStructAttributes, inAttribute_mCastType, inAttribute_mReceiverType, inAttribute_mSetterName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_setterCallInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_setterCallInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterCallInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_setterCallInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterCallInstructionForGeneration::getter_mReceiverBaseName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverBaseName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_setterCallInstructionForGeneration::getter_mReceiverBaseName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverBaseName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_setterCallInstructionForGeneration::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverStructAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_setterCallInstructionForGeneration::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverStructAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::getter_mCastType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mCastType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::getter_mCastType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_setterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cPtr_setterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_setterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_setterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_setterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_setterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::getter_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mAttribute_mMethodBaseType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::getter_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
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
                                                                                  const GALGAS_lstring & in_mSetterName,
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
mAttribute_mSetterName (in_mSetterName),
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
  mAttribute_mSetterName.description (ioString, inIndentation+1) ;
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
  macroMyNew (ptr, cPtr_setterCallInstructionForGeneration (mAttribute_mInstructionLocation, mAttribute_mReceiverCppName, mAttribute_mReceiverBaseName, mAttribute_mReceiverStructAttributes, mAttribute_mCastType, mAttribute_mReceiverType, mAttribute_mSetterName, mAttribute_mKind, mAttribute_mActualParameterList, mAttribute_mHasCompilerArgument, mAttribute_mMethodBaseType COMMA_THERE)) ;
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

typeComparisonResult cPtr_selfSetterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelfCppName.objectCompare (p->mAttribute_mSelfCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSetterName.objectCompare (p->mAttribute_mSetterName) ;
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


typeComparisonResult GALGAS_selfSetterCallInstructionForGeneration::objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mSelfCppName,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                              const GALGAS_lstring & inAttribute_mSetterName,
                                                                                                              const GALGAS_methodKind & inAttribute_mKind,
                                                                                                              const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                              const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  if (inAttribute_mSelfCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfSetterCallInstructionForGeneration (inAttribute_mSelfCppName, inAttribute_mReceiverType, inAttribute_mSetterName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selfSetterCallInstructionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mAttribute_mSelfCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_selfSetterCallInstructionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_selfSetterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_selfSetterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_selfSetterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mAttribute_mSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_selfSetterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_selfSetterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cPtr_selfSetterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_selfSetterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration cPtr_selfSetterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_selfSetterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_selfSetterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @selfSetterCallInstructionForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfSetterCallInstructionForGeneration::cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                          const GALGAS_lstring & in_mSetterName,
                                                                                          const GALGAS_methodKind & in_mKind,
                                                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mAttribute_mSelfCppName (in_mSelfCppName),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mSetterName (in_mSetterName),
mAttribute_mKind (in_mKind),
mAttribute_mActualParameterList (in_mActualParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

void cPtr_selfSetterCallInstructionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@selfSetterCallInstructionForGeneration:" ;
  mAttribute_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfSetterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionForGeneration (mAttribute_mSelfCppName, mAttribute_mReceiverType, mAttribute_mSetterName, mAttribute_mKind, mAttribute_mActualParameterList, mAttribute_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @selfSetterCallInstructionForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ("selfSetterCallInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfSetterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  const GALGAS_selfSetterCallInstructionForGeneration * p = (const GALGAS_selfSetterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfSetterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

