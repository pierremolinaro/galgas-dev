#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//----------------------------------------------------------------------------------------------------------------------
// @overridingExtensionMethodAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
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
    result = mProperty_mOverridingExtensionMethodName.objectCompare (p->mProperty_mOverridingExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionMethodFormalParameterList.objectCompare (p->mProperty_mOverridingExtensionMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionMethodInstructionList.objectCompare (p->mProperty_mOverridingExtensionMethodInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfMethodLocation.objectCompare (p->mProperty_mEndOfMethodLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_overridingExtensionMethodAST::objectCompare (const GALGAS_overridingExtensionMethodAST & inOperand) const {
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

GALGAS_overridingExtensionMethodAST::GALGAS_overridingExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST::GALGAS_overridingExtensionMethodAST (const cPtr_overridingExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_bool & inAttribute_requiresSelfForAccessingProperty,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionMethodName,
                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionMethodFormalParameterList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionMethodInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_requiresSelfForAccessingProperty.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionMethodName.isValid () && inAttribute_mOverridingExtensionMethodFormalParameterList.isValid () && inAttribute_mOverridingExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_requiresSelfForAccessingProperty, inAttribute_mTypeName, inAttribute_mOverridingExtensionMethodName, inAttribute_mOverridingExtensionMethodFormalParameterList, inAttribute_mOverridingExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overridingExtensionMethodAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionMethodAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionMethodAST::readProperty_mEndOfMethodLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mEndOfMethodLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodAST::cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                      const GALGAS_location & in_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (in_requiresSelfForAccessingProperty),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionMethodName (in_mOverridingExtensionMethodName),
mProperty_mOverridingExtensionMethodFormalParameterList (in_mOverridingExtensionMethodFormalParameterList),
mProperty_mOverridingExtensionMethodInstructionList (in_mOverridingExtensionMethodInstructionList),
mProperty_mEndOfMethodLocation (in_mEndOfMethodLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;
}

void cPtr_overridingExtensionMethodAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@overridingExtensionMethodAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionMethodInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfMethodLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodAST (mProperty_mIsPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionMethodName, mProperty_mOverridingExtensionMethodFormalParameterList, mProperty_mOverridingExtensionMethodInstructionList, mProperty_mEndOfMethodLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionMethodAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionMethodAST ("overridingExtensionMethodAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST result ;
  const GALGAS_overridingExtensionMethodAST * p = (const GALGAS_overridingExtensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @overridingExtensionMethodForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingExtensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
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
    result = mProperty_mBaseTypeName.objectCompare (p->mProperty_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionMethodName.objectCompare (p->mProperty_mExtensionMethodName) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_overridingExtensionMethodForGeneration::objectCompare (const GALGAS_overridingExtensionMethodForGeneration & inOperand) const {
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

GALGAS_overridingExtensionMethodForGeneration::GALGAS_overridingExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration::GALGAS_overridingExtensionMethodForGeneration (const cPtr_overridingExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                              const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                              const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                              const GALGAS_string & inAttribute_mExtensionMethodName,
                                                                                                              const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionMethodFormalParameterList,
                                                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mExtensionMethodName, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_overridingExtensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::readProperty_mBaseTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::readProperty_mExtensionMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionMethodForGeneration::readProperty_mExtensionMethodFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overridingExtensionMethodForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionMethodForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodForGeneration::cPtr_overridingExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                          const GALGAS_string & in_mExtensionMethodName,
                                                                                          const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mBaseTypeName (in_mBaseTypeName),
mProperty_mExtensionMethodName (in_mExtensionMethodName),
mProperty_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

void cPtr_overridingExtensionMethodForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@overridingExtensionMethodForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionMethodForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ("overridingExtensionMethodForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration result ;
  const GALGAS_overridingExtensionMethodForGeneration * p = (const GALGAS_overridingExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_overridingExtensionMethodForGeneration_2D_weak::objectCompare (const GALGAS_overridingExtensionMethodForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_overridingExtensionMethodForGeneration_2D_weak::GALGAS_overridingExtensionMethodForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak & GALGAS_overridingExtensionMethodForGeneration_2D_weak::operator = (const GALGAS_overridingExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak::GALGAS_overridingExtensionMethodForGeneration_2D_weak (const GALGAS_overridingExtensionMethodForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak GALGAS_overridingExtensionMethodForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration_2D_weak::bang_overridingExtensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionMethodForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionMethodForGeneration) ;
      result = GALGAS_overridingExtensionMethodForGeneration ((cPtr_overridingExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionMethodForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2D_weak ("overridingExtensionMethodForGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak GALGAS_overridingExtensionMethodForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration_2D_weak result ;
  const GALGAS_overridingExtensionMethodForGeneration_2D_weak * p = (const GALGAS_overridingExtensionMethodForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionMethodForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @overridingExtensionSetterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
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
    result = mProperty_mOverridingExtensionSetterName.objectCompare (p->mProperty_mOverridingExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionSetterFormalParameterList.objectCompare (p->mProperty_mOverridingExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionSetterInstructionList.objectCompare (p->mProperty_mOverridingExtensionSetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSetterDeclarationLocation.objectCompare (p->mProperty_mEndOfSetterDeclarationLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_overridingExtensionSetterAST::objectCompare (const GALGAS_overridingExtensionSetterAST & inOperand) const {
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

GALGAS_overridingExtensionSetterAST::GALGAS_overridingExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST::GALGAS_overridingExtensionSetterAST (const cPtr_overridingExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_bool & inAttribute_requiresSelfForAccessingProperty,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionSetterName,
                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionSetterFormalParameterList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionSetterInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfSetterDeclarationLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_requiresSelfForAccessingProperty.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionSetterName.isValid () && inAttribute_mOverridingExtensionSetterFormalParameterList.isValid () && inAttribute_mOverridingExtensionSetterInstructionList.isValid () && inAttribute_mEndOfSetterDeclarationLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_requiresSelfForAccessingProperty, inAttribute_mTypeName, inAttribute_mOverridingExtensionSetterName, inAttribute_mOverridingExtensionSetterFormalParameterList, inAttribute_mOverridingExtensionSetterInstructionList, inAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overridingExtensionSetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionSetterAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionSetterAST::readProperty_mEndOfSetterDeclarationLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mEndOfSetterDeclarationLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterAST::cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                      const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (in_requiresSelfForAccessingProperty),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionSetterName (in_mOverridingExtensionSetterName),
mProperty_mOverridingExtensionSetterFormalParameterList (in_mOverridingExtensionSetterFormalParameterList),
mProperty_mOverridingExtensionSetterInstructionList (in_mOverridingExtensionSetterInstructionList),
mProperty_mEndOfSetterDeclarationLocation (in_mEndOfSetterDeclarationLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;
}

void cPtr_overridingExtensionSetterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@overridingExtensionSetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionSetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSetterDeclarationLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterAST (mProperty_mIsPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionSetterName, mProperty_mOverridingExtensionSetterFormalParameterList, mProperty_mOverridingExtensionSetterInstructionList, mProperty_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionSetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionSetterAST ("overridingExtensionSetterAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST result ;
  const GALGAS_overridingExtensionSetterAST * p = (const GALGAS_overridingExtensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @overridingExtensionSetterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingExtensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
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
    result = mProperty_mBaseTypeName.objectCompare (p->mProperty_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterName.objectCompare (p->mProperty_mExtensionSetterName) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_overridingExtensionSetterForGeneration::objectCompare (const GALGAS_overridingExtensionSetterForGeneration & inOperand) const {
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

GALGAS_overridingExtensionSetterForGeneration::GALGAS_overridingExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration::GALGAS_overridingExtensionSetterForGeneration (const cPtr_overridingExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                              const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                              const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                              const GALGAS_string & inAttribute_mExtensionSetterName,
                                                                                                              const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionSetterFormalParameterList,
                                                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mExtensionSetterName, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_overridingExtensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::readProperty_mBaseTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::readProperty_mExtensionSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionSetterForGeneration::readProperty_mExtensionSetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overridingExtensionSetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionSetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterForGeneration::cPtr_overridingExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                          const GALGAS_string & in_mExtensionSetterName,
                                                                                          const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mBaseTypeName (in_mBaseTypeName),
mProperty_mExtensionSetterName (in_mExtensionSetterName),
mProperty_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

void cPtr_overridingExtensionSetterForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@overridingExtensionSetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mExtensionSetterName, mProperty_mExtensionSetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionSetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ("overridingExtensionSetterForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration result ;
  const GALGAS_overridingExtensionSetterForGeneration * p = (const GALGAS_overridingExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_overridingExtensionSetterForGeneration_2D_weak::objectCompare (const GALGAS_overridingExtensionSetterForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_overridingExtensionSetterForGeneration_2D_weak::GALGAS_overridingExtensionSetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak & GALGAS_overridingExtensionSetterForGeneration_2D_weak::operator = (const GALGAS_overridingExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak::GALGAS_overridingExtensionSetterForGeneration_2D_weak (const GALGAS_overridingExtensionSetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak GALGAS_overridingExtensionSetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration_2D_weak::bang_overridingExtensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionSetterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionSetterForGeneration) ;
      result = GALGAS_overridingExtensionSetterForGeneration ((cPtr_overridingExtensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionSetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2D_weak ("overridingExtensionSetterForGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak GALGAS_overridingExtensionSetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration_2D_weak result ;
  const GALGAS_overridingExtensionSetterForGeneration_2D_weak * p = (const GALGAS_overridingExtensionSetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionSetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @outputActualParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutputActualParameterExpression.objectCompare (p->mProperty_mOutputActualParameterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpressionLocation.objectCompare (p->mProperty_mEndOfExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputActualParameterAST::objectCompare (const GALGAS_outputActualParameterAST & inOperand) const {
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

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mOutputActualParameterExpression,
                                                                                  const GALGAS_location & inAttribute_mEndOfExpressionLocation
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputActualParameterExpression.isValid () && inAttribute_mEndOfExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputActualParameterExpression, inAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterAST::setter_setMOutputActualParameterExpression (GALGAS_semanticExpressionAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    p->mProperty_mOutputActualParameterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterAST::setter_setMEndOfExpressionLocation (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    p->mProperty_mEndOfExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputActualParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_outputActualParameterAST::readProperty_mOutputActualParameterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_outputActualParameterAST::readProperty_mEndOfExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                              const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                              const GALGAS_location & in_mEndOfExpressionLocation
                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mOutputActualParameterExpression (in_mOutputActualParameterExpression),
mProperty_mEndOfExpressionLocation (in_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

void cPtr_outputActualParameterAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@outputActualParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputActualParameterExpression, mProperty_mEndOfExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputActualParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterAST ("outputActualParameterAST",
                                                 & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  const GALGAS_outputActualParameterAST * p = (const GALGAS_outputActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @outputInputActualParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputInputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutputInputActualParameterName.objectCompare (p->mProperty_mOutputInputActualParameterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputInputActualParameterAST::objectCompare (const GALGAS_outputInputActualParameterAST & inOperand) const {
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

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputActualParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                            const GALGAS_lstring & inAttribute_mOutputInputActualParameterName,
                                                                                            const GALGAS_lstringlist & inAttribute_mStructAttributeList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputInputActualParameterName.isValid () && inAttribute_mStructAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputInputActualParameterName, inAttribute_mStructAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterAST::setter_setMOutputInputActualParameterName (GALGAS_lstring inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    p->mProperty_mOutputInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputActualParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputActualParameterAST::readProperty_mOutputInputActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mOutputInputActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_outputInputActualParameterAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                        const GALGAS_lstring & in_mOutputInputActualParameterName,
                                                                        const GALGAS_lstringlist & in_mStructAttributeList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mOutputInputActualParameterName (in_mOutputInputActualParameterName),
mProperty_mStructAttributeList (in_mStructAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

void cPtr_outputInputActualParameterAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@outputInputActualParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutputInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputInputActualParameterName, mProperty_mStructAttributeList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputActualParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterAST ("outputInputActualParameterAST",
                                                      & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  const GALGAS_outputInputActualParameterAST * p = (const GALGAS_outputInputActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @outputInputSingleJokerParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputInputSingleJokerParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputSingleJokerParameterAST * p = (const cPtr_outputInputSingleJokerParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputInputSingleJokerParameterAST::objectCompare (const GALGAS_outputInputSingleJokerParameterAST & inOperand) const {
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

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputSingleJokerParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (const cPtr_outputInputSingleJokerParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputSingleJokerParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputSingleJokerParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputSingleJokerParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputSingleJokerParameterAST * p = (cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputSingleJokerParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputInputSingleJokerParameterAST * p = (cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputInputSingleJokerParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputInputSingleJokerParameterAST::cPtr_outputInputSingleJokerParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputSingleJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

void cPtr_outputInputSingleJokerParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@outputInputSingleJokerParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputSingleJokerParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputSingleJokerParameterAST (mProperty_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputSingleJokerParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ("outputInputSingleJokerParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputSingleJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputSingleJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSingleJokerParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  const GALGAS_outputInputSingleJokerParameterAST * p = (const GALGAS_outputInputSingleJokerParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputSingleJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSingleJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @inputActualExistingVariableParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputActualExistingVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputActualParameterName.objectCompare (p->mProperty_mInputActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputActualExistingVariableParameterAST::objectCompare (const GALGAS_inputActualExistingVariableParameterAST & inOperand) const {
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

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualExistingVariableParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_lstring::constructor_default (HERE)
                                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualExistingVariableParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                                const GALGAS_lstring & inAttribute_mInputActualParameterName
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualExistingVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualExistingVariableParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualExistingVariableParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    p->mProperty_mInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputActualExistingVariableParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                            const GALGAS_lstring & in_mInputActualParameterName
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputActualParameterName (in_mInputActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualExistingVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

void cPtr_inputActualExistingVariableParameterAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@inputActualExistingVariableParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualExistingVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualExistingVariableParameterAST (mProperty_mActualSelector, mProperty_mInputActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualExistingVariableParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ("inputActualExistingVariableParameterAST",
                                                                & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualExistingVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualExistingVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualExistingVariableParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  const GALGAS_inputActualExistingVariableParameterAST * p = (const GALGAS_inputActualExistingVariableParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualExistingVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @inputActualSelfPropertyParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputActualSelfPropertyParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualSelfPropertyParameterAST * p = (const cPtr_inputActualSelfPropertyParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputActualSelfPropertyName.objectCompare (p->mProperty_mInputActualSelfPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputActualSelfPropertyParameterAST::objectCompare (const GALGAS_inputActualSelfPropertyParameterAST & inOperand) const {
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

GALGAS_inputActualSelfPropertyParameterAST::GALGAS_inputActualSelfPropertyParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualSelfPropertyParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                      GALGAS_lstring::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST::GALGAS_inputActualSelfPropertyParameterAST (const cPtr_inputActualSelfPropertyParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualSelfPropertyParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                        const GALGAS_lstring & inAttribute_mInputActualSelfPropertyName
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputActualSelfPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualSelfPropertyParameterAST (inAttribute_mActualSelector, inAttribute_mInputActualSelfPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualSelfPropertyParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualSelfPropertyParameterAST::setter_setMInputActualSelfPropertyName (GALGAS_lstring inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    p->mProperty_mInputActualSelfPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualSelfPropertyParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualSelfPropertyParameterAST::readProperty_mInputActualSelfPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mInputActualSelfPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputActualSelfPropertyParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputActualSelfPropertyParameterAST::cPtr_inputActualSelfPropertyParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                    const GALGAS_lstring & in_mInputActualSelfPropertyName
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputActualSelfPropertyName (in_mInputActualSelfPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualSelfPropertyParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

void cPtr_inputActualSelfPropertyParameterAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@inputActualSelfPropertyParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputActualSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualSelfPropertyParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualSelfPropertyParameterAST (mProperty_mActualSelector, mProperty_mInputActualSelfPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualSelfPropertyParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ("inputActualSelfPropertyParameterAST",
                                                            & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualSelfPropertyParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualSelfPropertyParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualSelfPropertyParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST result ;
  const GALGAS_inputActualSelfPropertyParameterAST * p = (const GALGAS_inputActualSelfPropertyParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualSelfPropertyParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @inputActualNewVariableParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputActualNewVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputOptionalActualTypeName.objectCompare (p->mProperty_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputActualParameterName.objectCompare (p->mProperty_mInputActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputActualNewVariableParameterAST::objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const {
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

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewVariableParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewVariableParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewVariableParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewVariableParameterAST::setter_setMInputOptionalActualTypeName (GALGAS_lstring inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    p->mProperty_mInputOptionalActualTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewVariableParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    p->mProperty_mInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewVariableParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mProperty_mInputActualParameterName (in_mInputActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualNewVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

void cPtr_inputActualNewVariableParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewVariableParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualNewVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewVariableParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualNewVariableParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ("inputActualNewVariableParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewVariableParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @inputActualNewConstantParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputActualNewConstantParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputOptionalActualTypeName.objectCompare (p->mProperty_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputActualParameterName.objectCompare (p->mProperty_mInputActualParameterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMarkedAsUnused.objectCompare (p->mProperty_mMarkedAsUnused) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputActualNewConstantParameterAST::objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const {
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

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewConstantParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewConstantParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMInputOptionalActualTypeName (GALGAS_lstring inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mInputOptionalActualTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMMarkedAsUnused (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mMarkedAsUnused = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::readProperty_mInputActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_inputActualNewConstantParameterAST::readProperty_mMarkedAsUnused (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewConstantParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName,
                                                                                  const GALGAS_bool & in_mMarkedAsUnused
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mProperty_mInputActualParameterName (in_mInputActualParameterName),
mProperty_mMarkedAsUnused (in_mMarkedAsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualNewConstantParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

void cPtr_inputActualNewConstantParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewConstantParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualNewConstantParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewConstantParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName, mProperty_mMarkedAsUnused COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualNewConstantParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ("inputActualNewConstantParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewConstantParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewConstantParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewConstantParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @inputSingleJokerActualParameterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputSingleJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputSingleJokerActualParameterAST::objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const {
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

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputSingleJokerActualParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputSingleJokerActualParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputSingleJokerActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputSingleJokerActualParameterAST::readProperty_mActualSelector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputSingleJokerActualParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputSingleJokerActualParameterAST:" ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputSingleJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mProperty_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputSingleJokerActualParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @inputParameterVariable reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputParameterVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterVariable) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputParameterVariable::objectCompare (const GALGAS_inputParameterVariable & inOperand) const {
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

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (void) :
GALGAS_abstractInputParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterVariable::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterVariable (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterVariable::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterVariable::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterVariable class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@inputParameterVariable:" ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterVariable type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                               & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @inputParameterDeclaredVariable reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputParameterDeclaredVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputParameterDeclaredVariable::objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const {
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

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (void) :
GALGAS_abstractInputParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterDeclaredVariable::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredVariable (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredVariable::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    p->mProperty_mActualParameterTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredVariable::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::readProperty_mActualParameterTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredVariable class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@inputParameterDeclaredVariable:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterDeclaredVariable type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                       & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @inputParameterDeclaredConstant reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputParameterDeclaredConstant::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputParameterDeclaredConstant::objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const {
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

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (void) :
GALGAS_abstractInputParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterDeclaredConstant::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredConstant (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredConstant::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    p->mProperty_mActualParameterTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredConstant::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::readProperty_mActualParameterTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredConstant class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@inputParameterDeclaredConstant:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredConstant::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterDeclaredConstant type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                       & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @externRoutineDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_externRoutineDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_externRoutineDeclarationAST::objectCompare (const GALGAS_externRoutineDeclarationAST & inOperand) const {
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

GALGAS_externRoutineDeclarationAST::GALGAS_externRoutineDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineDeclarationAST::GALGAS_externRoutineDeclarationAST (const cPtr_externRoutineDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineDeclarationAST::setter_setMRoutineName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineDeclarationAST::setter_setMFormalArgumentList (GALGAS_formalParameterListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_externRoutineDeclarationAST::readProperty_mIsInternal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externRoutineDeclarationAST::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externRoutineDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @externRoutineDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_externRoutineDeclarationAST::cPtr_externRoutineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_bool & in_mIsInternal,
                                                                    const GALGAS_lstring & in_mRoutineName,
                                                                    const GALGAS_formalParameterListAST & in_mFormalArgumentList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mIsInternal (in_mIsInternal),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mFormalArgumentList (in_mFormalArgumentList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externRoutineDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;
}

void cPtr_externRoutineDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@externRoutineDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externRoutineDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externRoutineDeclarationAST (mProperty_mIsPredefined, mProperty_mIsInternal, mProperty_mRoutineName, mProperty_mFormalArgumentList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@externRoutineDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineDeclarationAST ("externRoutineDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externRoutineDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externRoutineDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @procDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_procDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procDeclarationAST * p = (const cPtr_procDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineInstructionList.objectCompare (p->mProperty_mRoutineInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfRoutineInstructionList.objectCompare (p->mProperty_mEndOfRoutineInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_procDeclarationAST::objectCompare (const GALGAS_procDeclarationAST & inOperand) const {
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

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (void) :
GALGAS_externRoutineDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GALGAS_externRoutineDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_procDeclarationAST::setter_setMRoutineInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    p->mProperty_mRoutineInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_procDeclarationAST::setter_setMEndOfRoutineInstructionList (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    p->mProperty_mEndOfRoutineInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_procDeclarationAST::readProperty_mRoutineInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_procDeclarationAST::readProperty_mEndOfRoutineInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mEndOfRoutineInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @procDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_bool & in_mIsInternal,
                                                  const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                  const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                  const GALGAS_location & in_mEndOfRoutineInstructionList
                                                  COMMA_LOCATION_ARGS) :
cPtr_externRoutineDeclarationAST (in_mIsPredefined, in_mIsInternal, in_mRoutineName, in_mFormalArgumentList COMMA_THERE),
mProperty_mRoutineInstructionList (in_mRoutineInstructionList),
mProperty_mEndOfRoutineInstructionList (in_mEndOfRoutineInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

void cPtr_procDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@procDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mProperty_mIsPredefined, mProperty_mIsInternal, mProperty_mRoutineName, mProperty_mFormalArgumentList, mProperty_mRoutineInstructionList, mProperty_mEndOfRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@procDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                           & kTypeDescriptor_GALGAS_externRoutineDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @externFunctionDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_externFunctionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_externFunctionDeclarationAST::objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const {
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

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                               GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                          const GALGAS_formalInputParameterListAST & inAttribute_mFormalArgumentList,
                                                                                          const GALGAS_lstring & inAttribute_mResultTypeName
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mResultTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externFunctionDeclarationAST (inAttribute_mIsPredefined, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mResultTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationAST::setter_setMFormalArgumentList (GALGAS_formalInputParameterListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_externFunctionDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @externFunctionDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mFunctionName,
                                                                      const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GALGAS_lstring & in_mResultTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mFormalArgumentList (in_mFormalArgumentList),
mProperty_mResultTypeName (in_mResultTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

void cPtr_externFunctionDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@externFunctionDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mProperty_mIsPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@externFunctionDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @functionDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_functionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultVariableName.objectCompare (p->mProperty_mResultVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfFunctionInstructionList.objectCompare (p->mProperty_mEndOfFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUsefull.objectCompare (p->mProperty_mIsUsefull) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_functionDeclarationAST::objectCompare (const GALGAS_functionDeclarationAST & inOperand) const {
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

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (void) :
GALGAS_externFunctionDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GALGAS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMResultVariableName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mResultVariableName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMEndOfFunctionInstructionList (GALGAS_location inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mEndOfFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMIsUsefull (GALGAS_bool inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mIsUsefull = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_functionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionDeclarationAST::readProperty_mIsInternal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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
cPtr_externFunctionDeclarationAST (in_mIsPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName COMMA_THERE),
mProperty_mResultVariableName (in_mResultVariableName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList),
mProperty_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mProperty_mIsInternal (in_mIsInternal),
mProperty_mIsUsefull (in_mIsUsefull) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@functionDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_mIsPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                               & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_onceFunctionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultVariableName.objectCompare (p->mProperty_mResultVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfFunctionInstructionList.objectCompare (p->mProperty_mEndOfFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUsefull.objectCompare (p->mProperty_mIsUsefull) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_onceFunctionDeclarationAST::objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const {
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

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMResultVariableName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mResultVariableName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMEndOfFunctionInstructionList (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mEndOfFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMIsUsefull (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mIsUsefull = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::readProperty_mIsInternal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mFunctionName (in_mFunctionName),
mProperty_mResultTypeName (in_mResultTypeName),
mProperty_mResultVariableName (in_mResultVariableName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList),
mProperty_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mProperty_mIsInternal (in_mIsInternal),
mProperty_mIsUsefull (in_mIsUsefull) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@onceFunctionDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_mIsPredefined, mProperty_mFunctionName, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@onceFunctionDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceFileAbsolutePath.objectCompare (p->mProperty_mSourceFileAbsolutePath) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperPath.objectCompare (p->mProperty_mFilewrapperPath) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTextFileExtensionList.objectCompare (p->mProperty_mFilewrapperTextFileExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperBinaryFileExtensionList.objectCompare (p->mProperty_mFilewrapperBinaryFileExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplateList.objectCompare (p->mProperty_mFilewrapperTemplateList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperDeclarationAST::objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const {
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

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMSourceFileAbsolutePath (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mSourceFileAbsolutePath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperPath (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperTextFileExtensionList (GALGAS_lstringlist inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperTextFileExtensionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperBinaryFileExtensionList (GALGAS_lstringlist inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperBinaryFileExtensionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperTemplateList (GALGAS_filewrapperTemplateListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperTemplateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperDeclarationAST::readProperty_mIsInternal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationAST::readProperty_mSourceFileAbsolutePath (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mSourceFileAbsolutePath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperPath (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperTextFileExtensionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTextFileExtensionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperBinaryFileExtensionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperTemplateList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_filewrapperTemplateListAST () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTemplateList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mIsInternal (in_mIsInternal),
mProperty_mSourceFileAbsolutePath (in_mSourceFileAbsolutePath),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperPath (in_mFilewrapperPath),
mProperty_mFilewrapperTextFileExtensionList (in_mFilewrapperTextFileExtensionList),
mProperty_mFilewrapperBinaryFileExtensionList (in_mFilewrapperBinaryFileExtensionList),
mProperty_mFilewrapperTemplateList (in_mFilewrapperTemplateList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@filewrapperDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mProperty_mIsPredefined, mProperty_mIsInternal, mProperty_mSourceFileAbsolutePath, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, mProperty_mFilewrapperTextFileExtensionList, mProperty_mFilewrapperBinaryFileExtensionList, mProperty_mFilewrapperTemplateList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @galgas_33_SyntaxComponentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_galgas_33_SyntaxComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonterminalDeclarationList.objectCompare (p->mProperty_mNonterminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRuleList.objectCompare (p->mProperty_mRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_galgas_33_SyntaxComponentAST::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                                               GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMSyntaxComponentName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mSyntaxComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMLexiqueName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mLexiqueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMNonterminalDeclarationList (GALGAS_nonterminalDeclarationListAST inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mNonterminalDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMRuleList (GALGAS_syntaxRuleListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mRuleList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::readProperty_mSyntaxComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::readProperty_mLexiqueName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mLexiqueName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentAST::readProperty_mNonterminalDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_nonterminalDeclarationListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mNonterminalDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentAST::readProperty_mRuleList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_syntaxRuleListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mRuleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_SyntaxComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @galgas3SyntaxComponentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mSyntaxComponentName,
                                                                      const GALGAS_lstring & in_mLexiqueName,
                                                                      const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                      const GALGAS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mProperty_mRuleList (in_mRuleList),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@galgas3SyntaxComponentAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRuleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_SyntaxComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mProperty_mIsPredefined, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3SyntaxComponentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @galgas_33_GrammarComponentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_galgas_33_GrammarComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasIndexing.objectCompare (p->mProperty_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarClass.objectCompare (p->mProperty_mGrammarClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponents.objectCompare (p->mProperty_mSyntaxComponents) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartSymbolName.objectCompare (p->mProperty_mStartSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartSymbolLabelList.objectCompare (p->mProperty_mStartSymbolLabelList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUnusedNonterminalList.objectCompare (p->mProperty_mUnusedNonterminalList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_galgas_33_GrammarComponentAST::objectCompare (const GALGAS_galgas_33_GrammarComponentAST & inOperand) const {
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

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMHasIndexing (GALGAS_lbool inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mHasIndexing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMGrammarComponentName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mGrammarComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMGrammarClass (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mGrammarClass = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMSyntaxComponents (GALGAS_lstringlist inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mSyntaxComponents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMStartSymbolName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mStartSymbolName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMStartSymbolLabelList (GALGAS_nonTerminalLabelListAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mStartSymbolLabelList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMUnusedNonterminalList (GALGAS_lstringlist inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mUnusedNonterminalList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbool GALGAS_galgas_33_GrammarComponentAST::readProperty_mHasIndexing (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasIndexing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mGrammarComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mGrammarClass (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_nonTerminalLabelListAST () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_GrammarComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @galgas3GrammarComponentAST class
//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mHasIndexing (in_mHasIndexing),
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mGrammarClass (in_mGrammarClass),
mProperty_mSyntaxComponents (in_mSyntaxComponents),
mProperty_mStartSymbolName (in_mStartSymbolName),
mProperty_mStartSymbolLabelList (in_mStartSymbolLabelList),
mProperty_mUnusedNonterminalList (in_mUnusedNonterminalList),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

void cPtr_galgas_33_GrammarComponentAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@galgas3GrammarComponentAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_GrammarComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_mIsPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3GrammarComponentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticExpressionForGeneration_generateExpression> gExtensionMethodTable_semanticExpressionForGeneration_generateExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateExpression (const int32_t inClassIndex,
                                              extensionMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) {
  gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticExpressionForGeneration_generateExpression (void) {
  gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticExpressionForGeneration_generateExpression (NULL,
                                                                               freeExtensionMethod_semanticExpressionForGeneration_generateExpression) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                             GALGAS_string & io_ioGeneratedCode,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             GALGAS_string & out_outCppExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticExpressionForGeneration_generateExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.count ()) {
      f = gExtensionMethodTable_semanticExpressionForGeneration_generateExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.count ()) {
          f = gExtensionMethodTable_semanticExpressionForGeneration_generateExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
// @castInExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_castInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_castInExpressionForGeneration * p = (const cPtr_castInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
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
  if (kOperandEqual == result) {
    result = mProperty_mCastType.objectCompare (p->mProperty_mCastType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_castInExpressionForGeneration::objectCompare (const GALGAS_castInExpressionForGeneration & inOperand) const {
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

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                            const GALGAS_string & inAttribute_mTypeName,
                                                                                            const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mCastType
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mCastType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_castInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mReceiverExpression, inAttribute_mTypeName, inAttribute_mCastType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInExpressionForGeneration::setter_setMTypeName (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInExpressionForGeneration::setter_setMCastType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    p->mProperty_mCastType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_castInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_string & in_mTypeName,
                                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mCastType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mCastType (in_mCastType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

void cPtr_castInExpressionForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@castInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@castInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  const GALGAS_castInExpressionForGeneration * p = (const GALGAS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @outputActualParameterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputActualParameterForGeneration * p = (const cPtr_outputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutputActualParameterExpression.objectCompare (p->mProperty_mOutputActualParameterExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputActualParameterForGeneration::objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const {
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

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mFormalArgumentType,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mOutputActualParameterExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputActualParameterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputActualParameterExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterForGeneration::setter_setMOutputActualParameterExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    p->mProperty_mOutputActualParameterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mOutputActualParameterExpression (in_mOutputActualParameterExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@outputActualParameterForGeneration:" ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputActualParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                           & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  const GALGAS_outputActualParameterForGeneration * p = (const GALGAS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexiqueDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexiqueDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHeaderContents.objectCompare (p->mProperty_mHeaderContents) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppContents.objectCompare (p->mProperty_mCppContents) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCocoaHeader.objectCompare (p->mProperty_mCocoaHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCocoaImplementation.objectCompare (p->mProperty_mCocoaImplementation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexiqueDeclarationForGeneration::objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const {
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

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mLexiqueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMHeaderContents (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mHeaderContents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMCppContents (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mCppContents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMCocoaHeader (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mCocoaHeader = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMCocoaImplementation (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mCocoaImplementation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mHeaderContents (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mHeaderContents ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mCppContents (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mCppContents ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mCocoaHeader (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mCocoaHeader ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mCocoaImplementation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mCocoaImplementation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                            const GALGAS_string & in_mImplementationCppFileName,
                                                                            const GALGAS_string & in_mLexiqueName,
                                                                            const GALGAS_string & in_mHeaderContents,
                                                                            const GALGAS_string & in_mCppContents,
                                                                            const GALGAS_string & in_mCocoaHeader,
                                                                            const GALGAS_string & in_mCocoaImplementation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mHeaderContents (in_mHeaderContents),
mProperty_mCppContents (in_mCppContents),
mProperty_mCocoaHeader (in_mCocoaHeader),
mProperty_mCocoaImplementation (in_mCocoaImplementation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

void cPtr_lexiqueDeclarationForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexiqueDeclarationForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHeaderContents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppContents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCocoaHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mLexiqueName, mProperty_mHeaderContents, mProperty_mCppContents, mProperty_mCocoaHeader, mProperty_mCocoaImplementation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ("lexiqueDeclarationForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_lexiqueDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_lexiqueDeclarationForGeneration_2D_weak::GALGAS_lexiqueDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak & GALGAS_lexiqueDeclarationForGeneration_2D_weak::operator = (const GALGAS_lexiqueDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak::GALGAS_lexiqueDeclarationForGeneration_2D_weak (const GALGAS_lexiqueDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak GALGAS_lexiqueDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration_2D_weak::bang_lexiqueDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueDeclarationForGeneration) ;
      result = GALGAS_lexiqueDeclarationForGeneration ((cPtr_lexiqueDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ("lexiqueDeclarationForGeneration-weak",
                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak GALGAS_lexiqueDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration_2D_weak result ;
  const GALGAS_lexiqueDeclarationForGeneration_2D_weak * p = (const GALGAS_lexiqueDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarName.objectCompare (p->mProperty_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonTerminalMapForGrammarAnalysis.objectCompare (p->mProperty_mNonTerminalMapForGrammarAnalysis) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonTerminalToAddList.objectCompare (p->mProperty_mNonTerminalToAddList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasIndexing.objectCompare (p->mProperty_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponents.objectCompare (p->mProperty_mSyntaxComponents) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartSymbolName.objectCompare (p->mProperty_mStartSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppFileContents.objectCompare (p->mProperty_mCppFileContents) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarForGeneration::objectCompare (const GALGAS_grammarForGeneration & inOperand) const {
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

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mGrammarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mLexiqueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMNonTerminalMapForGrammarAnalysis (GALGAS_nonTerminalSymbolMapForGrammarAnalysis inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mNonTerminalMapForGrammarAnalysis = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMNonTerminalToAddList (GALGAS_nonTerminalToAddList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mNonTerminalToAddList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMHasIndexing (GALGAS_bool inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mHasIndexing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMSyntaxComponents (GALGAS_lstringlist inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mSyntaxComponents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMStartSymbolName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mStartSymbolName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMCppFileContents (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mCppFileContents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mGrammarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mLexiqueName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_grammarForGeneration::readProperty_mNonTerminalMapForGrammarAnalysis (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_nonTerminalSymbolMapForGrammarAnalysis () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalMapForGrammarAnalysis ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_grammarForGeneration::readProperty_mNonTerminalToAddList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_nonTerminalToAddList () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalToAddList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarForGeneration::readProperty_mHasIndexing (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mHasIndexing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_grammarForGeneration::readProperty_mSyntaxComponents (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mStartSymbolName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mCppFileContents (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mCppFileContents ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarForGeneration class
//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mGrammarName (in_mGrammarName),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonTerminalMapForGrammarAnalysis (in_mNonTerminalMapForGrammarAnalysis),
mProperty_mNonTerminalToAddList (in_mNonTerminalToAddList),
mProperty_mHasIndexing (in_mHasIndexing),
mProperty_mSyntaxComponents (in_mSyntaxComponents),
mProperty_mStartSymbolName (in_mStartSymbolName),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature),
mProperty_mCppFileContents (in_mCppFileContents) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@grammarForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mGrammarName, mProperty_mLexiqueName, mProperty_mNonTerminalMapForGrammarAnalysis, mProperty_mNonTerminalToAddList, mProperty_mHasIndexing, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mHasTranslateFeature, mProperty_mCppFileContents COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarForGeneration_2D_weak::objectCompare (const GALGAS_grammarForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_grammarForGeneration_2D_weak::GALGAS_grammarForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak & GALGAS_grammarForGeneration_2D_weak::operator = (const GALGAS_grammarForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak::GALGAS_grammarForGeneration_2D_weak (const GALGAS_grammarForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak GALGAS_grammarForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration_2D_weak::bang_grammarForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarForGeneration) ;
      result = GALGAS_grammarForGeneration ((cPtr_grammarForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarForGeneration_2D_weak ("grammarForGeneration-weak",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak GALGAS_grammarForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration_2D_weak result ;
  const GALGAS_grammarForGeneration_2D_weak * p = (const GALGAS_grammarForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @routinePrototypeDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_routinePrototypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_routinePrototypeDeclarationForGeneration * p = (const cPtr_routinePrototypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_routinePrototypeDeclarationForGeneration::objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const {
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

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                           GALGAS_string::constructor_default (HERE),
                                                                           GALGAS_string::constructor_default (HERE),
                                                                           GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routinePrototypeDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routinePrototypeDeclarationForGeneration::setter_setMRoutineName (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routinePrototypeDeclarationForGeneration::setter_setMFormalArgumentList (GALGAS_formalParameterListForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_routinePrototypeDeclarationForGeneration::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_routinePrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @routinePrototypeDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                              const GALGAS_string & in_mImplementationCppFileName,
                                                                                              const GALGAS_string & in_mRoutineName,
                                                                                              const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mFormalArgumentList (in_mFormalArgumentList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routinePrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

void cPtr_routinePrototypeDeclarationForGeneration::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@routinePrototypeDeclarationForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routinePrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_routinePrototypeDeclarationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mRoutineName, mProperty_mFormalArgumentList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@routinePrototypeDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ("routinePrototypeDeclarationForGeneration",
                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routinePrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routinePrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routinePrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_routinePrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (const GALGAS_routinePrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::bang_routinePrototypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routinePrototypeDeclarationForGeneration) ;
      result = GALGAS_routinePrototypeDeclarationForGeneration ((cPtr_routinePrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routinePrototypeDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ("routinePrototypeDeclarationForGeneration-weak",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak * p = (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @routineImplementationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_routineImplementationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_routineImplementationForGeneration * p = (const cPtr_routineImplementationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateStatic.objectCompare (p->mProperty_mGenerateStatic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineInstructionList.objectCompare (p->mProperty_mRoutineInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_routineImplementationForGeneration::objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const {
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

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (void) :
GALGAS_routinePrototypeDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_bool::constructor_default (HERE),
                                                                     GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) :
GALGAS_routinePrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineImplementationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineImplementationForGeneration::setter_setMGenerateStatic (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    p->mProperty_mGenerateStatic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineImplementationForGeneration::setter_setMRoutineInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    p->mProperty_mRoutineInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineImplementationForGeneration::readProperty_mGenerateStatic (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mGenerateStatic ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_routineImplementationForGeneration::readProperty_mRoutineInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @routineImplementationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                  const GALGAS_string & in_mImplementationCppFileName,
                                                                                  const GALGAS_string & in_mRoutineName,
                                                                                  const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                  const GALGAS_bool & in_mGenerateStatic,
                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (in_mHasHeader, in_mImplementationCppFileName, in_mRoutineName, in_mFormalArgumentList COMMA_THERE),
mProperty_mGenerateStatic (in_mGenerateStatic),
mProperty_mRoutineInstructionList (in_mRoutineInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routineImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

void cPtr_routineImplementationForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@routineImplementationForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateStatic.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routineImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_routineImplementationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mRoutineName, mProperty_mFormalArgumentList, mProperty_mGenerateStatic, mProperty_mRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@routineImplementationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineImplementationForGeneration ("routineImplementationForGeneration",
                                                           & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineImplementationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineImplementationForGeneration_2D_weak::objectCompare (const GALGAS_routineImplementationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_routineImplementationForGeneration_2D_weak::GALGAS_routineImplementationForGeneration_2D_weak (void) :
GALGAS_routinePrototypeDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak & GALGAS_routineImplementationForGeneration_2D_weak::operator = (const GALGAS_routineImplementationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak::GALGAS_routineImplementationForGeneration_2D_weak (const GALGAS_routineImplementationForGeneration & inSource) :
GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak GALGAS_routineImplementationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration_2D_weak::bang_routineImplementationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routineImplementationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routineImplementationForGeneration) ;
      result = GALGAS_routineImplementationForGeneration ((cPtr_routineImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineImplementationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ("routineImplementationForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineImplementationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineImplementationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineImplementationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak GALGAS_routineImplementationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration_2D_weak result ;
  const GALGAS_routineImplementationForGeneration_2D_weak * p = (const GALGAS_routineImplementationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineImplementationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @functionPrototypeDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_functionPrototypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_functionPrototypeDeclarationForGeneration::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const {
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

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                                    const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                                    const GALGAS_string & inAttribute_mFunctionName,
                                                                                                                    const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReturnType
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPrototypeDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionPrototypeDeclarationForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionPrototypeDeclarationForGeneration::setter_setMFormalArgumentList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionPrototypeDeclarationForGeneration::setter_setMReturnType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionPrototypeDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                const GALGAS_string & in_mImplementationCppFileName,
                                                                                                const GALGAS_string & in_mFunctionName,
                                                                                                const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GALGAS_unifiedTypeMap_2D_entry & in_mReturnType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mFormalArgumentList (in_mFormalArgumentList),
mProperty_mReturnType (in_mReturnType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

void cPtr_functionPrototypeDeclarationForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@functionPrototypeDeclarationForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionPrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionPrototypeDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_functionPrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (const GALGAS_functionPrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::bang_functionPrototypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPrototypeDeclarationForGeneration) ;
      result = GALGAS_functionPrototypeDeclarationForGeneration ((cPtr_functionPrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionPrototypeDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ("functionPrototypeDeclarationForGeneration-weak",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak * p = (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @functionImplementationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_functionImplementationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultVariableCppName.objectCompare (p->mProperty_mResultVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_functionImplementationForGeneration::objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const {
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

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (void) :
GALGAS_functionPrototypeDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GALGAS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_string & inAttribute_mFunctionName,
                                                                                                        const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReturnType,
                                                                                                        const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionImplementationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionImplementationForGeneration::setter_setMResultVariableCppName (GALGAS_string inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    p->mProperty_mResultVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionImplementationForGeneration::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionImplementationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_functionImplementationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionImplementationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mReturnType,
                                                                                    const GALGAS_string & in_mResultVariableCppName,
                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_mHasHeader, in_mImplementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType COMMA_THERE),
mProperty_mResultVariableCppName (in_mResultVariableCppName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

void cPtr_functionImplementationForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@functionImplementationForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionImplementationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                            & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionImplementationForGeneration_2D_weak::objectCompare (const GALGAS_functionImplementationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_functionImplementationForGeneration_2D_weak::GALGAS_functionImplementationForGeneration_2D_weak (void) :
GALGAS_functionPrototypeDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak & GALGAS_functionImplementationForGeneration_2D_weak::operator = (const GALGAS_functionImplementationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak::GALGAS_functionImplementationForGeneration_2D_weak (const GALGAS_functionImplementationForGeneration & inSource) :
GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak GALGAS_functionImplementationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration_2D_weak::bang_functionImplementationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionImplementationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionImplementationForGeneration) ;
      result = GALGAS_functionImplementationForGeneration ((cPtr_functionImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionImplementationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ("functionImplementationForGeneration-weak",
                                                                    & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionImplementationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak GALGAS_functionImplementationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration_2D_weak result ;
  const GALGAS_functionImplementationForGeneration_2D_weak * p = (const GALGAS_functionImplementationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionImplementationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_onceFunctionDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultVariableCppName.objectCompare (p->mProperty_mResultVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_onceFunctionDeclarationForGeneration::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const {
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

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_string & inAttribute_mFunctionName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReturnType,
                                                                                                          const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationForGeneration::setter_setMReturnType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationForGeneration::setter_setMResultVariableCppName (GALGAS_string inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    p->mProperty_mResultVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationForGeneration::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_onceFunctionDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_onceFunctionDeclarationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_string & in_mFunctionName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReturnType,
                                                                                      const GALGAS_string & in_mResultVariableCppName,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mReturnType (in_mReturnType),
mProperty_mResultVariableCppName (in_mResultVariableCppName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

void cPtr_onceFunctionDeclarationForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@onceFunctionDeclarationForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mFunctionName, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@onceFunctionDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_onceFunctionDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_onceFunctionDeclarationForGeneration_2D_weak::GALGAS_onceFunctionDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak & GALGAS_onceFunctionDeclarationForGeneration_2D_weak::operator = (const GALGAS_onceFunctionDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak::GALGAS_onceFunctionDeclarationForGeneration_2D_weak (const GALGAS_onceFunctionDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak GALGAS_onceFunctionDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration_2D_weak::bang_onceFunctionDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationForGeneration) ;
      result = GALGAS_onceFunctionDeclarationForGeneration ((cPtr_onceFunctionDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@onceFunctionDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ("onceFunctionDeclarationForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak GALGAS_onceFunctionDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration_2D_weak result ;
  const GALGAS_onceFunctionDeclarationForGeneration_2D_weak * p = (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_onceFunctionDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @primitiveTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_primitiveTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_primitiveTypeForGeneration * p = (const cPtr_primitiveTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_primitiveTypeForGeneration::objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const {
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

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primitiveTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_primitiveTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_primitiveTypeForGeneration::setter_setMPredefinedTypeName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    p->mProperty_mPredefinedTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_primitiveTypeForGeneration::setter_setMKind (GALGAS_predefinedTypeKindEnum inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_primitiveTypeForGeneration::readProperty_mPredefinedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_primitiveTypeForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_predefinedTypeKindEnum () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @primitiveTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mPredefinedTypeName (in_mPredefinedTypeName),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_primitiveTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

void cPtr_primitiveTypeForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@primitiveTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_primitiveTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_primitiveTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@primitiveTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primitiveTypeForGeneration ("primitiveTypeForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primitiveTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primitiveTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_primitiveTypeForGeneration_2D_weak::objectCompare (const GALGAS_primitiveTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_primitiveTypeForGeneration_2D_weak::GALGAS_primitiveTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak & GALGAS_primitiveTypeForGeneration_2D_weak::operator = (const GALGAS_primitiveTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak::GALGAS_primitiveTypeForGeneration_2D_weak (const GALGAS_primitiveTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak GALGAS_primitiveTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration_2D_weak::bang_primitiveTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_primitiveTypeForGeneration) ;
      result = GALGAS_primitiveTypeForGeneration ((cPtr_primitiveTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@primitiveTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ("primitiveTypeForGeneration-weak",
                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primitiveTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primitiveTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak GALGAS_primitiveTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration_2D_weak result ;
  const GALGAS_primitiveTypeForGeneration_2D_weak * p = (const GALGAS_primitiveTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primitiveTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperAbsolutePath.objectCompare (p->mProperty_mFilewrapperAbsolutePath) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperFileMap.objectCompare (p->mProperty_mFilewrapperFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperDirectoryMap.objectCompare (p->mProperty_mFilewrapperDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplateListForGeneration.objectCompare (p->mProperty_mFilewrapperTemplateListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperDeclarationForGeneration::objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const {
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

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationForGeneration::setter_setMFilewrapperAbsolutePath (GALGAS_string inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    p->mProperty_mFilewrapperAbsolutePath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationForGeneration::setter_setMFilewrapperFileMap (GALGAS_wrapperFileMap inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    p->mProperty_mFilewrapperFileMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationForGeneration::setter_setMFilewrapperDirectoryMap (GALGAS_wrapperDirectoryMap inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    p->mProperty_mFilewrapperDirectoryMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationForGeneration::setter_setMFilewrapperTemplateListForGeneration (GALGAS_filewrapperTemplateListForGeneration inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    p->mProperty_mFilewrapperTemplateListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperAbsolutePath (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperAbsolutePath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperFileMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_wrapperFileMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperFileMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperDirectoryMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_wrapperDirectoryMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperDirectoryMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperTemplateListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_filewrapperTemplateListForGeneration () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperTemplateListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFilewrapperName,
                                                                                    const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperAbsolutePath (in_mFilewrapperAbsolutePath),
mProperty_mFilewrapperFileMap (in_mFilewrapperFileMap),
mProperty_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mProperty_mFilewrapperTemplateListForGeneration (in_mFilewrapperTemplateListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

void cPtr_filewrapperDeclarationForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@filewrapperDeclarationForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperAbsolutePath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperTemplateListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mFilewrapperName, mProperty_mFilewrapperAbsolutePath, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_filewrapperDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_filewrapperDeclarationForGeneration_2D_weak::GALGAS_filewrapperDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak & GALGAS_filewrapperDeclarationForGeneration_2D_weak::operator = (const GALGAS_filewrapperDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak::GALGAS_filewrapperDeclarationForGeneration_2D_weak (const GALGAS_filewrapperDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak GALGAS_filewrapperDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration_2D_weak::bang_filewrapperDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationForGeneration) ;
      result = GALGAS_filewrapperDeclarationForGeneration ((cPtr_filewrapperDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ("filewrapperDeclarationForGeneration-weak",
                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak GALGAS_filewrapperDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration_2D_weak result ;
  const GALGAS_filewrapperDeclarationForGeneration_2D_weak * p = (const GALGAS_filewrapperDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @programComponentForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_programComponentForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_programComponentForGeneration * p = (const cPtr_programComponentForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInclusionSet.objectCompare (p->mProperty_mInclusionSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationString.objectCompare (p->mProperty_mImplementationString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_programComponentForGeneration::objectCompare (const GALGAS_programComponentForGeneration & inOperand) const {
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

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_programComponentForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_stringset::constructor_emptySet (HERE),
                                                                GALGAS_string::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_programComponentForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programComponentForGeneration::setter_setMInclusionSet (GALGAS_stringset inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    p->mProperty_mInclusionSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programComponentForGeneration::setter_setMImplementationString (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    p->mProperty_mImplementationString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_programComponentForGeneration::readProperty_mInclusionSet (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mInclusionSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_programComponentForGeneration::readProperty_mImplementationString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mImplementationString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @programComponentForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                        const GALGAS_stringset & in_mInclusionSet,
                                                                        const GALGAS_string & in_mImplementationString
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mInclusionSet (in_mInclusionSet),
mProperty_mImplementationString (in_mImplementationString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_programComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

void cPtr_programComponentForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@programComponentForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInclusionSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_programComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_programComponentForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mInclusionSet, mProperty_mImplementationString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@programComponentForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programComponentForGeneration ("programComponentForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_programComponentForGeneration_2D_weak::objectCompare (const GALGAS_programComponentForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_programComponentForGeneration_2D_weak::GALGAS_programComponentForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak & GALGAS_programComponentForGeneration_2D_weak::operator = (const GALGAS_programComponentForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak::GALGAS_programComponentForGeneration_2D_weak (const GALGAS_programComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak GALGAS_programComponentForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_programComponentForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration_2D_weak::bang_programComponentForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_programComponentForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_programComponentForGeneration) ;
      result = GALGAS_programComponentForGeneration ((cPtr_programComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@programComponentForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ("programComponentForGeneration-weak",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programComponentForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programComponentForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak GALGAS_programComponentForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration_2D_weak result ;
  const GALGAS_programComponentForGeneration_2D_weak * p = (const GALGAS_programComponentForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programComponentForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT> gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (void) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (NULL,
                                                                                                                   freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_localVarManager & io_ioVariableMap,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (void) :
mProperty_mCurrentManager (),
mProperty_mOverridenManagers () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::~ GALGAS_localVarManager (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (const GALGAS_currentVarManager & inOperand0,
                                                const GALGAS_openedOverrideList & inOperand1) :
mProperty_mCurrentManager (inOperand0),
mProperty_mOverridenManagers (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVarManager (GALGAS_currentVarManager::constructor_default (HERE),
                                 GALGAS_openedOverrideList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::constructor_new (const GALGAS_currentVarManager & inOperand0,
                                                                const GALGAS_openedOverrideList & inOperand1 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_localVarManager (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVarManager::objectCompare (const GALGAS_localVarManager & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCurrentManager.objectCompare (inOperand.mProperty_mCurrentManager) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOverridenManagers.objectCompare (inOperand.mProperty_mOverridenManagers) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_localVarManager::isValid (void) const {
  return mProperty_mCurrentManager.isValid () && mProperty_mOverridenManagers.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::drop (void) {
  mProperty_mCurrentManager.drop () ;
  mProperty_mOverridenManagers.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @localVarManager:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCurrentManager.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOverridenManagers.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVarManager type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarManager (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  const GALGAS_localVarManager * p = (const GALGAS_localVarManager *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (GALGAS_localVarManager & ioObject,
                                                     const GALGAS_lstring constinArgument_inVarName,
                                                     const GALGAS_bool constinArgument_inWarnsIfNotMutated,
                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                     const GALGAS_string constinArgument_inCppName,
                                                     const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  GALGAS_localVariableAttributes temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inWarnsIfNotMutated.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_localVariableAttributes::constructor_none (SOURCE_FILE ("variable-manager.galgas", 46)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 46)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 46)) COMMA_SOURCE_FILE ("variable-manager.galgas", 46)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, temp_0, GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 41)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertUsedLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GALGAS_localVarManager & ioObject,
                                              const GALGAS_lstring constinArgument_inVarName,
                                              const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                              const GALGAS_string constinArgument_inCppName,
                                              const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 62)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 62)) COMMA_SOURCE_FILE ("variable-manager.galgas", 62)), GALGAS_localVarValuation::constructor_read (SOURCE_FILE ("variable-manager.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 57)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (GALGAS_localVarManager & ioObject,
                                                     const GALGAS_lstring constinArgument_inVarName,
                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                     const GALGAS_string constinArgument_inCppName,
                                                     const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 78)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 78)) COMMA_SOURCE_FILE ("variable-manager.galgas", 78)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 73)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (GALGAS_localVarManager & ioObject,
                                                  const GALGAS_lstring constinArgument_inVarName,
                                                  const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                  const GALGAS_string constinArgument_inCppName,
                                                  const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 94)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 94)) COMMA_SOURCE_FILE ("variable-manager.galgas", 94)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 89)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                const GALGAS_lstring constinArgument_inVarName,
                                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                const GALGAS_string constinArgument_inCppName,
                                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 110)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 110)) COMMA_SOURCE_FILE ("variable-manager.galgas", 110)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 105)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                const GALGAS_lstring constinArgument_inVarName,
                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                const GALGAS_string constinArgument_inCppName,
                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 126)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 126)) COMMA_SOURCE_FILE ("variable-manager.galgas", 126)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 121)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertOutputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                 const GALGAS_lstring constinArgument_inVarName,
                                                 const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                 const GALGAS_string constinArgument_inCppName,
                                                 const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 142)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 142)) COMMA_SOURCE_FILE ("variable-manager.galgas", 142)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 142)) COMMA_SOURCE_FILE ("variable-manager.galgas", 142)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 137)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                      const GALGAS_lstring constinArgument_inVarName,
                                                                      const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                      const GALGAS_string constinArgument_inCppName,
                                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 158)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 153)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                      const GALGAS_lstring constinArgument_inVarName,
                                                      const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                      const GALGAS_string constinArgument_inCppName,
                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 174)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 174)) COMMA_SOURCE_FILE ("variable-manager.galgas", 174)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 169)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                        const GALGAS_lstring constinArgument_inVarName,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                        const GALGAS_string constinArgument_inCppName,
                                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 190)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 190)) COMMA_SOURCE_FILE ("variable-manager.galgas", 190)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 190)) COMMA_SOURCE_FILE ("variable-manager.galgas", 190)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 185)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                        const GALGAS_lstring constinArgument_inVarName,
                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                        const GALGAS_string constinArgument_inCppName,
                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 206)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 206)) COMMA_SOURCE_FILE ("variable-manager.galgas", 206)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 201)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertNonMutableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                               const GALGAS_string constinArgument_inCppName,
                                               const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 222)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas", 222)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas", 222)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 217)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertMutableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (GALGAS_localVarManager & ioObject,
                                            const GALGAS_lstring constinArgument_inVarName,
                                            const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                            const GALGAS_string constinArgument_inCppName,
                                            const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 238)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 238)) COMMA_SOURCE_FILE ("variable-manager.galgas", 238)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 233)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForSelectBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GALGAS_localVarManager & ioObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 248))  COMMA_SOURCE_FILE ("variable-manager.galgas", 248)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForRepeatBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GALGAS_localVarManager & ioObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_repeatOverride (SOURCE_FILE ("variable-manager.galgas", 254))  COMMA_SOURCE_FILE ("variable-manager.galgas", 254)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeOverride'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GALGAS_localVarManager & ioObject,
                                    const GALGAS_location /* constinArgument_inEndOfBranchLocation */,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_overrideKind var_savedManager_12053 ;
  {
  ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_12053, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 260)) ;
  }
  switch (var_savedManager_12053.enumValue ()) {
  case GALGAS_overrideKind::kNotBuilt:
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_12152 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_12053.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_12149_savedManager = extractPtr_12152->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_12309 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_12053.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_12226_savedManager = extractPtr_12309->mAssociatedValue0 ;
      const GALGAS_currentVarManager extractedValue_12262_referenceManager = extractPtr_12309->mAssociatedValue1 ;
      ioObject.mProperty_mCurrentManager = extractedValue_12262_referenceManager ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_repeatOverride:
    {
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GALGAS_localVarManager & ioObject,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 272)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GALGAS_localVarManager & ioObject,
                                  const GALGAS_location constinArgument_inEndOfBranchLocation,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 278)) ;
  }
  GALGAS_overrideKind var_savedManager_12859 ;
  {
  ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_12859, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 280)) ;
  }
  switch (var_savedManager_12859.enumValue ()) {
  case GALGAS_overrideKind::kNotBuilt:
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_13121 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_12859.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_12948_savedManager = extractPtr_13121->mAssociatedValue0 ;
      const GALGAS_localVarManager temp_0 = ioObject ;
      ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideNextBranches (extractedValue_12948_savedManager, temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 283))  COMMA_SOURCE_FILE ("variable-manager.galgas", 283)) ;
      ioObject.mProperty_mCurrentManager = extractedValue_12948_savedManager ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_13564 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_12859.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_13188_savedManager = extractPtr_13564->mAssociatedValue0 ;
      const GALGAS_currentVarManager extractedValue_13224_referenceManager = extractPtr_13564->mAssociatedValue1 ;
      const GALGAS_localVarManager temp_1 = ioObject ;
      GALGAS_currentVarManager var_newReferenceManager_13255 = temp_1.readProperty_mCurrentManager () ;
      {
      extensionSetter_combineManagerWith (var_newReferenceManager_13255, extractedValue_13224_referenceManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 287)) ;
      }
      ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideNextBranches (extractedValue_13188_savedManager, var_newReferenceManager_13255  COMMA_SOURCE_FILE ("variable-manager.galgas", 288))  COMMA_SOURCE_FILE ("variable-manager.galgas", 288)) ;
      ioObject.mProperty_mCurrentManager = extractedValue_13188_savedManager ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_repeatOverride:
    {
      ioObject.mProperty_mOverridenManagers.addAssign_operation (var_savedManager_12859  COMMA_SOURCE_FILE ("variable-manager.galgas", 291)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager neutralAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GALGAS_localVarManager & ioObject,
                                    const GALGAS_lstring constinArgument_inVarName,
                                    GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                    GALGAS_string & outArgument_outCppName,
                                    GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 371)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForDropAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GALGAS_localVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 415)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GALGAS_localVarManager & ioObject,
                                           const GALGAS_lstring constinArgument_inVarName,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                           GALGAS_string & outArgument_outCppName,
                                           GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 449)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GALGAS_localVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                          GALGAS_string & outArgument_outCppName,
                                          GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 550)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                               GALGAS_string & outArgument_outCppName,
                                               GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 637)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GALGAS_localVarManager inObject,
                                           const GALGAS_location constinArgument_inErrorLocation,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 786)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unifiedTypeMapElementClass::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unifiedTypeMapElementClass * p = (const cPtr_unifiedTypeMapElementClass *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefinition.objectCompare (p->mProperty_mDefinition) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_unifiedTypeMapElementClass::objectCompare (const GALGAS_unifiedTypeMapElementClass & inOperand) const {
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

GALGAS_unifiedTypeMapElementClass::GALGAS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass::GALGAS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::constructor_new (const GALGAS_typeDefinition & inAttribute_mDefinition
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass result ;
  if (inAttribute_mDefinition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unifiedTypeMapElementClass (inAttribute_mDefinition COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapElementClass::setter_setMDefinition (GALGAS_typeDefinition inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GALGAS_typeDefinition & in_mDefinition
                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mDefinition (in_mDefinition) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unifiedTypeMapElementClass::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

void cPtr_unifiedTypeMapElementClass::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@unifiedTypeMapElementClass:" ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unifiedTypeMapElementClass::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mDefinition COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMapElementClass type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass result ;
  const GALGAS_unifiedTypeMapElementClass * p = (const GALGAS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition::GALGAS_unifiedTypeDefinition (void) :
mProperty_mLKey (),
mProperty_mIsPredefined (),
mProperty_mIsConcrete (),
mProperty_mSuperType (),
mProperty_mTypeKindEnum (),
mProperty_mSupportCollectionValue (),
mProperty_mAllTypedPropertyList (),
mProperty_mPropertyMap (),
mProperty_mCurrentTypedPropertyList (),
mProperty_mConstructorMap (),
mProperty_mGetterMap (),
mProperty_mSetterMap (),
mProperty_mInstanceMethodMap (),
mProperty_mClassMethodMap (),
mProperty_mOptionalMethodMap (),
mProperty_mEnumerationDescriptor (),
mProperty_mHandledOperatorFlags (),
mProperty_mAddAssignOperatorArguments (),
mProperty_mEnumConstantMap (),
mProperty_mEnumConstantList (),
mProperty_mMapSearchMethodList (),
mProperty_mMapEntrySearchConstructorList (),
mProperty_mGenerateHeaderInSeparateFile (),
mProperty_mTypeForEnumeratedElement (),
mProperty_mDefaultConstructorName (),
mProperty_mHeaderFileName (),
mProperty_mHeaderKind () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition::~ GALGAS_unifiedTypeDefinition (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition::GALGAS_unifiedTypeDefinition (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_bool & inOperand2,
                                                            const GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                            const GALGAS_typeKindEnum & inOperand4,
                                                            const GALGAS_bool & inOperand5,
                                                            const GALGAS_typedPropertyList & inOperand6,
                                                            const GALGAS_propertyMap & inOperand7,
                                                            const GALGAS_typedPropertyList & inOperand8,
                                                            const GALGAS_constructorMap & inOperand9,
                                                            const GALGAS_getterMap & inOperand10,
                                                            const GALGAS_setterMap & inOperand11,
                                                            const GALGAS_instanceMethodMap & inOperand12,
                                                            const GALGAS_classMethodMap & inOperand13,
                                                            const GALGAS_optionalMethodMap & inOperand14,
                                                            const GALGAS_enumerationDescriptorList & inOperand15,
                                                            const GALGAS_operators & inOperand16,
                                                            const GALGAS_functionSignature & inOperand17,
                                                            const GALGAS_constantIndexMap & inOperand18,
                                                            const GALGAS_enumConstantList & inOperand19,
                                                            const GALGAS_mapSearchMethodListAST & inOperand20,
                                                            const GALGAS_mapSearchMethodListAST & inOperand21,
                                                            const GALGAS_bool & inOperand22,
                                                            const GALGAS_unifiedTypeMap_2D_entry & inOperand23,
                                                            const GALGAS_string & inOperand24,
                                                            const GALGAS_string & inOperand25,
                                                            const GALGAS_headerKind & inOperand26) :
mProperty_mLKey (inOperand0),
mProperty_mIsPredefined (inOperand1),
mProperty_mIsConcrete (inOperand2),
mProperty_mSuperType (inOperand3),
mProperty_mTypeKindEnum (inOperand4),
mProperty_mSupportCollectionValue (inOperand5),
mProperty_mAllTypedPropertyList (inOperand6),
mProperty_mPropertyMap (inOperand7),
mProperty_mCurrentTypedPropertyList (inOperand8),
mProperty_mConstructorMap (inOperand9),
mProperty_mGetterMap (inOperand10),
mProperty_mSetterMap (inOperand11),
mProperty_mInstanceMethodMap (inOperand12),
mProperty_mClassMethodMap (inOperand13),
mProperty_mOptionalMethodMap (inOperand14),
mProperty_mEnumerationDescriptor (inOperand15),
mProperty_mHandledOperatorFlags (inOperand16),
mProperty_mAddAssignOperatorArguments (inOperand17),
mProperty_mEnumConstantMap (inOperand18),
mProperty_mEnumConstantList (inOperand19),
mProperty_mMapSearchMethodList (inOperand20),
mProperty_mMapEntrySearchConstructorList (inOperand21),
mProperty_mGenerateHeaderInSeparateFile (inOperand22),
mProperty_mTypeForEnumeratedElement (inOperand23),
mProperty_mDefaultConstructorName (inOperand24),
mProperty_mHeaderFileName (inOperand25),
mProperty_mHeaderKind (inOperand26) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition GALGAS_unifiedTypeDefinition::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                            const GALGAS_typeKindEnum & inOperand4,
                                                                            const GALGAS_bool & inOperand5,
                                                                            const GALGAS_typedPropertyList & inOperand6,
                                                                            const GALGAS_propertyMap & inOperand7,
                                                                            const GALGAS_typedPropertyList & inOperand8,
                                                                            const GALGAS_constructorMap & inOperand9,
                                                                            const GALGAS_getterMap & inOperand10,
                                                                            const GALGAS_setterMap & inOperand11,
                                                                            const GALGAS_instanceMethodMap & inOperand12,
                                                                            const GALGAS_classMethodMap & inOperand13,
                                                                            const GALGAS_optionalMethodMap & inOperand14,
                                                                            const GALGAS_enumerationDescriptorList & inOperand15,
                                                                            const GALGAS_operators & inOperand16,
                                                                            const GALGAS_functionSignature & inOperand17,
                                                                            const GALGAS_constantIndexMap & inOperand18,
                                                                            const GALGAS_enumConstantList & inOperand19,
                                                                            const GALGAS_mapSearchMethodListAST & inOperand20,
                                                                            const GALGAS_mapSearchMethodListAST & inOperand21,
                                                                            const GALGAS_bool & inOperand22,
                                                                            const GALGAS_unifiedTypeMap_2D_entry & inOperand23,
                                                                            const GALGAS_string & inOperand24,
                                                                            const GALGAS_string & inOperand25,
                                                                            const GALGAS_headerKind & inOperand26 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid ()) {
    result = GALGAS_unifiedTypeDefinition (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeDefinition::objectCompare (const GALGAS_unifiedTypeDefinition & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLKey.objectCompare (inOperand.mProperty_mLKey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPredefined.objectCompare (inOperand.mProperty_mIsPredefined) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsConcrete.objectCompare (inOperand.mProperty_mIsConcrete) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSuperType.objectCompare (inOperand.mProperty_mSuperType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeKindEnum.objectCompare (inOperand.mProperty_mTypeKindEnum) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSupportCollectionValue.objectCompare (inOperand.mProperty_mSupportCollectionValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllTypedPropertyList.objectCompare (inOperand.mProperty_mAllTypedPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyMap.objectCompare (inOperand.mProperty_mPropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCurrentTypedPropertyList.objectCompare (inOperand.mProperty_mCurrentTypedPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstructorMap.objectCompare (inOperand.mProperty_mConstructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGetterMap.objectCompare (inOperand.mProperty_mGetterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSetterMap.objectCompare (inOperand.mProperty_mSetterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstanceMethodMap.objectCompare (inOperand.mProperty_mInstanceMethodMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mClassMethodMap.objectCompare (inOperand.mProperty_mClassMethodMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionalMethodMap.objectCompare (inOperand.mProperty_mOptionalMethodMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumerationDescriptor.objectCompare (inOperand.mProperty_mEnumerationDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandledOperatorFlags.objectCompare (inOperand.mProperty_mHandledOperatorFlags) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddAssignOperatorArguments.objectCompare (inOperand.mProperty_mAddAssignOperatorArguments) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumConstantMap.objectCompare (inOperand.mProperty_mEnumConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumConstantList.objectCompare (inOperand.mProperty_mEnumConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMapSearchMethodList.objectCompare (inOperand.mProperty_mMapSearchMethodList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMapEntrySearchConstructorList.objectCompare (inOperand.mProperty_mMapEntrySearchConstructorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (inOperand.mProperty_mGenerateHeaderInSeparateFile) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeForEnumeratedElement.objectCompare (inOperand.mProperty_mTypeForEnumeratedElement) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultConstructorName.objectCompare (inOperand.mProperty_mDefaultConstructorName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHeaderFileName.objectCompare (inOperand.mProperty_mHeaderFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHeaderKind.objectCompare (inOperand.mProperty_mHeaderKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeDefinition::isValid (void) const {
  return mProperty_mLKey.isValid () && mProperty_mIsPredefined.isValid () && mProperty_mIsConcrete.isValid () && mProperty_mSuperType.isValid () && mProperty_mTypeKindEnum.isValid () && mProperty_mSupportCollectionValue.isValid () && mProperty_mAllTypedPropertyList.isValid () && mProperty_mPropertyMap.isValid () && mProperty_mCurrentTypedPropertyList.isValid () && mProperty_mConstructorMap.isValid () && mProperty_mGetterMap.isValid () && mProperty_mSetterMap.isValid () && mProperty_mInstanceMethodMap.isValid () && mProperty_mClassMethodMap.isValid () && mProperty_mOptionalMethodMap.isValid () && mProperty_mEnumerationDescriptor.isValid () && mProperty_mHandledOperatorFlags.isValid () && mProperty_mAddAssignOperatorArguments.isValid () && mProperty_mEnumConstantMap.isValid () && mProperty_mEnumConstantList.isValid () && mProperty_mMapSearchMethodList.isValid () && mProperty_mMapEntrySearchConstructorList.isValid () && mProperty_mGenerateHeaderInSeparateFile.isValid () && mProperty_mTypeForEnumeratedElement.isValid () && mProperty_mDefaultConstructorName.isValid () && mProperty_mHeaderFileName.isValid () && mProperty_mHeaderKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeDefinition::drop (void) {
  mProperty_mLKey.drop () ;
  mProperty_mIsPredefined.drop () ;
  mProperty_mIsConcrete.drop () ;
  mProperty_mSuperType.drop () ;
  mProperty_mTypeKindEnum.drop () ;
  mProperty_mSupportCollectionValue.drop () ;
  mProperty_mAllTypedPropertyList.drop () ;
  mProperty_mPropertyMap.drop () ;
  mProperty_mCurrentTypedPropertyList.drop () ;
  mProperty_mConstructorMap.drop () ;
  mProperty_mGetterMap.drop () ;
  mProperty_mSetterMap.drop () ;
  mProperty_mInstanceMethodMap.drop () ;
  mProperty_mClassMethodMap.drop () ;
  mProperty_mOptionalMethodMap.drop () ;
  mProperty_mEnumerationDescriptor.drop () ;
  mProperty_mHandledOperatorFlags.drop () ;
  mProperty_mAddAssignOperatorArguments.drop () ;
  mProperty_mEnumConstantMap.drop () ;
  mProperty_mEnumConstantList.drop () ;
  mProperty_mMapSearchMethodList.drop () ;
  mProperty_mMapEntrySearchConstructorList.drop () ;
  mProperty_mGenerateHeaderInSeparateFile.drop () ;
  mProperty_mTypeForEnumeratedElement.drop () ;
  mProperty_mDefaultConstructorName.drop () ;
  mProperty_mHeaderFileName.drop () ;
  mProperty_mHeaderKind.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeDefinition::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeDefinition:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsConcrete.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSuperType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeKindEnum.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSupportCollectionValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllTypedPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCurrentTypedPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstructorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGetterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSetterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstanceMethodMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mClassMethodMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionalMethodMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumerationDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandledOperatorFlags.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddAssignOperatorArguments.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMapSearchMethodList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMapEntrySearchConstructorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeForEnumeratedElement.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultConstructorName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHeaderFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHeaderKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeDefinition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeDefinition ("unifiedTypeDefinition",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition GALGAS_unifiedTypeDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
  const GALGAS_unifiedTypeDefinition * p = (const GALGAS_unifiedTypeDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_definition> gExtensionGetterTable_unifiedTypeMapElementClass_definition ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_definition (const int32_t inClassIndex,
                                      enterExtensionGetter_unifiedTypeMapElementClass_definition inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_definition.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_definition f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_definition.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_definition (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_definition.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_definition (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_definition.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_unifiedTypeDefinition extensionGetter_unifiedTypeMapElementClass_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GALGAS_typeDefinition::kNotBuilt:
    break ;
  case GALGAS_typeDefinition::kEnum_unsolved:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 324)), GALGAS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 324)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeDefinition::kEnum_solved:
    {
      const cEnumAssociatedValues_typeDefinition_solved * extractPtr_14758 = (const cEnumAssociatedValues_typeDefinition_solved *) (temp_0.readProperty_mDefinition ().unsafePointer ()) ;
      const GALGAS_unifiedTypeDefinition extractedValue_14731_definition = extractPtr_14758->mAssociatedValue0 ;
      result_result = extractedValue_14731_definition ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_definition (void) {
  enterExtensionGetter_definition (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                   extensionGetter_unifiedTypeMapElementClass_definition) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_definition (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_definition.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_definition (defineExtensionGetter_unifiedTypeMapElementClass_definition,
                                                                  freeExtensionGetter_unifiedTypeMapElementClass_definition) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass lkey'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_lkey> gExtensionGetterTable_unifiedTypeMapElementClass_lkey ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_lkey (const int32_t inClassIndex,
                                enterExtensionGetter_unifiedTypeMapElementClass_lkey inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_lkey.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring callExtensionGetter_lkey (const cPtr_unifiedTypeMapElementClass * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_lkey f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_lkey.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_lkey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_lkey.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_lkey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_lkey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_unifiedTypeMapElementClass_lkey (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 333)).readProperty_mLKey () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                             extensionGetter_unifiedTypeMapElementClass_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_lkey (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_lkey.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_lkey (defineExtensionGetter_unifiedTypeMapElementClass_lkey,
                                                            freeExtensionGetter_unifiedTypeMapElementClass_lkey) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mIsConcrete'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mIsConcrete> gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mIsConcrete (const int32_t inClassIndex,
                                       enterExtensionGetter_unifiedTypeMapElementClass_mIsConcrete inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_mIsConcrete (const cPtr_unifiedTypeMapElementClass * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mIsConcrete f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_unifiedTypeMapElementClass_mIsConcrete (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 339)).readProperty_mIsConcrete () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mIsConcrete (void) {
  enterExtensionGetter_mIsConcrete (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                    extensionGetter_unifiedTypeMapElementClass_mIsConcrete) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mIsConcrete (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mIsConcrete.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mIsConcrete (defineExtensionGetter_unifiedTypeMapElementClass_mIsConcrete,
                                                                   freeExtensionGetter_unifiedTypeMapElementClass_mIsConcrete) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mSuperType'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mSuperType> gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mSuperType (const int32_t inClassIndex,
                                      enterExtensionGetter_unifiedTypeMapElementClass_mSuperType inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry callExtensionGetter_mSuperType (const cPtr_unifiedTypeMapElementClass * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mSuperType f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_unifiedTypeMap_2D_entry extensionGetter_unifiedTypeMapElementClass_mSuperType (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 345)).readProperty_mSuperType () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mSuperType (void) {
  enterExtensionGetter_mSuperType (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                   extensionGetter_unifiedTypeMapElementClass_mSuperType) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mSuperType (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mSuperType.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mSuperType (defineExtensionGetter_unifiedTypeMapElementClass_mSuperType,
                                                                  freeExtensionGetter_unifiedTypeMapElementClass_mSuperType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mTypeKindEnum'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mTypeKindEnum> gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mTypeKindEnum (const int32_t inClassIndex,
                                         enterExtensionGetter_unifiedTypeMapElementClass_mTypeKindEnum inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum callExtensionGetter_mTypeKindEnum (const cPtr_unifiedTypeMapElementClass * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mTypeKindEnum f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_typeKindEnum extensionGetter_unifiedTypeMapElementClass_mTypeKindEnum (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 351)).readProperty_mTypeKindEnum () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mTypeKindEnum (void) {
  enterExtensionGetter_mTypeKindEnum (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                      extensionGetter_unifiedTypeMapElementClass_mTypeKindEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mTypeKindEnum (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mTypeKindEnum.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mTypeKindEnum (defineExtensionGetter_unifiedTypeMapElementClass_mTypeKindEnum,
                                                                     freeExtensionGetter_unifiedTypeMapElementClass_mTypeKindEnum) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mSupportCollectionValue'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue> gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mSupportCollectionValue (const int32_t inClassIndex,
                                                   enterExtensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_mSupportCollectionValue (const cPtr_unifiedTypeMapElementClass * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 357)).readProperty_mSupportCollectionValue () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue (void) {
  enterExtensionGetter_mSupportCollectionValue (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                                extensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mSupportCollectionValue.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mSupportCollectionValue (defineExtensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue,
                                                                               freeExtensionGetter_unifiedTypeMapElementClass_mSupportCollectionValue) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mAllTypedPropertyList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList> gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mAllTypedPropertyList (const int32_t inClassIndex,
                                                 enterExtensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList callExtensionGetter_mAllTypedPropertyList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_typedPropertyList extensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 363)).readProperty_mAllTypedPropertyList () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList (void) {
  enterExtensionGetter_mAllTypedPropertyList (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                              extensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mAllTypedPropertyList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mAllTypedPropertyList (defineExtensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList,
                                                                             freeExtensionGetter_unifiedTypeMapElementClass_mAllTypedPropertyList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mPropertyMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mPropertyMap> gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mPropertyMap (const int32_t inClassIndex,
                                        enterExtensionGetter_unifiedTypeMapElementClass_mPropertyMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap callExtensionGetter_mPropertyMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mPropertyMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_propertyMap extensionGetter_unifiedTypeMapElementClass_mPropertyMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 369)).readProperty_mPropertyMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mPropertyMap (void) {
  enterExtensionGetter_mPropertyMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                     extensionGetter_unifiedTypeMapElementClass_mPropertyMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mPropertyMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mPropertyMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mPropertyMap (defineExtensionGetter_unifiedTypeMapElementClass_mPropertyMap,
                                                                    freeExtensionGetter_unifiedTypeMapElementClass_mPropertyMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mCurrentTypedPropertyList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList> gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mCurrentTypedPropertyList (const int32_t inClassIndex,
                                                     enterExtensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList callExtensionGetter_mCurrentTypedPropertyList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_typedPropertyList extensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 375)).readProperty_mCurrentTypedPropertyList () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList (void) {
  enterExtensionGetter_mCurrentTypedPropertyList (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                                  extensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mCurrentTypedPropertyList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList (defineExtensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList,
                                                                                 freeExtensionGetter_unifiedTypeMapElementClass_mCurrentTypedPropertyList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mConstructorMap> gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mConstructorMap (const int32_t inClassIndex,
                                           enterExtensionGetter_unifiedTypeMapElementClass_mConstructorMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap callExtensionGetter_mConstructorMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mConstructorMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_constructorMap extensionGetter_unifiedTypeMapElementClass_mConstructorMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 381)).readProperty_mConstructorMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mConstructorMap (void) {
  enterExtensionGetter_mConstructorMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                        extensionGetter_unifiedTypeMapElementClass_mConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mConstructorMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mConstructorMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mConstructorMap (defineExtensionGetter_unifiedTypeMapElementClass_mConstructorMap,
                                                                       freeExtensionGetter_unifiedTypeMapElementClass_mConstructorMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mGetterMap> gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mGetterMap (const int32_t inClassIndex,
                                      enterExtensionGetter_unifiedTypeMapElementClass_mGetterMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap callExtensionGetter_mGetterMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_getterMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mGetterMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_getterMap extensionGetter_unifiedTypeMapElementClass_mGetterMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 387)).readProperty_mGetterMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mGetterMap (void) {
  enterExtensionGetter_mGetterMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                   extensionGetter_unifiedTypeMapElementClass_mGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mGetterMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mGetterMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mGetterMap (defineExtensionGetter_unifiedTypeMapElementClass_mGetterMap,
                                                                  freeExtensionGetter_unifiedTypeMapElementClass_mGetterMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mSetterMap> gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mSetterMap (const int32_t inClassIndex,
                                      enterExtensionGetter_unifiedTypeMapElementClass_mSetterMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap callExtensionGetter_mSetterMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mSetterMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_setterMap extensionGetter_unifiedTypeMapElementClass_mSetterMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_setterMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 393)).readProperty_mSetterMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mSetterMap (void) {
  enterExtensionGetter_mSetterMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                   extensionGetter_unifiedTypeMapElementClass_mSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mSetterMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mSetterMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mSetterMap (defineExtensionGetter_unifiedTypeMapElementClass_mSetterMap,
                                                                  freeExtensionGetter_unifiedTypeMapElementClass_mSetterMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap> gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mInstanceMethodMap (const int32_t inClassIndex,
                                              enterExtensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap callExtensionGetter_mInstanceMethodMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_instanceMethodMap extensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 399)).readProperty_mInstanceMethodMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap (void) {
  enterExtensionGetter_mInstanceMethodMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                           extensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mInstanceMethodMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mInstanceMethodMap (defineExtensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap,
                                                                          freeExtensionGetter_unifiedTypeMapElementClass_mInstanceMethodMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mClassMethodMap> gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mClassMethodMap (const int32_t inClassIndex,
                                           enterExtensionGetter_unifiedTypeMapElementClass_mClassMethodMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap callExtensionGetter_mClassMethodMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mClassMethodMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_classMethodMap extensionGetter_unifiedTypeMapElementClass_mClassMethodMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classMethodMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 405)).readProperty_mClassMethodMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mClassMethodMap (void) {
  enterExtensionGetter_mClassMethodMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                        extensionGetter_unifiedTypeMapElementClass_mClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mClassMethodMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mClassMethodMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mClassMethodMap (defineExtensionGetter_unifiedTypeMapElementClass_mClassMethodMap,
                                                                       freeExtensionGetter_unifiedTypeMapElementClass_mClassMethodMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mOptionalMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap> gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mOptionalMethodMap (const int32_t inClassIndex,
                                              enterExtensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap callExtensionGetter_mOptionalMethodMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_optionalMethodMap extensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 411)).readProperty_mOptionalMethodMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap (void) {
  enterExtensionGetter_mOptionalMethodMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                           extensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mOptionalMethodMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mOptionalMethodMap (defineExtensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap,
                                                                          freeExtensionGetter_unifiedTypeMapElementClass_mOptionalMethodMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mEnumerationDescriptor'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor> gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mEnumerationDescriptor (const int32_t inClassIndex,
                                                  enterExtensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList callExtensionGetter_mEnumerationDescriptor (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_enumerationDescriptorList extensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 417)).readProperty_mEnumerationDescriptor () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor (void) {
  enterExtensionGetter_mEnumerationDescriptor (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                               extensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mEnumerationDescriptor.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mEnumerationDescriptor (defineExtensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor,
                                                                              freeExtensionGetter_unifiedTypeMapElementClass_mEnumerationDescriptor) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mHandledOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags> gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mHandledOperatorFlags (const int32_t inClassIndex,
                                                 enterExtensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators callExtensionGetter_mHandledOperatorFlags (const cPtr_unifiedTypeMapElementClass * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_operators result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 423)).readProperty_mHandledOperatorFlags () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags (void) {
  enterExtensionGetter_mHandledOperatorFlags (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                              extensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mHandledOperatorFlags.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mHandledOperatorFlags (defineExtensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags,
                                                                             freeExtensionGetter_unifiedTypeMapElementClass_mHandledOperatorFlags) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mAddAssignOperatorArguments'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments> gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mAddAssignOperatorArguments (const int32_t inClassIndex,
                                                       enterExtensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature callExtensionGetter_mAddAssignOperatorArguments (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_functionSignature extensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 429)).readProperty_mAddAssignOperatorArguments () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments (void) {
  enterExtensionGetter_mAddAssignOperatorArguments (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                                    extensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mAddAssignOperatorArguments.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments (defineExtensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments,
                                                                                   freeExtensionGetter_unifiedTypeMapElementClass_mAddAssignOperatorArguments) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mEnumConstantMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mEnumConstantMap> gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mEnumConstantMap (const int32_t inClassIndex,
                                            enterExtensionGetter_unifiedTypeMapElementClass_mEnumConstantMap inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap callExtensionGetter_mEnumConstantMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mEnumConstantMap f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_constantIndexMap extensionGetter_unifiedTypeMapElementClass_mEnumConstantMap (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantIndexMap result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 435)).readProperty_mEnumConstantMap () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mEnumConstantMap (void) {
  enterExtensionGetter_mEnumConstantMap (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                         extensionGetter_unifiedTypeMapElementClass_mEnumConstantMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mEnumConstantMap (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mEnumConstantMap (defineExtensionGetter_unifiedTypeMapElementClass_mEnumConstantMap,
                                                                        freeExtensionGetter_unifiedTypeMapElementClass_mEnumConstantMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mEnumConstantList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mEnumConstantList> gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mEnumConstantList (const int32_t inClassIndex,
                                             enterExtensionGetter_unifiedTypeMapElementClass_mEnumConstantList inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList callExtensionGetter_mEnumConstantList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mEnumConstantList f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_enumConstantList extensionGetter_unifiedTypeMapElementClass_mEnumConstantList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantList result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 441)).readProperty_mEnumConstantList () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mEnumConstantList (void) {
  enterExtensionGetter_mEnumConstantList (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                          extensionGetter_unifiedTypeMapElementClass_mEnumConstantList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mEnumConstantList (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mEnumConstantList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mEnumConstantList (defineExtensionGetter_unifiedTypeMapElementClass_mEnumConstantList,
                                                                         freeExtensionGetter_unifiedTypeMapElementClass_mEnumConstantList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mMapSearchMethodList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList> gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mMapSearchMethodList (const int32_t inClassIndex,
                                                enterExtensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST callExtensionGetter_mMapSearchMethodList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_mapSearchMethodListAST extensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 447)).readProperty_mMapSearchMethodList () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList (void) {
  enterExtensionGetter_mMapSearchMethodList (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                             extensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mMapSearchMethodList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mMapSearchMethodList (defineExtensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList,
                                                                            freeExtensionGetter_unifiedTypeMapElementClass_mMapSearchMethodList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mMapEntrySearchConstructorList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList> gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mMapEntrySearchConstructorList (const int32_t inClassIndex,
                                                          enterExtensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST callExtensionGetter_mMapEntrySearchConstructorList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_mapSearchMethodListAST extensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 453)).readProperty_mMapEntrySearchConstructorList () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList (void) {
  enterExtensionGetter_mMapEntrySearchConstructorList (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                                       extensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mMapEntrySearchConstructorList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList (defineExtensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList,
                                                                                      freeExtensionGetter_unifiedTypeMapElementClass_mMapEntrySearchConstructorList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mGenerateHeaderInSeparateFile'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile> gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mGenerateHeaderInSeparateFile (const int32_t inClassIndex,
                                                         enterExtensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_mGenerateHeaderInSeparateFile (const cPtr_unifiedTypeMapElementClass * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 459)).readProperty_mGenerateHeaderInSeparateFile () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile (void) {
  enterExtensionGetter_mGenerateHeaderInSeparateFile (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                                      extensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile (defineExtensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile,
                                                                                     freeExtensionGetter_unifiedTypeMapElementClass_mGenerateHeaderInSeparateFile) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mTypeForEnumeratedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement> gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mTypeForEnumeratedElement (const int32_t inClassIndex,
                                                     enterExtensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry callExtensionGetter_mTypeForEnumeratedElement (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_unifiedTypeMap_2D_entry extensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 465)).readProperty_mTypeForEnumeratedElement () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement (void) {
  enterExtensionGetter_mTypeForEnumeratedElement (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                                  extensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mTypeForEnumeratedElement.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement (defineExtensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement,
                                                                                 freeExtensionGetter_unifiedTypeMapElementClass_mTypeForEnumeratedElement) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mDefaultConstructorName'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName> gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mDefaultConstructorName (const int32_t inClassIndex,
                                                   enterExtensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_mDefaultConstructorName (const cPtr_unifiedTypeMapElementClass * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 471)).readProperty_mDefaultConstructorName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName (void) {
  enterExtensionGetter_mDefaultConstructorName (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                                extensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mDefaultConstructorName.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mDefaultConstructorName (defineExtensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName,
                                                                               freeExtensionGetter_unifiedTypeMapElementClass_mDefaultConstructorName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mHeaderKind'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mHeaderKind> gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mHeaderKind (const int32_t inClassIndex,
                                       enterExtensionGetter_unifiedTypeMapElementClass_mHeaderKind inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind callExtensionGetter_mHeaderKind (const cPtr_unifiedTypeMapElementClass * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_headerKind result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mHeaderKind f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_unifiedTypeMapElementClass_mHeaderKind (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 477)).readProperty_mHeaderKind () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mHeaderKind (void) {
  enterExtensionGetter_mHeaderKind (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                    extensionGetter_unifiedTypeMapElementClass_mHeaderKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mHeaderKind (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderKind.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mHeaderKind (defineExtensionGetter_unifiedTypeMapElementClass_mHeaderKind,
                                                                   freeExtensionGetter_unifiedTypeMapElementClass_mHeaderKind) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass mHeaderFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_unifiedTypeMapElementClass_mHeaderFileName> gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_mHeaderFileName (const int32_t inClassIndex,
                                           enterExtensionGetter_unifiedTypeMapElementClass_mHeaderFileName inGetter) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_mHeaderFileName (const cPtr_unifiedTypeMapElementClass * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_unifiedTypeMapElementClass) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_unifiedTypeMapElementClass_mHeaderFileName f = NULL ;
    if (classIndex < gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName.count ()) {
      f = gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName.count ()) {
           f = gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_unifiedTypeMapElementClass_mHeaderFileName (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_unifiedTypeMapElementClass * object = inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeMapElementClass) ;
  const GALGAS_unifiedTypeMapElementClass temp_0 = object ;
  result_result = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 483)).readProperty_mHeaderFileName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_unifiedTypeMapElementClass_mHeaderFileName (void) {
  enterExtensionGetter_mHeaderFileName (kTypeDescriptor_GALGAS_unifiedTypeMapElementClass.mSlotID,
                                        extensionGetter_unifiedTypeMapElementClass_mHeaderFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_unifiedTypeMapElementClass_mHeaderFileName (void) {
  gExtensionGetterTable_unifiedTypeMapElementClass_mHeaderFileName.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_unifiedTypeMapElementClass_mHeaderFileName (defineExtensionGetter_unifiedTypeMapElementClass_mHeaderFileName,
                                                                       freeExtensionGetter_unifiedTypeMapElementClass_mHeaderFileName) ;

//----------------------------------------------------------------------------------------------------------------------
// @ifExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ifExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifExpressionForGeneration * p = (const cPtr_ifExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ifExpressionForGeneration::objectCompare (const GALGAS_ifExpressionForGeneration & inOperand) const {
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

GALGAS_ifExpressionForGeneration::GALGAS_ifExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration::GALGAS_ifExpressionForGeneration (const cPtr_ifExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mIfExpression,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mThenExpression,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mElseExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mIfExpression.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mElseExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mIfExpression, inAttribute_mThenExpression, inAttribute_mElseExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionForGeneration::setter_setMIfExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    p->mProperty_mIfExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionForGeneration::setter_setMThenExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    p->mProperty_mThenExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionForGeneration::setter_setMElseExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    p->mProperty_mElseExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mIfExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mIfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mThenExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mThenExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mElseExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mElseExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                const GALGAS_location & in_mLocation,
                                                                const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                                                const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                                                const GALGAS_semanticExpressionForGeneration & in_mElseExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mIfExpression (in_mIfExpression),
mProperty_mThenExpression (in_mThenExpression),
mProperty_mElseExpression (in_mElseExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

void cPtr_ifExpressionForGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@ifExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ifExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionForGeneration ("ifExpressionForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration result ;
  const GALGAS_ifExpressionForGeneration * p = (const GALGAS_ifExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @unaryMinusExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unaryMinusExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryMinusExpressionForGeneration * p = (const cPtr_unaryMinusExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
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


typeComparisonResult GALGAS_unaryMinusExpressionForGeneration::objectCompare (const GALGAS_unaryMinusExpressionForGeneration & inOperand) const {
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

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (const cPtr_unaryMinusExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

void cPtr_unaryMinusExpressionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@unaryMinusExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryMinusExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unaryMinusExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ("unaryMinusExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @varInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varInExpressionAST::objectCompare (const GALGAS_varInExpressionAST & inOperand) const {
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

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpressionAST (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInExpressionAST::setter_setMVarName (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInExpressionAST::readProperty_mVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mVarName (in_mVarName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@varInExpressionAST:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  const GALGAS_varInExpressionAST * p = (const GALGAS_varInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @varInExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionForGeneration * p = (const cPtr_varInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVarName.objectCompare (p->mProperty_mCppVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varInExpressionForGeneration::objectCompare (const GALGAS_varInExpressionForGeneration & inOperand) const {
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

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInExpressionForGeneration::setter_setMCppVarName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    p->mProperty_mCppVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInExpressionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::readProperty_mCppVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mCppVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_string & in_mCppVarName,
                                                                      const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mCppVarName (in_mCppVarName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

void cPtr_varInExpressionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@varInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCppVarName, mProperty_mNameForCheckingFormalParameterUsing COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

