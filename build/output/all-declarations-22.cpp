#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

//----------------------------------------------------------------------------------------------------------------------
// @assignmentInstructionForGeneration reference class
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_assignmentInstructionForGeneration::readProperty_mTargetType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::readProperty_mTargetCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mTargetCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::readProperty_mOptionalProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_assignmentInstructionForGeneration::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_assignmentInstructionForGeneration::readProperty_mSourceLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mSourceLocation ;
  }
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
// @structuredCastInstructionForGeneration reference class
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

GALGAS_semanticExpressionForGeneration GALGAS_structuredCastInstructionForGeneration::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_structuredCastInstructionForGeneration::readProperty_mCastBranchList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_castInstructionBranchListForGeneration () ;
  }else{
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    return p->mProperty_mCastBranchList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_structuredCastInstructionForGeneration::readProperty_mElseInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    return p->mProperty_mElseInstructionList ;
  }
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
// @opEqualInstructionForGeneration reference class
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

GALGAS_location GALGAS_opEqualInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_opEqualInstructionForGeneration::readProperty_mTargetType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::readProperty_mTargetVariableCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mTargetVariableCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_opEqualInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_opEqualInstructionForGeneration::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::readProperty_mGeneratedMethod (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mGeneratedMethod ;
  }
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
// @errorInstructionForGeneration reference class
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

GALGAS_location GALGAS_errorInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::readProperty_mErrorExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mErrorExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_errorInstructionForGeneration::readProperty_mBuiltVariableCppNameList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mBuiltVariableCppNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_errorInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_fixitListForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
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
// @forInstructionForGeneration reference class
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

GALGAS_location GALGAS_forInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionForGeneration::readProperty_mEnumeratedObjectList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_forInstructionEnumeratedObjectListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mEnumeratedObjectList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionForGeneration::readProperty_mIndexVariableCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mIndexVariableCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionForGeneration::readProperty_mWhileExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mWhileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mDoInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mAfterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
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
// @grammarInstructionWithSourceFileForGeneration reference class
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

GALGAS_location GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mLabelName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mSourceFileExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSourceFileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mAssignementList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
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
// @grammarInstructionWithSourceExpressionForGeneration reference class
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

GALGAS_location GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mLabelName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSourceStringExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceStringExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mNameStringExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mNameStringExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mAssignementList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
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
// @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mTargetType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mIsConstant (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mCppVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
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
// @logInstructionForGeneration reference class
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

void GALGAS_logInstructionForGeneration::setter_setMLogMessage (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    p->mProperty_mLogMessage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logInstructionForGeneration::setter_setMLogExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    p->mProperty_mLogExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_logInstructionForGeneration::readProperty_mLogMessage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    return p->mProperty_mLogMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_logInstructionForGeneration::readProperty_mLogExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    return p->mProperty_mLogExpression ;
  }
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
// @loopInstructionWithVariantForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_loopInstructionWithVariantForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loopInstructionWithVariantForGeneration * p = (const cPtr_loopInstructionWithVariantForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
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


typeComparisonResult GALGAS_loopInstructionWithVariantForGeneration::objectCompare (const GALGAS_loopInstructionWithVariantForGeneration & inOperand) const {
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

GALGAS_loopInstructionWithVariantForGeneration::GALGAS_loopInstructionWithVariantForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration::GALGAS_loopInstructionWithVariantForGeneration (const cPtr_loopInstructionWithVariantForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration GALGAS_loopInstructionWithVariantForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mVariantExpression,
                                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mFirstInstructions,
                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mLoopExpression,
                                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mSecondInstructions
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mFirstInstructions.isValid () && inAttribute_mLoopExpression.isValid () && inAttribute_mSecondInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithVariantForGeneration (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mFirstInstructions, inAttribute_mLoopExpression, inAttribute_mSecondInstructions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithVariantForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithVariantForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    p->mProperty_mVariantExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithVariantForGeneration::setter_setMFirstInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    p->mProperty_mFirstInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithVariantForGeneration::setter_setMLoopExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    p->mProperty_mLoopExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithVariantForGeneration::setter_setMSecondInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    p->mProperty_mSecondInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mVariantExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mVariantExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantForGeneration::cPtr_loopInstructionWithVariantForGeneration (const GALGAS_location & in_mInstructionLocation,
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

const C_galgas_type_descriptor * cPtr_loopInstructionWithVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

void cPtr_loopInstructionWithVariantForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@loopInstructionWithVariantForGeneration:" ;
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

acPtr_class * cPtr_loopInstructionWithVariantForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@loopInstructionWithVariantForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ("loopInstructionWithVariantForGeneration",
                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithVariantForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration GALGAS_loopInstructionWithVariantForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantForGeneration result ;
  const GALGAS_loopInstructionWithVariantForGeneration * p = (const GALGAS_loopInstructionWithVariantForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loopInstructionWithVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_loopInstructionWithoutVariantForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loopInstructionWithoutVariantForGeneration * p = (const cPtr_loopInstructionWithoutVariantForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
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


typeComparisonResult GALGAS_loopInstructionWithoutVariantForGeneration::objectCompare (const GALGAS_loopInstructionWithoutVariantForGeneration & inOperand) const {
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

GALGAS_loopInstructionWithoutVariantForGeneration::GALGAS_loopInstructionWithoutVariantForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration::GALGAS_loopInstructionWithoutVariantForGeneration (const cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_mFirstInstructions,
                                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLoopExpression,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_mSecondInstructions
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFirstInstructions.isValid () && inAttribute_mLoopExpression.isValid () && inAttribute_mSecondInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantForGeneration (inAttribute_mInstructionLocation, inAttribute_mFirstInstructions, inAttribute_mLoopExpression, inAttribute_mSecondInstructions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithoutVariantForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithoutVariantForGeneration::setter_setMFirstInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    p->mProperty_mFirstInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithoutVariantForGeneration::setter_setMLoopExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    p->mProperty_mLoopExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionWithoutVariantForGeneration::setter_setMSecondInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    p->mProperty_mSecondInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mSecondInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mFirstInstructions (in_mFirstInstructions),
mProperty_mLoopExpression (in_mLoopExpression),
mProperty_mSecondInstructions (in_mSecondInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithoutVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

void cPtr_loopInstructionWithoutVariantForGeneration::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@loopInstructionWithoutVariantForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantForGeneration (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@loopInstructionWithoutVariantForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ("loopInstructionWithoutVariantForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithoutVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithoutVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithoutVariantForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantForGeneration result ;
  const GALGAS_loopInstructionWithoutVariantForGeneration * p = (const GALGAS_loopInstructionWithoutVariantForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loopInstructionWithoutVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @messageInstructionForGeneration reference class
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

GALGAS_semanticExpressionForGeneration GALGAS_messageInstructionForGeneration::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_messageInstructionForGeneration * p = (cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_messageInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_messageInstructionForGeneration * p = (cPtr_messageInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
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
// @methodCallInstructionForGeneration reference class
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

GALGAS_location GALGAS_methodCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_methodCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_methodCallInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_methodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_methodCallInstructionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_methodKind () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_methodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_methodCallInstructionForGeneration::readProperty_mMethodBaseType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodBaseType ;
  }
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
// @switchInstructionForGeneration reference class
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_switchInstructionForGeneration::readProperty_mEnumType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mEnumType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_switchInstructionForGeneration::readProperty_mSwitchExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchInstructionForGeneration::readProperty_mBranches (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_switchBranchesForGeneration () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mBranches ;
  }
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
// @warningInstructionForGeneration reference class
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

void GALGAS_warningInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionForGeneration::setter_setMWarningExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mWarningExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionForGeneration::setter_setMFixitListForGeneration (GALGAS_fixitListForGeneration inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    p->mProperty_mFixitListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_warningInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::readProperty_mWarningExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mWarningExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_warningInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_fixitListForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
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
// @readOnlyWithInstructionForGeneration reference class
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

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMObjectArrayCppName (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mObjectArrayCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMKeyExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMSearchMethodNameForErrorSignaling (GALGAS_string inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mDoBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readOnlyWithInstructionForGeneration::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    p->mProperty_mElseBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readOnlyWithInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::readProperty_mObjectArrayCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mObjectArrayCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mKeyExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mKeyExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mDoBranchInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mDoBranchInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mElseBranchInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mElseBranchInstructions ;
  }
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
// @readWriteWithInstructionForGeneration reference class
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

void GALGAS_readWriteWithInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMReceiverVariableCppName (GALGAS_string inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mReceiverVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMObjectArrayCppName (GALGAS_string inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mObjectArrayCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMKeyExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMSearchMethodNameForErrorSignaling (GALGAS_string inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mDoBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteWithInstructionForGeneration::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    p->mProperty_mElseBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteWithInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::readProperty_mReceiverVariableCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mReceiverVariableCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_readWriteWithInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_readWriteWithInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::readProperty_mObjectArrayCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mObjectArrayCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readWriteWithInstructionForGeneration::readProperty_mKeyExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mKeyExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::readProperty_mDoBranchInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mDoBranchInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::readProperty_mElseBranchInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mElseBranchInstructions ;
  }
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
// @parseLoopInstructionForGeneration reference class
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

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::readProperty_mVariantExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    return p->mProperty_mVariantExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::readProperty_mWhileExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    return p->mProperty_mWhileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseLoopInstructionForGeneration::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    return p->mProperty_mInstructionList ;
  }
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
// @parseWhenInstructionForGeneration reference class
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

GALGAS_semanticExpressionForGeneration GALGAS_parseWhenInstructionForGeneration::readProperty_mWhenExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    return p->mProperty_mWhenExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::readProperty_mElseInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    return p->mProperty_mElseInstructionList ;
  }
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
// @syntaxSendInstructionForGeneration reference class
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

GALGAS_semanticExpressionForGeneration GALGAS_syntaxSendInstructionForGeneration::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_syntaxSendInstructionForGeneration * p = (cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
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
  GALGAS_string var_currentNode_4936 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_1.addAssign_operation (var_currentNode_4936, GALGAS_string ("[firstPoint] {}")  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS_rowList var_rowArray_4972 = temp_0 ;
  GALGAS_string var_arrows_5032 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5062 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5082 = GALGAS_uint ((uint32_t) 1U) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5114 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5146 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_5146.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5146.current_mInstruction (HERE).ptr (), var_rowArray_4972, GALGAS_uint ((uint32_t) 0U), var_column_5082, var_currentNode_4936, var_arrowStyle_5062, var_arrows_5032, var_unusedMaxUsedRowIndex_5114, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 117)) ;
    enumerator_5146.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_5544 ;
  {
  extensionSetter_appendRow (var_rowArray_4972, GALGAS_string ("[lastPoint] {}"), GALGAS_uint ((uint32_t) 0U), var_column_5082, var_lastNodeName_5544, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 129)) ;
  }
  var_arrows_5032.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_4936, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (var_lastNodeName_5544, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_5654 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxCompnentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)).add_operation (function_escapeForTex (var_loc_5654.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 135)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).add_operation (function_escapeForTex (var_loc_5654.getter_line (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("}\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 138)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)) ;
  cEnumerator_rowList enumerator_6074 (var_rowArray_4972, kENUMERATION_DOWN) ;
  while (enumerator_6074.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)) ;
    cEnumerator__32_stringlist enumerator_6146 (enumerator_6074.current_columns (HERE), kENUMERATION_UP) ;
    while (enumerator_6146.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_6146.current (HERE).readProperty_mValue_30_ ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6146.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (enumerator_6146.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)) ;
      }
      enumerator_6146.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 150)) ;
    enumerator_6074.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5032, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
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
// @templateInstructionExpressionForGeneration reference class
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

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
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

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ("galgas_cli_options",
                                         "errorAnomynousForInstructionEnumeratedObject",
                                         0,
                                         "error-anonymous-for-instruction",
                                         "error on anonymous 'for' instruction enumerated object ('for () in ...')") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorClassDeclaration ("galgas_cli_options",
                                         "errorClassDeclaration",
                                         0,
                                         "error-class-declaration",
                                         "'class' declaration is obsolete use 'valueclass'") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ("galgas_cli_options",
                                         "errorEllipsisInEnumeratedObject",
                                         0,
                                         "error-ellipsis-in-for-instruction",
                                         "error on ellipsis in enumerated object ('for (x y ...) in xxx')") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ("galgas_cli_options",
                                         "errorOldStyleCollectionInitializer",
                                         0,
                                         "error-old-syle-collection-initializer",
                                         "error on old style collection initializer") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ("galgas_cli_options",
                                         "errorOldStyleLocalVarDeclaration",
                                         0,
                                         "error-old-style-local-var-declaration",
                                         "error on old style local variable declaration") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ("galgas_cli_options",
                                         "errorOldStylePropertyDeclaration",
                                         0,
                                         "error-old-style-property-declaration",
                                         "error on old style property declaration") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ("galgas_cli_options",
                                         "errorPropertyGetterCall",
                                         0,
                                         "error-property-getter-call",
                                         "error on calling property getter (instead of dot notation)") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorValueClassDeclaration ("galgas_cli_options",
                                         "errorValueClassDeclaration",
                                         0,
                                         "error-value-class-declaration",
                                         "error on 'value class' declaration") ;

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
                                         "error-property-access-without-self",
                                         "'self' is required for accessing properties in getter, setter and methods") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ("galgas_cli_options",
                                         "warningNotGalgas4Feature",
                                         0,
                                         "warns-on-feature-not-handled-in-galgas4",
                                         "warns on feature not handled in galgas 4") ;

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
  result << "_grammar () in inSourceFile\n"
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
  GALGAS_string var_projectName_2333 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 38)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2422 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 40)) ;
  var_galgas_5F_sources_5F_DIR_2422.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 41)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 42))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 43))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  inCompiler->printMessage (GALGAS_string ("*** DONE ***\n")  COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
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
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_length (SOURCE_FILE ("projectCreation.galgas", 57)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (GALGAS_string (" option) ***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58))  COMMA_SOURCE_FILE ("projectCreation.galgas", 58)) ;
      GALGAS_string var_projectName_4090 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 60)) ;
      GALGAS_bool var_ok_4143 = var_projectName_4090.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 61)) ;
      GALGAS_uint var_idx_4207 = GALGAS_uint ((uint32_t) 1U) ;
      if (var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 63)).isValid ()) {
        uint32_t variant_4220 = var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 63)).uintValue () ;
        bool loop_4220 = true ;
        while (loop_4220) {
          loop_4220 = GALGAS_bool (kIsStrictInf, var_idx_4207.objectCompare (var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4143 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).isValid () ;
          if (loop_4220) {
            loop_4220 = GALGAS_bool (kIsStrictInf, var_idx_4207.objectCompare (var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4143 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).boolValue () ;
          }
          if (loop_4220 && (0 == variant_4220)) {
            loop_4220 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 63)) ;
          }
          if (loop_4220) {
            variant_4220 -- ;
            GALGAS_char var_c_4308 = var_projectName_4090.getter_characterAtIndex (var_idx_4207, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 65)) ;
            var_ok_4143 = var_c_4308.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 66)).operator_or (GALGAS_bool (kIsEqual, var_c_4308.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 66)) ;
            var_idx_4207.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 67)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4143.operator_not (SOURCE_FILE ("projectCreation.galgas", 69)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4090, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 70)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 71))  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4143.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4143 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 75)).operator_not (SOURCE_FILE ("projectCreation.galgas", 75)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4143.operator_not (SOURCE_FILE ("projectCreation.galgas", 76)).boolEnum () ;
            if (kBoolTrue == test_3) {
              inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77))  COMMA_SOURCE_FILE ("projectCreation.galgas", 77)) ;
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4143.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 81)) ;
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
  GALGAS_string var_s_26318 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 629)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_26318.getter_length (SOURCE_FILE ("templateSyntax.galgas", 630)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_26318  COMMA_SOURCE_FILE ("templateSyntax.galgas", 631))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 631)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3867 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_receiverExpression_3867, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 71)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_3912 = var_receiverExpression_3867.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = var_receiverType_3912.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 79)).getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 79)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = var_receiverType_3912.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 79)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 79)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = object ;
      test_1 = GALGAS_bool (kIsEqual, temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 80)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = object ;
        GALGAS_bool var_isPublic_4216 ;
        GALGAS_bool var_unused_0_4219 ;
        GALGAS_unifiedTypeMap_2D_entry var_propertyType_4237 ;
        const bool optionalResult4184 = var_receiverType_3912.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 81)).optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_isPublic_4216, var_unused_0_4219, var_propertyType_4237) ;
        if (!optionalResult4184) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = object ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isPublic_4216.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 85)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_templateGetterCallInExpressionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 86)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_11 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_12 = object ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4237, temp_11.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3867, temp_12.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 88)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_5538 = var_receiverType_3912.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 110)) ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_5647 ;
    GALGAS_methodKind var_kind_5672 ;
    GALGAS_bool var_hasCompilerArgument_5706 ;
    GALGAS_unifiedTypeMap_2D_entry var_returnedType_5749 ;
    GALGAS_stringlist var_fieldList_5767 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 116)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_templateGetterCallInExpressionAST temp_14 = object ;
      test_13 = var_getterMap_5538.getter_hasKey (temp_14.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_templateGetterCallInExpressionAST temp_15 = object ;
        GALGAS_location joker_5947 ; // Joker input parameter
        GALGAS_methodQualifier joker_6009_2 ; // Joker input parameter
        GALGAS_string joker_6009_1 ; // Joker input parameter
        var_getterMap_5538.method_searchKey (temp_15.readProperty_mGetterName (), var_kind_5672, var_getterFormalArgumentTypeList_5647, joker_5947, var_hasCompilerArgument_5706, var_returnedType_5749, joker_6009_2, joker_6009_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)) ;
      }
    }
    if (kBoolFalse == test_13) {
      GALGAS_uint var_matchingReaderCount_6064 = GALGAS_uint ((uint32_t) 0U) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, var_receiverType_3912.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 128)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 128)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          var_getterFormalArgumentTypeList_5647 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 129)) ;
          var_hasCompilerArgument_5706 = GALGAS_bool (true) ;
          var_returnedType_5749 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 131)) ;
          var_kind_5672 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
          cEnumerator_typedPropertyList enumerator_6360 (var_receiverType_3912.getter_mCurrentTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)), kENUMERATION_UP) ;
          while (enumerator_6360.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6438 = enumerator_6360.current_mPropertyTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 134)) ;
            const GALGAS_templateGetterCallInExpressionAST temp_17 = object ;
            const cMapElement_getterMap * objectArray_6487 = (const cMapElement_getterMap *) var_aMap_6438.readAccessForWithInstruction (temp_17.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_6487) {
                macroValidSharedObject (objectArray_6487, cMapElement_getterMap) ;
              var_matchingReaderCount_6064.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 136)) ;
              var_getterFormalArgumentTypeList_5647 = objectArray_6487->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_5706 = objectArray_6487->mProperty_mHasCompilerArgument ;
              var_returnedType_5749 = objectArray_6487->mProperty_mReturnedType ;
              var_kind_5672 = objectArray_6487->mProperty_mKind ;
              var_fieldList_5767.addAssign_operation (enumerator_6360.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 141)) ;
            }
            enumerator_6360.gotoNextObject () ;
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = GALGAS_bool (kIsEqual, var_matchingReaderCount_6064.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_18) {
              const GALGAS_templateGetterCallInExpressionAST temp_19 = object ;
              const GALGAS_templateGetterCallInExpressionAST temp_20 = object ;
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 145)) ;
              var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
              var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
              var_returnedType_5749.drop () ; // Release error dropped variable
              var_kind_5672.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_6064.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_22) {
                GALGAS_string var_s_7203 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7230 (var_fieldList_5767, kENUMERATION_UP) ;
                while (enumerator_7230.hasCurrentObject ()) {
                  var_s_7203.plusAssign_operation(enumerator_7230.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)) ;
                  if (enumerator_7230.hasNextObject ()) {
                    var_s_7203.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 153)) ;
                  }
                  enumerator_7230.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_23 = object ;
                const GALGAS_templateGetterCallInExpressionAST temp_24 = object ;
                TC_Array <C_FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (var_s_7203, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 155)) ;
                var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
                var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
                var_returnedType_5749.drop () ; // Release error dropped variable
                var_kind_5672.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, var_getterMap_5538.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_26) {
            const GALGAS_templateGetterCallInExpressionAST temp_27 = object ;
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 161)) ;
            var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
            var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
            var_returnedType_5749.drop () ; // Release error dropped variable
            var_kind_5672.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_26) {
          const GALGAS_templateGetterCallInExpressionAST temp_29 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_30 = object ;
          TC_Array <C_FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, kFixItReplace, var_getterMap_5538.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 168))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 165)) ;
          var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
          var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
          var_returnedType_5749.drop () ; // Release error dropped variable
          var_kind_5672.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_templateGetterCallInExpressionAST temp_33 = object ;
      test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 172)).objectCompare (var_getterFormalArgumentTypeList_5647.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 172)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const GALGAS_templateGetterCallInExpressionAST temp_34 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_35 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_36 = object ;
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (var_getterFormalArgumentTypeList_5647.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 174)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (temp_36.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 175)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_32) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8671 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 177)) ;
      const GALGAS_templateGetterCallInExpressionAST temp_38 = object ;
      cEnumerator_templateExpressionListAST enumerator_8740 (temp_38.readProperty_mExpressionList (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_8805 (var_getterFormalArgumentTypeList_5647, kENUMERATION_UP) ;
      while (enumerator_8740.hasCurrentObject () && enumerator_8805.hasCurrentObject ()) {
        enumGalgasBool test_39 = kBoolTrue ;
        if (kBoolTrue == test_39) {
          test_39 = GALGAS_bool (kIsNotEqual, enumerator_8805.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8740.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_string temp_40 ;
            const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_8805.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_41) {
              temp_40 = enumerator_8805.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)) ;
            }else if (kBoolFalse == test_41) {
              temp_40 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_8922 = GALGAS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)) ;
            TC_Array <C_FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, kFixItReplace, var_s_8922) ;
            inCompiler->emitSemanticError (enumerator_8740.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8922, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9452 ;
        callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_8740.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_9452, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8805.current_mFormalArgumentType (HERE), var_exp_9452.readProperty_mResultType (), enumerator_8740.current_mEndOfExpressionLocation (HERE), var_exp_9452, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)) ;
        }
        var_constructorEffectiveParameterList_8671.addAssign_operation (var_exp_9452  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)) ;
        enumerator_8740.gotoNextObject () ;
        enumerator_8805.gotoNextObject () ;
      }
      const GALGAS_templateGetterCallInExpressionAST temp_43 = object ;
      const GALGAS_templateGetterCallInExpressionAST temp_44 = object ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_5749, temp_43.readProperty_mGetterName ().readProperty_location (), var_kind_5672, var_receiverExpression_3867, var_fieldList_5767, temp_44.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_8671, var_hasCompilerArgument_5706  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 193)) ;
    }
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
  GALGAS_unifiedTypeMap_2D_entry var_constructorType_10549 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 217)) ;
  GALGAS_constructorMap var_constructorMap_10723 = var_constructorType_10549.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 219)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_10823 ;
  GALGAS_bool var_hasCompilerArgument_10855 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_10914 ;
  const GALGAS_templateConstructorAST temp_1 = object ;
  const cMapElement_constructorMap * objectArray_10921 = (const cMapElement_constructorMap *) var_constructorMap_10723.readAccessForWithInstruction (temp_1.readProperty_mConstructorName ().readProperty_string ()) ;
  if (NULL != objectArray_10921) {
      macroValidSharedObject (objectArray_10921, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_10914 = objectArray_10921->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10855 = objectArray_10921->mProperty_mHasCompilerArgument ;
    var_returnedType_10823 = objectArray_10921->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_10723.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 229)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = object ;
        const GALGAS_templateConstructorAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 230)) ;
        var_constructorFormalArgumentTypeList_10914.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10855.drop () ; // Release error dropped variable
        var_returnedType_10823.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = object ;
      const GALGAS_templateConstructorAST temp_7 = object ;
      const GALGAS_templateConstructorAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_10723.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 237))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)).add_operation (temp_8.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 234)) ;
      var_constructorFormalArgumentTypeList_10914.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10855.drop () ; // Release error dropped variable
      var_returnedType_10823.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11736 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 242)).objectCompare (var_constructorFormalArgumentTypeList_10914.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 242)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = object ;
      const GALGAS_templateConstructorAST temp_13 = object ;
      const GALGAS_templateConstructorAST temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (var_constructorType_10549.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (var_constructorFormalArgumentTypeList_10914.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 245)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (temp_14.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 246)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 243)) ;
      var_constructorEffectiveParameterList_11736.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_11736 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 249)) ;
    const GALGAS_templateConstructorAST temp_16 = object ;
    cEnumerator_templateExpressionListAST enumerator_12315 (temp_16.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12380 (var_constructorFormalArgumentTypeList_10914, kENUMERATION_UP) ;
    while (enumerator_12315.hasCurrentObject () && enumerator_12380.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_12380.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12315.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_12380.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12380.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12498 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)) ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12498) ;
          inCompiler->emitSemanticError (enumerator_12315.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12498, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_13023 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_12315.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_13023, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 257)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_12380.current_mFormalArgumentType (HERE), var_exp_13023.readProperty_mResultType (), enumerator_12315.current_mEndOfExpressionLocation (HERE), var_exp_13023, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
      }
      var_constructorEffectiveParameterList_11736.addAssign_operation (var_exp_13023  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
      enumerator_12315.gotoNextObject () ;
      enumerator_12380.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = object ;
  const GALGAS_templateConstructorAST temp_22 = object ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10823, temp_21.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10549, temp_22.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11736, var_hasCompilerArgument_10855  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 268)) ;
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
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 287)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_14946 ;
  const GALGAS_templateAndOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_14946, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 301)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15172 ;
  const GALGAS_templateAndOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_15172, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 308)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_15247 = var_leftExpression_14946.readProperty_mResultType () ;
  {
  const GALGAS_templateAndOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_15247, var_rightExpression_15172.readProperty_mResultType (), var_leftType_15247.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 319)).getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 319)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_15172, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 316)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_15247, temp_3.readProperty_mOperatorLocation (), var_leftExpression_14946, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 329)), var_rightExpression_15172  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 325)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_16273 ;
  const GALGAS_templateOrOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_16273, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 343)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16499 ;
  const GALGAS_templateOrOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_16499, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 350)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_16574 = var_leftExpression_16273.readProperty_mResultType () ;
  {
  const GALGAS_templateOrOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_16574, var_rightExpression_16499.readProperty_mResultType (), var_leftType_16574.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 361)).getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 361)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_16499, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 358)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_16574, temp_3.readProperty_mOperatorLocation (), var_leftExpression_16273, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 371)), var_rightExpression_16499  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 367)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_17599 ;
  const GALGAS_templateXorOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_17599, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 385)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17825 ;
  const GALGAS_templateXorOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_17825, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 392)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_17900 = var_leftExpression_17599.readProperty_mResultType () ;
  {
  const GALGAS_templateXorOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_17900, var_rightExpression_17825.readProperty_mResultType (), var_leftType_17900.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 403)).getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 403)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_17825, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 400)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_17900, temp_3.readProperty_mOperatorLocation (), var_leftExpression_17599, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 413)), var_rightExpression_17825  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 409)) ;
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
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 426)) ;
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
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 437)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                   extensionMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s_19773 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = object ;
  cEnumerator_stringlist enumerator_19792 (temp_0.readProperty_mLiteralStringList (), kENUMERATION_UP) ;
  while (enumerator_19792.hasCurrentObject ()) {
    var_s_19773.plusAssign_operation(enumerator_19792.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 450)) ;
    enumerator_19792.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19773  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 452)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  const GALGAS_templateLiteralUIntExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralUIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 463)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  const GALGAS_templateLiteralSIntExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralSIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 477)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 491)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 505)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  const GALGAS_templateLiteralCharExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralCharExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 519)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 532)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_24050 ;
  const GALGAS_templateNotOperatorAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_24050, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 548)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_24120 = var_expression_24050.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_24120.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 556)).getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 556)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 556)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_24120.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 557)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = object ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_24120, temp_4.readProperty_mOperatorLocation (), var_expression_24050  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 562)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                   extensionMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_25071 ;
  const GALGAS_templateLogicalNegateAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_25071, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_25141 = var_expression_25071.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_25141.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 587)).getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 587)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 587)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_25141.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 589)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 589)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 588)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = object ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_25141, temp_4.readProperty_mOperatorLocation (), var_expression_25071  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 593)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                   extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTestDynamicClassAST * object = (const cPtr_templateTestDynamicClassAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTestDynamicClassAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_26109 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_26109, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 609)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_castType_26155 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 616)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_expression_26109.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 618)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 618)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMap_2D_entry var_t_26440 = var_castType_26155 ;
      GALGAS_bool var_found_26471 = GALGAS_bool (kIsEqual, var_t_26440.objectCompare (var_expression_26109.readProperty_mResultType ())) ;
      if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 622)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)).isValid ()) {
        uint32_t variant_26510 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 622)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)).uintValue () ;
        bool loop_26510 = true ;
        while (loop_26510) {
          loop_26510 = var_found_26471.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_and (var_t_26440.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).isValid () ;
          if (loop_26510) {
            loop_26510 = var_found_26471.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_and (var_t_26440.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).boolValue () ;
          }
          if (loop_26510 && (0 == variant_26510)) {
            loop_26510 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 622)) ;
          }
          if (loop_26510) {
            variant_26510 -- ;
            var_t_26440 = var_t_26440.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)) ;
            var_found_26471 = GALGAS_bool (kIsEqual, var_t_26440.objectCompare (var_expression_26109.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_26471.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = object ;
          const GALGAS_templateTestDynamicClassAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)).add_operation (var_expression_26109.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_26109.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_26109.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 632)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 632)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = object ;
  const GALGAS_templateTestDynamicClassAST temp_9 = object ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_26109, temp_9.readProperty_mTypeComparisonKind (), var_castType_26155  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 636)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTestDynamicClassAST.mSlotID,
                                                   extensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateTestDynamicClassAST_templateExpressionAnalysis (defineExtensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOptionAccessAST * object = (const cPtr_templateOptionAccessAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOptionAccessAST) ;
  const GALGAS_templateOptionAccessAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_27677 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 652)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_27677 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 653)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_27984 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_28029 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_28074 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_28121 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_28172 ;
  const GALGAS_templateOptionAccessAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_27984, var_boolOptionMap_28029, var_uintOptionMap_28074, var_stringOptionMap_28121, var_stringListOptionMap_28172, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 654)) ;
  const GALGAS_templateOptionAccessAST temp_2 = object ;
  GALGAS_bool var_found_28188 = var_boolOptionMap_28029.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 662)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_28279 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_28188.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 664)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = object ;
      var_found_28188 = var_uintOptionMap_28074.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 665)) ;
      var_returnedType_28279 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_28188.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 668)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = object ;
      var_found_28188 = var_stringOptionMap_28121.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 669)) ;
      var_returnedType_28279 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_28188.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 672)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = object ;
      var_found_28188 = var_stringListOptionMap_28172.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 673)) ;
      var_returnedType_28279 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_28188.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = object ;
          const GALGAS_templateOptionAccessAST temp_13 = object ;
          const GALGAS_templateOptionAccessAST temp_14 = object ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_28279, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27984, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 678)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_templateOptionAccessAST temp_16 = object ;
          test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_templateOptionAccessAST temp_17 = object ;
            const GALGAS_templateOptionAccessAST temp_18 = object ;
            const GALGAS_templateOptionAccessAST temp_19 = object ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27984, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 686)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_templateOptionAccessAST temp_21 = object ;
            test_20 = GALGAS_bool (kIsEqual, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_templateOptionAccessAST temp_22 = object ;
              const GALGAS_templateOptionAccessAST temp_23 = object ;
              const GALGAS_templateOptionAccessAST temp_24 = object ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27984, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 694)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_templateOptionAccessAST temp_26 = object ;
              test_25 = GALGAS_bool (kIsEqual, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_templateOptionAccessAST temp_27 = object ;
                const GALGAS_templateOptionAccessAST temp_28 = object ;
                const GALGAS_templateOptionAccessAST temp_29 = object ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27984, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 702)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_templateOptionAccessAST temp_30 = object ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 710)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringset var_s_30283 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 713)) ;
    cEnumerator_commandLineOptionMap enumerator_30310 (var_boolOptionMap_28029, kENUMERATION_UP) ;
    while (enumerator_30310.hasCurrentObject ()) {
      var_s_30283.addAssign_operation (enumerator_30310.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 715)) ;
      enumerator_30310.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30378 (var_uintOptionMap_28074, kENUMERATION_UP) ;
    while (enumerator_30378.hasCurrentObject ()) {
      var_s_30283.addAssign_operation (enumerator_30378.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 718)) ;
      enumerator_30378.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30446 (var_stringOptionMap_28121, kENUMERATION_UP) ;
    while (enumerator_30446.hasCurrentObject ()) {
      var_s_30283.addAssign_operation (enumerator_30446.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)) ;
      enumerator_30446.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = object ;
    const GALGAS_templateOptionAccessAST temp_33 = object ;
    const GALGAS_templateOptionAccessAST temp_34 = object ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_30283) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 723)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                   extensionMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFunctionCallAST * object = (const cPtr_templateFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFunctionCallAST) ;
  const GALGAS_templateFunctionCallAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_31264 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_31264 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)) ;
  }
  GALGAS_functionSignature var_functionSignature_31568 ;
  GALGAS_unifiedTypeMap_2D_entry var_resultType_31610 ;
  GALGAS_bool var_isInternal_31636 ;
  const GALGAS_templateFunctionCallAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_31568, var_resultType_31610, var_isInternal_31636, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 743)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_31636.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_31713 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 751)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 752)).objectCompare (var_procDeclarationLocation_31713.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 752)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_31713.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_31568.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 757)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 757)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = object ;
      const GALGAS_templateFunctionCallAST temp_11 = object ;
      const GALGAS_templateFunctionCallAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (var_functionSignature_31568.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 759)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 760)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 760)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 760)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 758)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_32452 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 764)) ;
    const GALGAS_templateFunctionCallAST temp_14 = object ;
    cEnumerator_functionSignature enumerator_32541 (var_functionSignature_31568, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_32618 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_32541.hasCurrentObject () && enumerator_32618.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_32842 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_32618.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_32842, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 766)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_32541.current_mFormalArgumentType (HERE), var_expression_32842.readProperty_mResultType (), enumerator_32618.current_mEndOfExpressionLocation (HERE), var_expression_32842, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 772)) ;
      }
      var_semanticExpressionListForGeneration_32452.addAssign_operation (var_expression_32842  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 773)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_32541.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_32618.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_32541.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_32541.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_33118 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_33118) ;
          inCompiler->emitSemanticError (enumerator_32618.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_33118, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)) ;
        }
      }
      enumerator_32541.gotoNextObject () ;
      enumerator_32618.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = object ;
    const GALGAS_templateFunctionCallAST temp_20 = object ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_31610, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_32452  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                   extensionMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateExtensionTemplateCallAST * object = (const cPtr_templateExtensionTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateExtensionTemplateCallAST) ;
  const GALGAS_templateExtensionTemplateCallAST temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 798)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST.mSlotID,
                                                   extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateVarInExpressionAST * object = (const cPtr_templateVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateVarInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_35033 ;
  GALGAS_string var_sourceVariableCppName_35060 ;
  const GALGAS_templateVarInExpressionAST temp_0 = object ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_35033, var_sourceVariableCppName_35060, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 813)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_35033, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_35060, var_sourceVariableCppName_35060  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 814)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                   extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_35984 ;
  const GALGAS_templateAddOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_35984, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 832)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_36210 ;
  const GALGAS_templateAddOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_36210, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 839)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_36285 = var_leftExpression_35984.readProperty_mResultType () ;
  {
  const GALGAS_templateAddOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_36285, var_rightExpression_36210.readProperty_mResultType (), var_leftType_36285.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 850)).getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 850)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_36210, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 847)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_36285, temp_3.readProperty_mOperatorLocation (), var_leftExpression_35984, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("templateAnalysis.galgas", 860)), var_rightExpression_36210  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 856)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                   extensionMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_37473 ;
  const GALGAS_templateSubOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_37473, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 876)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37699 ;
  const GALGAS_templateSubOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_37699, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 883)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_37774 = var_leftExpression_37473.readProperty_mResultType () ;
  {
  const GALGAS_templateSubOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_37774, var_rightExpression_37699.readProperty_mResultType (), var_leftType_37774.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 894)).getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 894)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_37699, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 891)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_37774, temp_3.readProperty_mOperatorLocation (), var_leftExpression_37473, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("templateAnalysis.galgas", 904)), var_rightExpression_37699  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 900)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                   extensionMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_38974 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_38974, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 920)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_39200 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_39200, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 927)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_39275 = var_leftExpression_38974.readProperty_mResultType () ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_39275, var_rightExpression_39200.readProperty_mResultType (), var_leftType_39275.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 938)).getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 938)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_39200, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 935)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_39275, temp_3.readProperty_mOperatorLocation (), var_leftExpression_38974, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 948)), var_rightExpression_39200  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                   extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_40476 ;
  const GALGAS_templateDivideOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_40476, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 964)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40702 ;
  const GALGAS_templateDivideOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_40702, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 971)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_40777 = var_leftExpression_40476.readProperty_mResultType () ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_40777, var_rightExpression_40702.readProperty_mResultType (), var_leftType_40777.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 982)).getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 982)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_40702, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 979)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_40777, temp_3.readProperty_mOperatorLocation (), var_leftExpression_40476, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 992)), var_rightExpression_40702  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 988)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                   extensionMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_41976 ;
  const GALGAS_templateModuloOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_41976, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1008)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_42202 ;
  const GALGAS_templateModuloOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_42202, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1015)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_42277 = var_leftExpression_41976.readProperty_mResultType () ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_42277, var_rightExpression_42202.readProperty_mResultType (), var_leftType_42277.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1026)).getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1026)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_42202, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1023)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_42277, temp_3.readProperty_mOperatorLocation (), var_leftExpression_41976, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1036)), var_rightExpression_42202  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                   extensionMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_43436 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_43436, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1052)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_43506 = var_expression_43436.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_43506.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1060)).getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1060)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1060)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_43506.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1062)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1062)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1062)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1061)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = object ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_43506, temp_4.readProperty_mOperatorLocation (), var_expression_43436  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1066)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                   extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_44748 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_44748, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1084)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_44822 = var_expression_44748.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, var_type_44822.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1092)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 1092)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = var_type_44822.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1092)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1092)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1092)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1093)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_45060 = var_type_44822.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1095)) ;
  GALGAS_bool var_isPublic_45144 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = object ;
  GALGAS_bool joker_45146 ; // Joker input parameter
  var_propertyMap_45060.method_searchKey (temp_5.readProperty_mStructFieldName (), var_isPublic_45144, joker_45146, var_type_44822, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1096)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isPublic_45144.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1097)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1098)) ;
    }
  }
  const GALGAS_structFieldAccessTemplateExpressionAST temp_9 = object ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_44822, temp_9.readProperty_mOperatorLocation (), var_expression_44748, temp_10.readProperty_mStructFieldName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1101)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                   extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_46234 ;
  const GALGAS_templateEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_46234, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1120)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_46464 ;
  const GALGAS_templateEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_46464, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1127)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_46539 = var_leftExpression_46234.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_46606 = var_rightExpression_46464.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_46539.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1136)).readProperty_string ().objectCompare (var_rightType_46606.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1136)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_46539.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).add_operation (var_rightType_46606.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1137)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_46234, GALGAS_comparison::constructor_equal (SOURCE_FILE ("templateAnalysis.galgas", 1146)), var_rightExpression_46464  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1142)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                   extensionMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_47760 ;
  const GALGAS_templateNonEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_47760, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1161)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47990 ;
  const GALGAS_templateNonEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_47990, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1168)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_48065 = var_leftExpression_47760.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_48132 = var_rightExpression_47990.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_48065.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1177)).readProperty_string ().objectCompare (var_rightType_48132.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1177)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateNonEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_48065.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)).add_operation (var_rightType_48132.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateNonEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_47760, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1187)), var_rightExpression_47990  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1183)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                   extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_49288 ;
  const GALGAS_templateStrictInfTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_49288, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1202)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_49518 ;
  const GALGAS_templateStrictInfTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_49518, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_49593 = var_leftExpression_49288.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_49660 = var_rightExpression_49518.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_49593.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1218)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1218)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1218)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictInfTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_49593.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1219)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_49593.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1222)).objectCompare (var_rightType_49660.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1222)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictInfTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_49593.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (var_rightType_49660.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1223)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictInfTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_49288, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1232)), var_rightExpression_49518  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1228)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                   extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_51011 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_51011, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1247)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51241 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_51241, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1254)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_51316 = var_leftExpression_51011.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_51383 = var_rightExpression_51241.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_51316.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1263)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1263)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1263)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateInfOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_51316.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1265)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1265)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1264)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_51316.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)).objectCompare (var_rightType_51383.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateInfOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_51316.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)).add_operation (var_rightType_51383.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1268)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateInfOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_51011, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1277)), var_rightExpression_51241  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1273)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_52738 ;
  const GALGAS_templateStrictSupTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_52738, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1292)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_52968 ;
  const GALGAS_templateStrictSupTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_52968, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_53043 = var_leftExpression_52738.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_53110 = var_rightExpression_52968.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_53043.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1308)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1308)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1308)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictSupTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53043.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_53043.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)).objectCompare (var_rightType_53110.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictSupTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53043.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)).add_operation (var_rightType_53110.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1313)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictSupTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_52738, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1322)), var_rightExpression_52968  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1318)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                   extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_54463 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_54463, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1337)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_54693 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_54693, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1344)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_54768 = var_leftExpression_54463.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_54835 = var_rightExpression_54693.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_54768.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1353)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1353)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1353)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateSupOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_54768.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1355)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1355)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1355)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1354)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_54768.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1357)).objectCompare (var_rightType_54835.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1357)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateSupOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_54768.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)).add_operation (var_rightType_54835.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1358)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateSupOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_54463, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1367)), var_rightExpression_54693  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1363)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_56197 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_56197, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1382)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_56427 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_56427, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1389)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_56502 = var_leftExpression_56197.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_56569 = var_rightExpression_56427.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_56502.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1398)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1398)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1398)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_56502.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_56569.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1402)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_56569.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1404)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1404)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1404)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1403)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_56502, temp_8.readProperty_mOperatorLocation (), var_leftExpression_56197, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1412)), var_rightExpression_56427  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1408)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                   extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_57841 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_57841, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1427)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_58071 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_58071, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1434)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_58146 = var_leftExpression_57841.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_58213 = var_rightExpression_58071.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_58146.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1443)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1443)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1443)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_58146.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1445)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1445)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1445)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_58213.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1447)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_58213.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1449)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1449)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1448)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_58146, temp_8.readProperty_mOperatorLocation (), var_leftExpression_57841, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1457)), var_rightExpression_58071  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1453)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                   extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                              const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                              GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_59957 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_59957.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((const cPtr_templateInstructionAST *) enumerator_59957.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1485)) ;
    enumerator_59957.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  const GALGAS_templateInstructionStringAST temp_0 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (temp_0.readProperty_mTemplateString ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1502))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1502)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                    extensionMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_61232 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_61232, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1513)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_61232.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1519)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression_61232.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_61232  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1522))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1522)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                    extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_62044 ;
  const GALGAS_templateBlockInstructionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_62044, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1533)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_62044.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1539)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateBlockInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression_62044.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_62239 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1542)) ;
  {
  const GALGAS_templateBlockInstructionAST temp_4 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.readProperty_mBlockInstructionList (), var_blockInstructionList_62239, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1543)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_5 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_62044, temp_5.readProperty_mLocation (), var_blockInstructionList_62239  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1550))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1550)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                    extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1561))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1561)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                  const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1572))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1572)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_64053 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1584)) ;
  const GALGAS_templateInstructionIfAST temp_0 = object ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_64140 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_64140.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_64338 ;
    callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_64140.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_64338, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1586)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_expression_64338.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1592)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_64338.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression_64338.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_64551 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1595)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_64140.current_mInstructionList (HERE), var_instructionList_64551, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1596)) ;
    }
    var_templateInstructionIfBranchList_64053.addAssign_operation (var_expression_64338, var_instructionList_64551  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)) ;
    enumerator_64140.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_64882 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1606)) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_64882, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1607)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_64053, var_elseInstructionList_64882  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1615))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1615)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                    extensionMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_1782 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1782.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((const cPtr_templateInstructionForGeneration *) enumerator_1782.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_1782.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringForGeneration * object = (const cPtr_templateInstructionStringForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringForGeneration) ;
  const GALGAS_templateInstructionStringForGeneration temp_0 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                               extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionForGeneration * object = (const cPtr_templateInstructionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionForGeneration) ;
  GALGAS_string var_cppName_3025 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3025, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 66)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName_3025, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                               extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionForGeneration * object = (const cPtr_templateBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionForGeneration) ;
  GALGAS_string var_indendationVarCppName_3635 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 79)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                               extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 105)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                       GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 117)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfForGeneration * object = (const cPtr_templateInstructionIfForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfForGeneration) ;
  const GALGAS_templateInstructionIfForGeneration temp_0 = object ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_5661 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_5661.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_5872 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_5661.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_5872, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 130)) ;
    GALGAS_string var_testVar_5897 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 131)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)).add_operation (var_ifVarCppName_5872, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_5661.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    }
    enumerator_5661.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = object ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_6806 (temp_2.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_6806.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)) ;
    enumerator_6806.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                               extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_6630 ;
  const GALGAS_templateInstructionForeachAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_6630, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 196)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6725 = var_expression_6630.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 203)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_6725.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 204)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6630.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (var_expression_6630.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7027 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 208)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7027, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 209)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = object ;
  GALGAS_string var_enumeratorCppName_7301 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 217)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 217)) ;
  GALGAS_templateVariableMap var_doVariableMap_7395 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = object ;
  const GALGAS_templateInstructionForeachAST temp_6 = object ;
  GALGAS_string var_cppIndexVarName_7458 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 219)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 219)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 219)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = object ;
      var_doVariableMap_7395.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7458, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 222)) ;
      }
    }
  }
  switch (object->mProperty_mEnumeratedObjectProperties.enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::kNotBuilt:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_implicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit * extractPtr_8567 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_string extractedValue_7833_prefix = extractPtr_8567->mAssociatedValue0 ;
      const GALGAS_location extractedValue_7861_remplacementRange = extractPtr_8567->mAssociatedValue1 ;
      GALGAS_string var_suggestion_7883 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_7929 (var_enumerationDescriptor_6725, kENUMERATION_UP) ;
      while (enumerator_7929.hasCurrentObject ()) {
        {
        var_doVariableMap_7395.setter_insertKey (GALGAS_lstring::constructor_new (extractedValue_7833_prefix.add_operation (enumerator_7929.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)), var_expression_6630.readProperty_mLocation ()  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)), enumerator_7929.current_mEnumeratedType (HERE), var_enumeratorCppName_7301.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 232)).add_operation (enumerator_7929.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 232)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 229)) ;
        }
        var_suggestion_7883.plusAssign_operation(extractedValue_7833_prefix.add_operation (enumerator_7929.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)) ;
        if (enumerator_7929.hasNextObject ()) {
          var_suggestion_7883.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)) ;
        }
        enumerator_7929.gotoNextObject () ;
      }
      var_suggestion_7883.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_suggestion_7883) ;
          inCompiler->emitSemanticError (extractedValue_7861_remplacementRange, GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray11  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 240)) ;
        }
      }
    }
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_explicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit * extractPtr_9303 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_lstringlist extractedValue_8609_enumeration = extractPtr_9303->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8633_errorLocation = extractPtr_9303->mAssociatedValue1 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extractedValue_8609_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 245)).objectCompare (var_enumerationDescriptor_6725.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 245)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_8633_errorLocation, var_enumerationDescriptor_6725.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 247)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 247)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)).add_operation (extractedValue_8609_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 248)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)), fixItArray13  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 246)) ;
        }
      }
      if (kBoolFalse == test_12) {
        cEnumerator_enumerationDescriptorList enumerator_8908 (var_enumerationDescriptor_6725, kENUMERATION_UP) ;
        cEnumerator_lstringlist enumerator_8967 (extractedValue_8609_enumeration, kENUMERATION_UP) ;
        while (enumerator_8908.hasCurrentObject () && enumerator_8967.hasCurrentObject ()) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = GALGAS_bool (kIsNotEqual, enumerator_8967.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              {
              var_doVariableMap_7395.setter_insertKey (enumerator_8967.current_mValue (HERE), enumerator_8908.current_mEnumeratedType (HERE), var_enumeratorCppName_7301.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)).add_operation (enumerator_8908.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 253)) ;
              }
            }
          }
          enumerator_8908.gotoNextObject () ;
          enumerator_8967.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_9333 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7395  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 262)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_9490 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 266)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_15 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9333, temp_15.readProperty_mDoInstructionList (), var_doInstructionList_9490, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 267)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_9766 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 275)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_16.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9766, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 276)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10048 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 284)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_17.readProperty_mAfterInstructionList (), var_afterInstructionList_10048, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 285)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_18 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (temp_18.readProperty_mIsAscending (), var_expression_6630, var_enumeratorCppName_7301, var_beforeInstructionList_7027, var_doInstructionList_9490, var_cppIndexVarName_7458, var_betweenInstructionList_9766, var_afterInstructionList_10048  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 293))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 293)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                    extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachForGeneration * object = (const cPtr_templateInstructionForeachForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachForGeneration) ;
  GALGAS_string var_foreachVarCppName_11888 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11888, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 329)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 332)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 332)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_11888, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 335)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 335)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 336)) ;
  }
  const GALGAS_templateInstructionForeachForGeneration temp_4 = object ;
  const GALGAS_templateInstructionForeachForGeneration temp_5 = object ;
  const GALGAS_templateInstructionForeachForGeneration temp_6 = object ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = temp_6.readProperty_mIsAscending ().boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_UP") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_DOWN") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (temp_4.readProperty_mExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (var_foreachVarCppName_11888, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_templateInstructionForeachForGeneration temp_10 = object ;
    const GALGAS_templateInstructionForeachForGeneration temp_11 = object ;
    test_9 = GALGAS_bool (kIsStrictSup, temp_10.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 340)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 340)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_templateInstructionForeachForGeneration temp_12 = object ;
      const GALGAS_templateInstructionForeachForGeneration temp_13 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_templateInstructionForeachForGeneration temp_15 = object ;
    test_14 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 343)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_templateInstructionForeachForGeneration temp_16 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_17 = object ;
      routine_templateCodeGenerationForListInstruction (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 354)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 355)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_18 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 358)) ;
  }
  {
  const GALGAS_templateInstructionForeachForGeneration temp_19 = object ;
  routine_templateCodeGenerationForListInstruction (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateInstructionForeachForGeneration temp_21 = object ;
    test_20 = GALGAS_bool (kIsStrictSup, temp_21.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 369)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateInstructionForeachForGeneration temp_22 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (temp_22.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 371)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_23 = object ;
      routine_templateCodeGenerationForListInstruction (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 380)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_templateInstructionForeachForGeneration temp_25 = object ;
    test_24 = GALGAS_bool (kIsStrictSup, temp_25.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 384)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_templateInstructionForeachForGeneration temp_26 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_26.readProperty_mIndexCppName ().add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 385)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_27 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_27.readProperty_mEnumeratorCppName ().add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 388)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 389)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_templateInstructionForeachForGeneration temp_29 = object ;
    test_28 = GALGAS_bool (kIsStrictSup, temp_29.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 392)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_templateInstructionForeachForGeneration temp_30 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 393)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 393)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_31 = object ;
      routine_templateCodeGenerationForListInstruction (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 403)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 404)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 407)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 408)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                               extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_4471 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_switchExpression_4471, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 124)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_switchExpression_4471.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 130)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 130)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_switchExpression_4471.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (var_switchExpression_4471.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)), fixItArray2  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_4737 = var_switchExpression_4471.readProperty_mResultType ().getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 134)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_4838 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-switch-instruction.galgas", 135)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_4957 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 137)) ;
  const GALGAS_templateInstructionSwitchAST temp_3 = object ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_5041 (temp_3.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_5041.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5177 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
    GALGAS_bool var_firstConstant_5210 = GALGAS_bool (true) ;
    GALGAS_templateAnalysisContext var_analysisContext_5241 = constinArgument_inAnalysisContext ;
    cEnumerator_lstringlist enumerator_5278 (enumerator_5041.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_5278.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_enumConstantMap_4737.getter_hasKey (enumerator_5278.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_constantsNamedInSwitchInstruction_4838.getter_hasKey (enumerator_5278.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 144)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)), fixItArray6  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 145)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_4838.addAssign_operation (enumerator_5278.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 148)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5704 ;
          GALGAS_uint joker_5654 ; // Joker input parameter
          var_enumConstantMap_4737.method_searchKey (enumerator_5278.current_mValue (HERE), joker_5654, var_associatedTypeList_5704, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 149)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 150)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5041.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 150)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 150)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)), fixItArray8  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 151)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5041.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)), fixItArray10  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 156)).objectCompare (enumerator_5041.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 156)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string temp_12 ;
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 159)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    temp_12 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_13) {
                    temp_12 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 158)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)), fixItArray14  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)) ;
                }
              }
              if (kBoolFalse == test_11) {
                GALGAS_uint var_associatedValueIndex_6438 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_6463 (var_associatedTypeList_5704, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_6534 (enumerator_5041.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_6463.hasCurrentObject () && enumerator_6534.hasCurrentObject ()) {
                  enumGalgasBool test_15 = kBoolTrue ;
                  if (kBoolTrue == test_15) {
                    test_15 = GALGAS_bool (kIsNotEqual, enumerator_6534.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsNotEqual, enumerator_6463.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (enumerator_6534.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (enumerator_6534.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (enumerator_6463.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)), fixItArray17  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_18 = kBoolTrue ;
                  if (kBoolTrue == test_18) {
                    test_18 = var_firstConstant_5210.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6534.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 168)).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      GALGAS_string var_cppName_6937 = GALGAS_string ("extractedValue_").add_operation (enumerator_6534.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (enumerator_6534.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)) ;
                      var_extractedAssociatedValuesForGeneration_5177.addAssign_operation (enumerator_6463.current_mType (HERE), var_cppName_6937, var_associatedValueIndex_6438  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)) ;
                      {
                      var_analysisContext_5241.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_6534.current_mExtractedValueName (HERE), enumerator_6463.current_mType (HERE), var_cppName_6937, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)) ;
                      }
                    }
                  }
                  var_associatedValueIndex_6438.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 173)) ;
                  enumerator_6463.gotoNextObject () ;
                  enumerator_6534.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (var_switchExpression_4471.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)), fixItArray19  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 177)) ;
      }
      var_firstConstant_5210 = GALGAS_bool (false) ;
      enumerator_5278.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_7564 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 182)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5241, enumerator_5041.current_mInstructionList (HERE), var_instructionList_7564, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 183)) ;
    }
    var_templateInstructionSwitchBranchList_4957.addAssign_operation (enumerator_5041.current_mConstantList (HERE), var_extractedAssociatedValuesForGeneration_5177, enumerator_5041.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 193)), var_instructionList_7564  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 190)) ;
    enumerator_5041.gotoNextObject () ;
  }
  GALGAS_stringset var_forgottenConstants_7991 = var_enumConstantMap_4737.getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 197)).substract_operation (var_constantsNamedInSwitchInstruction_4838, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 197)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_7991.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 198)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_string var_s_8113 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_8131 (var_forgottenConstants_7991, kENUMERATION_UP) ;
      while (enumerator_8131.hasCurrentObject ()) {
        var_s_8113.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_8131.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 201)) ;
        enumerator_8131.gotoNextObject () ;
      }
      const GALGAS_templateInstructionSwitchAST temp_21 = object ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mSwitchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8113, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 203)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_4471.readProperty_mResultType (), var_switchExpression_4471, var_templateInstructionSwitchBranchList_4957  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                    extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchForGeneration * object = (const cPtr_templateInstructionSwitchForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchForGeneration) ;
  GALGAS_string var_switchVarCppName_10069 ;
  const GALGAS_templateInstructionSwitchForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_10069, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_10069, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 251)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 251)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_2 = object ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_10416 (temp_2.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_10416.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10481 (enumerator_10416.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10481.hasCurrentObject ()) {
      const GALGAS_templateInstructionSwitchForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)).add_operation (enumerator_10481.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)) ;
      enumerator_10481.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_10416.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 262)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateInstructionSwitchForGeneration temp_5 = object ;
        GALGAS_string var_type_10852 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (temp_5.readProperty_mEnumType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)).add_operation (enumerator_10416.current_mConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)) ;
        GALGAS_string var_varPtr_11008 = GALGAS_string ("extractPtr_").add_operation (enumerator_10416.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_10852, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (var_varPtr_11008, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (var_type_10852, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (var_switchVarCppName_10069, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_11207 (enumerator_10416.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_11207.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_11207.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (enumerator_11207.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (var_varPtr_11008, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (enumerator_11207.current_mIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)) ;
          enumerator_11207.gotoNextObject () ;
        }
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, enumerator_10416.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 272)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction (enumerator_10416.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 274)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 285)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 286)) ;
    }
    enumerator_10416.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 289)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                               extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_outLexicalTypeMap ; // Returned variable
  result_outLexicalTypeMap = GALGAS_lexicalTypeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 488)) ;
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)) ;
  }
//---
  return result_outLexicalTypeMap ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (NULL,
                                                                 releaseOnceFunctionResult_buildLexicalTypeMap) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                       const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                       GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_20980 (constinArgument_inLexicalAttributeList, kENUMERATION_UP) ;
  while (enumerator_20980.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_20980.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_lexicalTypeEnum var_lexicalType_21145 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_20980.current_mTypeName (HERE), var_lexicalType_21145, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 517)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_20980.current_mName (HERE), var_lexicalType_21145, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 518)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_m_21237 = GALGAS_string::makeEmptyString () ;
      var_m_21237.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_20980.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)) ;
      cEnumerator_lexicalTypeMap enumerator_21353 (constinArgument_inLexicalTypeMap, kENUMERATION_UP) ;
      while (enumerator_21353.hasCurrentObject ()) {
        var_m_21237.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_21353.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 523)) ;
        if (enumerator_21353.hasNextObject ()) {
          var_m_21237.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 525)) ;
        }
        enumerator_21353.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_20980.current_mTypeName (HERE).readProperty_location (), var_m_21237, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 527)) ;
    }
    enumerator_20980.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis (const GALGAS_lexicalFunctionListAST constinArgument_inLexicalFunctionListAST,
                                                 GALGAS_stringset & outArgument_outUnicodeTestFunctions,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  cEnumerator_lexicalFunctionListAST enumerator_7639 (constinArgument_inLexicalFunctionListAST, kENUMERATION_UP) ;
  while (enumerator_7639.hasCurrentObject ()) {
    callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) enumerator_7639.current (HERE).readProperty_mLexicalExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 180)) ;
    enumerator_7639.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 187)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 188)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 189)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 190)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 191)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 192)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 193)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 194)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
  GALGAS_bool var_progress_8088 = GALGAS_bool (true) ;
  GALGAS_lexicalFunctionListAST var_lexicalFunctionListAST_8124 = constinArgument_inLexicalFunctionListAST ;
  if (constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).isValid ()) {
    uint32_t variant_8158 = constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).uintValue () ;
    bool loop_8158 = true ;
    while (loop_8158) {
      loop_8158 = var_progress_8088.isValid () ;
      if (loop_8158) {
        loop_8158 = var_progress_8088.boolValue () ;
      }
      if (loop_8158 && (0 == variant_8158)) {
        loop_8158 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)) ;
      }
      if (loop_8158) {
        variant_8158 -- ;
        var_progress_8088 = GALGAS_bool (false) ;
        GALGAS_lexicalFunctionListAST var_temporaryLexicalFunctionListAST_8277 = var_lexicalFunctionListAST_8124 ;
        var_lexicalFunctionListAST_8124 = GALGAS_lexicalFunctionListAST::constructor_emptyList (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 202)) ;
        cEnumerator_lexicalFunctionListAST enumerator_8393 (var_temporaryLexicalFunctionListAST_8277, kENUMERATION_UP) ;
        while (enumerator_8393.hasCurrentObject ()) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = outArgument_outUnicodeTestFunctions.getter_hasKey (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_string () COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 204)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Unicode test function already defined"), fixItArray2  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 205)) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_8393.current (HERE).readProperty_mLexicalExpression ().ptr (), outArgument_outUnicodeTestFunctions, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 206)).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_outUnicodeTestFunctions.addAssign_operation (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_string ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 207)) ;
                var_progress_8088 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_3) {
              var_temporaryLexicalFunctionListAST_8277.addAssign_operation (enumerator_8393.current (HERE).readProperty_mFunctionName (), enumerator_8393.current (HERE).readProperty_mLexicalExpression ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 210)) ;
            }
          }
          enumerator_8393.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_lexicalFunctionListAST enumerator_8955 (var_lexicalFunctionListAST_8124, kENUMERATION_UP) ;
  while (enumerator_8955.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (enumerator_8955.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Circular definition of this lexical Unicode test function"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 215)) ;
    enumerator_8955.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionOrExpressionAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 228)) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                              extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCallAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                              extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCallAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCharacterMatchAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCharacterIntervalMatchAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * object = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_1 = object ;
    const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_2 = object ;
    test_0 = GALGAS_bool (kIsStrictInf, temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 245)).objectCompare (temp_2.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 245)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mUpperBound ().readProperty_location (), GALGAS_string ("Upper bound code point should be greater or equal to lower bound code point"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 246)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionOrExpressionAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                    const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  result_result = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 261)).operator_and (callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 262)) COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 261)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                                         extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCallAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionCallAST * object = (const cPtr_lexicalFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCallAST) ;
  const GALGAS_lexicalFunctionCallAST temp_0 = object ;
  result_result = constinArgument_inDefinedUnicodeFunctionSet.getter_hasKey (temp_0.readProperty_mCalledFunctionName ().readProperty_string () COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 270)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterMatchAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                                      const GALGAS_stringset /* constinArgument_inDefinedUnicodeFunctionSet */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterIntervalMatchAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                                              const GALGAS_stringset /* constinArgument_inDefinedUnicodeFunctionSet */,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionOrExpressionAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  result_result = callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 298)) ;
  result_result.plusAssign_operation(GALGAS_string (" ||\n"
    "         "), inCompiler  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 299)) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  result_result.plusAssign_operation(callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 300)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                                        extensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCallAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCallAST * object = (const cPtr_lexicalFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCallAST) ;
  const GALGAS_lexicalFunctionCallAST temp_0 = object ;
  result_result = temp_0.readProperty_mCalledFunctionName ().readProperty_string ().add_operation (GALGAS_string (" (inUnicodeCharacter)"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 306)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterMatchAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCharacterMatchAST * object = (const cPtr_lexicalFunctionCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterMatchAST) ;
  const GALGAS_lexicalFunctionCharacterMatchAST temp_0 = object ;
  result_result = GALGAS_string ("(").add_operation (temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)).add_operation (GALGAS_string (" == UNICODE_VALUE (inUnicodeCharacter))"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterIntervalMatchAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * object = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_0 = object ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_1 = object ;
  result_result = GALGAS_string ("((").add_operation (temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)).add_operation (GALGAS_string (" <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= "), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)).add_operation (temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 320)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 319)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 320)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap (GALGAS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GALGAS_lexicalRoutineMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 36)) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 38)) ;
  GALGAS_stringlist var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 39)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 40)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 41)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 42)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 43)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 44)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 54)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 55)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 56)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 57)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), var_lexicalRoutineFormalArgumentList_2055, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 70)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 67)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("resetString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), temp_0, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 82)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 95)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 96)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 97)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 105)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 106)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 107)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 108)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 116)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 117)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 118)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 119)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 127)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 128)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 129)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 130)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 131)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 139)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 140)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 141)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 142)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 143)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 151)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 152)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 153)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 154)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 155)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 156)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 164)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 165)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 166)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 167)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 168)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 169)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 178)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), var_lexicalRoutineFormalArgumentList_2055, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 179)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), var_lexicalRoutineFormalArgumentList_2055, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), var_lexicalRoutineFormalArgumentList_2055, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), var_lexicalRoutineFormalArgumentList_2055, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), var_lexicalRoutineFormalArgumentList_2055, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 221)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 227)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229)), var_lexicalRoutineFormalArgumentList_2055, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 228)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 237)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  temp_6.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), var_lexicalRoutineFormalArgumentList_2055, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 246)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 247)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 250)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 251)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 260)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 261)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 262)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 263)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 264)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 272)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 273)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 275)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 276)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 277)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 285)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 286)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 287)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 288)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 289)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 290)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 299)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), var_lexicalRoutineFormalArgumentList_2055, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 300)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 308)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 309)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 311)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 312)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 313)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 322)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 323)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 324)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 325)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 326)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 334)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 335)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 336)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 337)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 338)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 339)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 347)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 348)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 349)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 350)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 351)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 352)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 360)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 361)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 362)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 363)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 364)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 365)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 373)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 374)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 375)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 376)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 377)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 385)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 386)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 387)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 388)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 389)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 397)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 398)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 399)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 400)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 401)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 402)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 410)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 411)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 412)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 413)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 414)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 415)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 423)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 424)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 425)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 426)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 427)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 428)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 436)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 437)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 438)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 439)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 440)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 441)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 448)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 449)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 450)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 451)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 452)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 453)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 461)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 462)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 463)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 464)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 473)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 474)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 475)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 476)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap (GALGAS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 489)) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList_22045 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 491)) ;
  var_lexicalTypeList_22045.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 492)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toLower"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)), var_lexicalTypeList_22045, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 496)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  }
  var_lexicalTypeList_22045 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 501)) ;
  var_lexicalTypeList_22045.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 502)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 502)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toUpper"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504)), var_lexicalTypeList_22045, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 506)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 503)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_23056 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_23056, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518)) ;
  }
  GALGAS_string var_s_23139 = GALGAS_string::makeEmptyString () ;
  var_s_23139.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 521)) ;
  cEnumerator_lexicalRoutineMap enumerator_23282 (var_lexicalRoutineMap_23056, kENUMERATION_UP) ;
  while (enumerator_23282.hasCurrentObject ()) {
    var_s_23139.plusAssign_operation(enumerator_23282.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 523)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_23415 (enumerator_23282.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_23415.hasCurrentObject ()) {
      var_s_23139.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23415.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23415.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (enumerator_23415.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)) ;
      enumerator_23415.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_23637 (enumerator_23282.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
    const bool bool_0 = true ;
    if (enumerator_23637.hasCurrentObject () && bool_0) {
      var_s_23139.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 528)) ;
      while (enumerator_23637.hasCurrentObject () && bool_0) {
        var_s_23139.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_23637.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)) ;
        enumerator_23637.gotoNextObject () ;
        if (enumerator_23637.hasCurrentObject () && bool_0) {
          var_s_23139.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
        }
      }
    }
    var_s_23139.plusAssign_operation(GALGAS_string (" ;\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)) ;
    enumerator_23282.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_23881 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_23881, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 535)) ;
  }
  var_s_23139.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 537)) ;
  cEnumerator_lexicalFunctionMap enumerator_24099 (var_lexicalFunctionMap_23881, kENUMERATION_UP) ;
  while (enumerator_24099.hasCurrentObject ()) {
    var_s_23139.plusAssign_operation(enumerator_24099.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_24192 (enumerator_24099.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_24192.hasCurrentObject ()) {
      var_s_23139.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24192.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)).add_operation (enumerator_24192.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)) ;
      enumerator_24192.gotoNextObject () ;
    }
    var_s_23139.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24099.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_24099.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_23139.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_24099.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (enumerator_24099.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)) ;
      }
    }
    var_s_23139.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)) ;
    enumerator_24099.gotoNextObject () ;
  }
  var_s_23139.plusAssign_operation(GALGAS_string ("************************************************************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)) ;
  inCompiler->printMessage (var_s_23139  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 551)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                   const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  const GALGAS_lexicalOrExpressionAST temp_0 = object ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = object ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              extensionGetter_lexicalOrExpressionAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_result = GALGAS_string::makeEmptyString () ;
  result_result = GALGAS_string ("testForInputUTF32CharRange (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = object ;
  result_result.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 41)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 42)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = object ;
  result_result.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 43)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 44)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                  const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  const GALGAS_lexicalStringMatchAST temp_0 = object ;
  result_result = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 53)) ;
  const GALGAS_lexicalStringMatchAST temp_1 = object ;
  result_result.plusAssign_operation(temp_1.readProperty_mString ().readProperty_string ().getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 54)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 54)) ;
  result_result.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 55)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              extensionGetter_lexicalStringMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateConditionCode, NULL) ;

