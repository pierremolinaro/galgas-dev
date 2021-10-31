#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionMethodForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionMethodForGeneration_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak & GALGAS_abstractExtensionMethodForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (const GALGAS_abstractExtensionMethodForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak GALGAS_abstractExtensionMethodForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration_2D_weak::bang_abstractExtensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_abstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionSetterAST::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mProperty_mAbstractExtensionSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_abstractExtensionSetterAST::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
  return result ;
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

typeComparisonResult GALGAS_abstractExtensionSetterAST_2D_weak::objectCompare (const GALGAS_abstractExtensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionSetterAST_2D_weak::GALGAS_abstractExtensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak & GALGAS_abstractExtensionSetterAST_2D_weak::operator = (const GALGAS_abstractExtensionSetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak::GALGAS_abstractExtensionSetterAST_2D_weak (const GALGAS_abstractExtensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak GALGAS_abstractExtensionSetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST_2D_weak::bang_abstractExtensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionSetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterAST) ;
      result = GALGAS_abstractExtensionSetterAST ((cPtr_abstractExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ("abstractExtensionSetterAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak GALGAS_abstractExtensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST_2D_weak result ;
  const GALGAS_abstractExtensionSetterAST_2D_weak * p = (const GALGAS_abstractExtensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_abstractExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mProperty_mAbstractExtensionSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
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

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak & GALGAS_abstractExtensionSetterForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (const GALGAS_abstractExtensionSetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak GALGAS_abstractExtensionSetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration_2D_weak::bang_abstractExtensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
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
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionGetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mExtensionGetterFormalInputParameterList.isValid () && inAttribute_mExtensionGetterReturnedTypeName.isValid () && inAttribute_mExtensionGetterReturnedVariableName.isValid () && inAttribute_mExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionGetterName, inAttribute_mExtensionGetterFormalInputParameterList, inAttribute_mExtensionGetterReturnedTypeName, inAttribute_mExtensionGetterReturnedVariableName, inAttribute_mExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_extensionGetterAST::getter_mExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterReturnedVariableName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_extensionGetterAST::getter_mExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mEndOfReaderLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionGetterAST::cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterName,
                                                  const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                  const GALGAS_location & in_mEndOfReaderLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
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
  macroMyNew (ptr, cPtr_extensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mExtensionGetterName, mProperty_mExtensionGetterFormalInputParameterList, mProperty_mExtensionGetterReturnedTypeName, mProperty_mExtensionGetterReturnedVariableName, mProperty_mExtensionGetterInstructionList, mProperty_mEndOfReaderLocation COMMA_THERE)) ;
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

typeComparisonResult GALGAS_extensionGetterAST_2D_weak::objectCompare (const GALGAS_extensionGetterAST_2D_weak & inOperand) const {
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

GALGAS_extensionGetterAST_2D_weak::GALGAS_extensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak & GALGAS_extensionGetterAST_2D_weak::operator = (const GALGAS_extensionGetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak::GALGAS_extensionGetterAST_2D_weak (const GALGAS_extensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak GALGAS_extensionGetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionGetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST_2D_weak::bang_extensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionGetterAST) ;
      result = GALGAS_extensionGetterAST ((cPtr_extensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ("extensionGetterAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak GALGAS_extensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST_2D_weak result ;
  const GALGAS_extensionGetterAST_2D_weak * p = (const GALGAS_extensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionGetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_extensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionGetterForGeneration::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mExtensionGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionGetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mImplementedAsFunction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_extensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mResultVarCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_extensionGetterForGeneration::getter_mExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mExtensionGetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_extensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_extensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionGetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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

GALGAS_extensionGetterForGeneration_2D_weak::GALGAS_extensionGetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak & GALGAS_extensionGetterForGeneration_2D_weak::operator = (const GALGAS_extensionGetterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak::GALGAS_extensionGetterForGeneration_2D_weak (const GALGAS_extensionGetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak GALGAS_extensionGetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration_2D_weak::bang_extensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
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
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionMethodInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionMethodName, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionMethodAST::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mExtensionMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_extensionMethodAST::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_extensionMethodAST::getter_mExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mExtensionMethodInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mEndOfMethodLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionMethodAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionMethodAST::cPtr_extensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionMethodName,
                                                  const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                  const GALGAS_location & in_mEndOfMethodLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
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
  macroMyNew (ptr, cPtr_extensionMethodAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mExtensionMethodInstructionList, mProperty_mEndOfMethodLocation COMMA_THERE)) ;
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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodAST_2D_weak::objectCompare (const GALGAS_extensionMethodAST_2D_weak & inOperand) const {
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

GALGAS_extensionMethodAST_2D_weak::GALGAS_extensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak & GALGAS_extensionMethodAST_2D_weak::operator = (const GALGAS_extensionMethodAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak::GALGAS_extensionMethodAST_2D_weak (const GALGAS_extensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak GALGAS_extensionMethodAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionMethodAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST GALGAS_extensionMethodAST_2D_weak::bang_extensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionMethodAST) ;
      result = GALGAS_extensionMethodAST ((cPtr_extensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodAST_2D_weak ("extensionMethodAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak GALGAS_extensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST_2D_weak result ;
  const GALGAS_extensionMethodAST_2D_weak * p = (const GALGAS_extensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
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
    result = mProperty_mExtensionMethodName.objectCompare (p->mProperty_mExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementedAsFunction.objectCompare (p->mProperty_mImplementedAsFunction) ;
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


typeComparisonResult GALGAS_extensionMethodForGeneration::objectCompare (const GALGAS_extensionMethodForGeneration & inOperand) const {
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

GALGAS_extensionMethodForGeneration::GALGAS_extensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration::GALGAS_extensionMethodForGeneration (const cPtr_extensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionMethodName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionMethodFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionMethodName, inAttribute_mImplementedAsFunction, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_extensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mExtensionMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionMethodForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mImplementedAsFunction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_extensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_extensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_extensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionMethodForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionMethodForGeneration::cPtr_extensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionMethodName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mExtensionMethodName (in_mExtensionMethodName),
mProperty_mImplementedAsFunction (in_mImplementedAsFunction),
mProperty_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

void cPtr_extensionMethodForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionMethodForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionMethodForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionMethodName, mProperty_mImplementedAsFunction, mProperty_mExtensionMethodFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodForGeneration ("extensionMethodForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration result ;
  const GALGAS_extensionMethodForGeneration * p = (const GALGAS_extensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodForGeneration_2D_weak::objectCompare (const GALGAS_extensionMethodForGeneration_2D_weak & inOperand) const {
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

GALGAS_extensionMethodForGeneration_2D_weak::GALGAS_extensionMethodForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration_2D_weak & GALGAS_extensionMethodForGeneration_2D_weak::operator = (const GALGAS_extensionMethodForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration_2D_weak::GALGAS_extensionMethodForGeneration_2D_weak (const GALGAS_extensionMethodForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration_2D_weak GALGAS_extensionMethodForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration_2D_weak::bang_extensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionMethodForGeneration) ;
      result = GALGAS_extensionMethodForGeneration ((cPtr_extensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodForGeneration_2D_weak ("extensionMethodForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration_2D_weak GALGAS_extensionMethodForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration_2D_weak result ;
  const GALGAS_extensionMethodForGeneration_2D_weak * p = (const GALGAS_extensionMethodForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterName.objectCompare (p->mProperty_mExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterFormalParameterList.objectCompare (p->mProperty_mExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterInstructionList.objectCompare (p->mProperty_mExtensionSetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSetterDeclarationLocation.objectCompare (p->mProperty_mEndOfSetterDeclarationLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extensionSetterAST::objectCompare (const GALGAS_extensionSetterAST & inOperand) const {
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

GALGAS_extensionSetterAST::GALGAS_extensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST::GALGAS_extensionSetterAST (const cPtr_extensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionSetterName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mExtensionSetterFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionSetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfSetterDeclarationLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mExtensionSetterInstructionList.isValid () && inAttribute_mEndOfSetterDeclarationLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionSetterName, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mExtensionSetterInstructionList, inAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionSetterAST::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mExtensionSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_extensionSetterAST::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_extensionSetterAST::getter_mExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mExtensionSetterInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mEndOfSetterDeclarationLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionSetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionSetterAST::cPtr_extensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionSetterName,
                                                  const GALGAS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                                  const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mExtensionSetterName (in_mExtensionSetterName),
mProperty_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mProperty_mExtensionSetterInstructionList (in_mExtensionSetterInstructionList),
mProperty_mEndOfSetterDeclarationLocation (in_mEndOfSetterDeclarationLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

void cPtr_extensionSetterAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionSetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSetterDeclarationLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionSetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mExtensionSetterName, mProperty_mExtensionSetterFormalParameterList, mProperty_mExtensionSetterInstructionList, mProperty_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterAST ("extensionSetterAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST result ;
  const GALGAS_extensionSetterAST * p = (const GALGAS_extensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterAST_2D_weak::objectCompare (const GALGAS_extensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_extensionSetterAST_2D_weak::GALGAS_extensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak & GALGAS_extensionSetterAST_2D_weak::operator = (const GALGAS_extensionSetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak::GALGAS_extensionSetterAST_2D_weak (const GALGAS_extensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak GALGAS_extensionSetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionSetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST GALGAS_extensionSetterAST_2D_weak::bang_extensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionSetterAST) ;
      result = GALGAS_extensionSetterAST ((cPtr_extensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterAST_2D_weak ("extensionSetterAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak GALGAS_extensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST_2D_weak result ;
  const GALGAS_extensionSetterAST_2D_weak * p = (const GALGAS_extensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
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
    result = mProperty_mExtensionSetterName.objectCompare (p->mProperty_mExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementedAsFunction.objectCompare (p->mProperty_mImplementedAsFunction) ;
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


typeComparisonResult GALGAS_extensionSetterForGeneration::objectCompare (const GALGAS_extensionSetterForGeneration & inOperand) const {
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

GALGAS_extensionSetterForGeneration::GALGAS_extensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration::GALGAS_extensionSetterForGeneration (const cPtr_extensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionSetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionSetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionSetterName, inAttribute_mImplementedAsFunction, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_extensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mExtensionSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionSetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mImplementedAsFunction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_extensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_extensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_extensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionSetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionSetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mExtensionSetterName (in_mExtensionSetterName),
mProperty_mImplementedAsFunction (in_mImplementedAsFunction),
mProperty_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

void cPtr_extensionSetterForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionSetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionSetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionSetterName, mProperty_mImplementedAsFunction, mProperty_mExtensionSetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterForGeneration ("extensionSetterForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration result ;
  const GALGAS_extensionSetterForGeneration * p = (const GALGAS_extensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterForGeneration_2D_weak::objectCompare (const GALGAS_extensionSetterForGeneration_2D_weak & inOperand) const {
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

GALGAS_extensionSetterForGeneration_2D_weak::GALGAS_extensionSetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration_2D_weak & GALGAS_extensionSetterForGeneration_2D_weak::operator = (const GALGAS_extensionSetterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration_2D_weak::GALGAS_extensionSetterForGeneration_2D_weak (const GALGAS_extensionSetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration_2D_weak GALGAS_extensionSetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration_2D_weak::bang_extensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionSetterForGeneration) ;
      result = GALGAS_extensionSetterForGeneration ((cPtr_extensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterForGeneration_2D_weak ("extensionSetterForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration_2D_weak GALGAS_extensionSetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration_2D_weak result ;
  const GALGAS_extensionSetterForGeneration_2D_weak * p = (const GALGAS_extensionSetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingAbstractExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
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


typeComparisonResult GALGAS_overridingAbstractExtensionGetterAST::objectCompare (const GALGAS_overridingAbstractExtensionGetterAST & inOperand) const {
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

GALGAS_overridingAbstractExtensionGetterAST::GALGAS_overridingAbstractExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST::GALGAS_overridingAbstractExtensionGetterAST (const cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionGetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mAbstractExtensionGetterName,
                                                                                                          const GALGAS_formalInputParameterListAST & inAttribute_mAbstractExtensionGetterFormalInputParameterList,
                                                                                                          const GALGAS_lstring & inAttribute_mAbstractExtensionGetterReturnedTypeName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mAbstractExtensionGetterFormalInputParameterList.isValid () && inAttribute_mAbstractExtensionGetterReturnedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionGetterName, inAttribute_mAbstractExtensionGetterFormalInputParameterList, inAttribute_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mProperty_mAbstractExtensionGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mProperty_mAbstractExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionGetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionGetterAST::cPtr_overridingAbstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
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

const C_galgas_type_descriptor * cPtr_overridingAbstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;
}

void cPtr_overridingAbstractExtensionGetterAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overridingAbstractExtensionGetterAST:" ;
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

acPtr_class * cPtr_overridingAbstractExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionGetterName, mProperty_mAbstractExtensionGetterFormalInputParameterList, mProperty_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingAbstractExtensionGetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ("overridingAbstractExtensionGetterAST",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST result ;
  const GALGAS_overridingAbstractExtensionGetterAST * p = (const GALGAS_overridingAbstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_overridingAbstractExtensionGetterAST_2D_weak::objectCompare (const GALGAS_overridingAbstractExtensionGetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingAbstractExtensionGetterAST_2D_weak::GALGAS_overridingAbstractExtensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak & GALGAS_overridingAbstractExtensionGetterAST_2D_weak::operator = (const GALGAS_overridingAbstractExtensionGetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak::GALGAS_overridingAbstractExtensionGetterAST_2D_weak (const GALGAS_overridingAbstractExtensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak GALGAS_overridingAbstractExtensionGetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST_2D_weak::bang_overridingAbstractExtensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingAbstractExtensionGetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionGetterAST) ;
      result = GALGAS_overridingAbstractExtensionGetterAST ((cPtr_overridingAbstractExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingAbstractExtensionGetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2D_weak ("overridingAbstractExtensionGetterAST-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak GALGAS_overridingAbstractExtensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST_2D_weak result ;
  const GALGAS_overridingAbstractExtensionGetterAST_2D_weak * p = (const GALGAS_overridingAbstractExtensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingAbstractExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
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
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_overridingAbstractExtensionMethodAST::objectCompare (const GALGAS_overridingAbstractExtensionMethodAST & inOperand) const {
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

GALGAS_overridingAbstractExtensionMethodAST::GALGAS_overridingAbstractExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST::GALGAS_overridingAbstractExtensionMethodAST (const cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionMethodAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionMethodName,
                                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionMethodFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionMethodName.isValid () && inAttribute_mOverridingExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionMethodName, inAttribute_mOverridingExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    result = p->mProperty_mOverridingExtensionMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    result = p->mProperty_mOverridingExtensionMethodFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionMethodAST::setter_setMOverridingExtensionMethodName (GALGAS_lstring inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    p->mProperty_mOverridingExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionMethodAST::setter_setMOverridingExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    p->mProperty_mOverridingExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionMethodAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionMethodAST::cPtr_overridingAbstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                      const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionMethodName (in_mOverridingExtensionMethodName),
mProperty_mOverridingExtensionMethodFormalParameterList (in_mOverridingExtensionMethodFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingAbstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

void cPtr_overridingAbstractExtensionMethodAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overridingAbstractExtensionMethodAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingAbstractExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionMethodAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionMethodName, mProperty_mOverridingExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingAbstractExtensionMethodAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ("overridingAbstractExtensionMethodAST",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST result ;
  const GALGAS_overridingAbstractExtensionMethodAST * p = (const GALGAS_overridingAbstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_overridingAbstractExtensionMethodAST_2D_weak::objectCompare (const GALGAS_overridingAbstractExtensionMethodAST_2D_weak & inOperand) const {
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

GALGAS_overridingAbstractExtensionMethodAST_2D_weak::GALGAS_overridingAbstractExtensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak & GALGAS_overridingAbstractExtensionMethodAST_2D_weak::operator = (const GALGAS_overridingAbstractExtensionMethodAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak::GALGAS_overridingAbstractExtensionMethodAST_2D_weak (const GALGAS_overridingAbstractExtensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak GALGAS_overridingAbstractExtensionMethodAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST_2D_weak::bang_overridingAbstractExtensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingAbstractExtensionMethodAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionMethodAST) ;
      result = GALGAS_overridingAbstractExtensionMethodAST ((cPtr_overridingAbstractExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingAbstractExtensionMethodAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2D_weak ("overridingAbstractExtensionMethodAST-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak GALGAS_overridingAbstractExtensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST_2D_weak result ;
  const GALGAS_overridingAbstractExtensionMethodAST_2D_weak * p = (const GALGAS_overridingAbstractExtensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingAbstractExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
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
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_overridingAbstractExtensionSetterAST::objectCompare (const GALGAS_overridingAbstractExtensionSetterAST & inOperand) const {
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

GALGAS_overridingAbstractExtensionSetterAST::GALGAS_overridingAbstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST::GALGAS_overridingAbstractExtensionSetterAST (const cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionSetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionSetterName,
                                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionSetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionSetterName.isValid () && inAttribute_mOverridingExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionSetterName, inAttribute_mOverridingExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    result = p->mProperty_mOverridingExtensionSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    result = p->mProperty_mOverridingExtensionSetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionSetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionSetterAST::cPtr_overridingAbstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionSetterName (in_mOverridingExtensionSetterName),
mProperty_mOverridingExtensionSetterFormalParameterList (in_mOverridingExtensionSetterFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingAbstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;
}

void cPtr_overridingAbstractExtensionSetterAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overridingAbstractExtensionSetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingAbstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionSetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionSetterName, mProperty_mOverridingExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingAbstractExtensionSetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ("overridingAbstractExtensionSetterAST",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  const GALGAS_overridingAbstractExtensionSetterAST * p = (const GALGAS_overridingAbstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_overridingAbstractExtensionSetterAST_2D_weak::objectCompare (const GALGAS_overridingAbstractExtensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingAbstractExtensionSetterAST_2D_weak::GALGAS_overridingAbstractExtensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak & GALGAS_overridingAbstractExtensionSetterAST_2D_weak::operator = (const GALGAS_overridingAbstractExtensionSetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak::GALGAS_overridingAbstractExtensionSetterAST_2D_weak (const GALGAS_overridingAbstractExtensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak GALGAS_overridingAbstractExtensionSetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST_2D_weak::bang_overridingAbstractExtensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionSetterAST) ;
      result = GALGAS_overridingAbstractExtensionSetterAST ((cPtr_overridingAbstractExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingAbstractExtensionSetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2D_weak ("overridingAbstractExtensionSetterAST-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak GALGAS_overridingAbstractExtensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST_2D_weak result ;
  const GALGAS_overridingAbstractExtensionSetterAST_2D_weak * p = (const GALGAS_overridingAbstractExtensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionGetterName.objectCompare (p->mProperty_mOverridingExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionGetterFormalInputParameterList.objectCompare (p->mProperty_mOverridingExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionGetterReturnedTypeName.objectCompare (p->mProperty_mOverridingExtensionGetterReturnedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionGetterReturnedVariableName.objectCompare (p->mProperty_mOverridingExtensionGetterReturnedVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionGetterInstructionList.objectCompare (p->mProperty_mOverridingExtensionGetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReaderLocation.objectCompare (p->mProperty_mEndOfReaderLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_overridingExtensionGetterAST::objectCompare (const GALGAS_overridingExtensionGetterAST & inOperand) const {
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

GALGAS_overridingExtensionGetterAST::GALGAS_overridingExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
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

GALGAS_overridingExtensionGetterAST::GALGAS_overridingExtensionGetterAST (const cPtr_overridingExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionGetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionGetterName,
                                                                                          const GALGAS_formalInputParameterListAST & inAttribute_mOverridingExtensionGetterFormalInputParameterList,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionGetterReturnedTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionGetterReturnedVariableName,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionGetterInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionGetterName.isValid () && inAttribute_mOverridingExtensionGetterFormalInputParameterList.isValid () && inAttribute_mOverridingExtensionGetterReturnedTypeName.isValid () && inAttribute_mOverridingExtensionGetterReturnedVariableName.isValid () && inAttribute_mOverridingExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionGetterName, inAttribute_mOverridingExtensionGetterFormalInputParameterList, inAttribute_mOverridingExtensionGetterReturnedTypeName, inAttribute_mOverridingExtensionGetterReturnedVariableName, inAttribute_mOverridingExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mProperty_mOverridingExtensionGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mProperty_mOverridingExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mProperty_mOverridingExtensionGetterReturnedVariableName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mProperty_mOverridingExtensionGetterInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mProperty_mEndOfReaderLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionGetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionGetterAST::cPtr_overridingExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                      const GALGAS_location & in_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionGetterName (in_mOverridingExtensionGetterName),
mProperty_mOverridingExtensionGetterFormalInputParameterList (in_mOverridingExtensionGetterFormalInputParameterList),
mProperty_mOverridingExtensionGetterReturnedTypeName (in_mOverridingExtensionGetterReturnedTypeName),
mProperty_mOverridingExtensionGetterReturnedVariableName (in_mOverridingExtensionGetterReturnedVariableName),
mProperty_mOverridingExtensionGetterInstructionList (in_mOverridingExtensionGetterInstructionList),
mProperty_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

void cPtr_overridingExtensionGetterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@overridingExtensionGetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mOverridingExtensionGetterFormalInputParameterList, mProperty_mOverridingExtensionGetterReturnedTypeName, mProperty_mOverridingExtensionGetterReturnedVariableName, mProperty_mOverridingExtensionGetterInstructionList, mProperty_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionGetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionGetterAST ("overridingExtensionGetterAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionGetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST result ;
  const GALGAS_overridingExtensionGetterAST * p = (const GALGAS_overridingExtensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_overridingExtensionGetterAST_2D_weak::objectCompare (const GALGAS_overridingExtensionGetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionGetterAST_2D_weak::GALGAS_overridingExtensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak & GALGAS_overridingExtensionGetterAST_2D_weak::operator = (const GALGAS_overridingExtensionGetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak::GALGAS_overridingExtensionGetterAST_2D_weak (const GALGAS_overridingExtensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak GALGAS_overridingExtensionGetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST_2D_weak::bang_overridingExtensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionGetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionGetterAST) ;
      result = GALGAS_overridingExtensionGetterAST ((cPtr_overridingExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionGetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2D_weak ("overridingExtensionGetterAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak GALGAS_overridingExtensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST_2D_weak result ;
  const GALGAS_overridingExtensionGetterAST_2D_weak * p = (const GALGAS_overridingExtensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overrideExtensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
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
    result = mProperty_mOverridingExtensionGetterName.objectCompare (p->mProperty_mOverridingExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultVarCppName.objectCompare (p->mProperty_mResultVarCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridingExtensionGetterFormalParameterList.objectCompare (p->mProperty_mOverridingExtensionGetterFormalParameterList) ;
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


typeComparisonResult GALGAS_overrideExtensionGetterForGeneration::objectCompare (const GALGAS_overrideExtensionGetterForGeneration & inOperand) const {
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

GALGAS_overrideExtensionGetterForGeneration::GALGAS_overrideExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                       GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                       GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration::GALGAS_overrideExtensionGetterForGeneration (const cPtr_overrideExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overrideExtensionGetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                          const GALGAS_string & inAttribute_mOverridingExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                          const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mOverridingExtensionGetterFormalParameterList,
                                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mOverridingExtensionGetterName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mOverridingExtensionGetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overrideExtensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mOverridingExtensionGetterName, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mOverridingExtensionGetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_overrideExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mBaseTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mOverridingExtensionGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_overrideExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mResultVarCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mOverridingExtensionGetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overrideExtensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overrideExtensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overrideExtensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mBaseTypeName,
                                                                                      const GALGAS_string & in_mOverridingExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                      const GALGAS_string & in_mResultVarCppName,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mBaseTypeName (in_mBaseTypeName),
mProperty_mOverridingExtensionGetterName (in_mOverridingExtensionGetterName),
mProperty_mResultType (in_mResultType),
mProperty_mResultVarCppName (in_mResultVarCppName),
mProperty_mOverridingExtensionGetterFormalParameterList (in_mOverridingExtensionGetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overrideExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

void cPtr_overrideExtensionGetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overrideExtensionGetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridingExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overrideExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overrideExtensionGetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mOverridingExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@overrideExtensionGetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ("overrideExtensionGetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration result ;
  const GALGAS_overrideExtensionGetterForGeneration * p = (const GALGAS_overrideExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overrideExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_overrideExtensionGetterForGeneration_2D_weak::objectCompare (const GALGAS_overrideExtensionGetterForGeneration_2D_weak & inOperand) const {
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

GALGAS_overrideExtensionGetterForGeneration_2D_weak::GALGAS_overrideExtensionGetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak & GALGAS_overrideExtensionGetterForGeneration_2D_weak::operator = (const GALGAS_overrideExtensionGetterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak::GALGAS_overrideExtensionGetterForGeneration_2D_weak (const GALGAS_overrideExtensionGetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak GALGAS_overrideExtensionGetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration_2D_weak::bang_overrideExtensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overrideExtensionGetterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overrideExtensionGetterForGeneration) ;
      result = GALGAS_overrideExtensionGetterForGeneration ((cPtr_overrideExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overrideExtensionGetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2D_weak ("overrideExtensionGetterForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideExtensionGetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideExtensionGetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideExtensionGetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak GALGAS_overrideExtensionGetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration_2D_weak result ;
  const GALGAS_overrideExtensionGetterForGeneration_2D_weak * p = (const GALGAS_overrideExtensionGetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overrideExtensionGetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideExtensionGetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
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
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionMethodName,
                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionMethodFormalParameterList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionMethodInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionMethodName.isValid () && inAttribute_mOverridingExtensionMethodFormalParameterList.isValid () && inAttribute_mOverridingExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionMethodName, inAttribute_mOverridingExtensionMethodFormalParameterList, inAttribute_mOverridingExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mProperty_mOverridingExtensionMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mProperty_mOverridingExtensionMethodFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionMethodAST::getter_mOverridingExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mProperty_mOverridingExtensionMethodInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mProperty_mEndOfMethodLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodAST::cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                      const GALGAS_location & in_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
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
  macroMyNew (ptr, cPtr_overridingExtensionMethodAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionMethodName, mProperty_mOverridingExtensionMethodFormalParameterList, mProperty_mOverridingExtensionMethodInstructionList, mProperty_mEndOfMethodLocation COMMA_THERE)) ;
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

typeComparisonResult GALGAS_overridingExtensionMethodAST_2D_weak::objectCompare (const GALGAS_overridingExtensionMethodAST_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionMethodAST_2D_weak::GALGAS_overridingExtensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak & GALGAS_overridingExtensionMethodAST_2D_weak::operator = (const GALGAS_overridingExtensionMethodAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak::GALGAS_overridingExtensionMethodAST_2D_weak (const GALGAS_overridingExtensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak GALGAS_overridingExtensionMethodAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST_2D_weak::bang_overridingExtensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionMethodAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionMethodAST) ;
      result = GALGAS_overridingExtensionMethodAST ((cPtr_overridingExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionMethodAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2D_weak ("overridingExtensionMethodAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak GALGAS_overridingExtensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST_2D_weak result ;
  const GALGAS_overridingExtensionMethodAST_2D_weak * p = (const GALGAS_overridingExtensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                         GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_overridingExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mProperty_mBaseTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mProperty_mExtensionMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mProperty_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overridingExtensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
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
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_overridingExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
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
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionSetterName,
                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionSetterFormalParameterList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionSetterInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfSetterDeclarationLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionSetterName.isValid () && inAttribute_mOverridingExtensionSetterFormalParameterList.isValid () && inAttribute_mOverridingExtensionSetterInstructionList.isValid () && inAttribute_mEndOfSetterDeclarationLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionSetterName, inAttribute_mOverridingExtensionSetterFormalParameterList, inAttribute_mOverridingExtensionSetterInstructionList, inAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mProperty_mOverridingExtensionSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mProperty_mOverridingExtensionSetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionSetterAST::getter_mOverridingExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mProperty_mOverridingExtensionSetterInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mProperty_mEndOfSetterDeclarationLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterAST::cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                      const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
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
  macroMyNew (ptr, cPtr_overridingExtensionSetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionSetterName, mProperty_mOverridingExtensionSetterFormalParameterList, mProperty_mOverridingExtensionSetterInstructionList, mProperty_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
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

typeComparisonResult GALGAS_overridingExtensionSetterAST_2D_weak::objectCompare (const GALGAS_overridingExtensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionSetterAST_2D_weak::GALGAS_overridingExtensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak & GALGAS_overridingExtensionSetterAST_2D_weak::operator = (const GALGAS_overridingExtensionSetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak::GALGAS_overridingExtensionSetterAST_2D_weak (const GALGAS_overridingExtensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak GALGAS_overridingExtensionSetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST_2D_weak::bang_overridingExtensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionSetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionSetterAST) ;
      result = GALGAS_overridingExtensionSetterAST ((cPtr_overridingExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@overridingExtensionSetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2D_weak ("overridingExtensionSetterAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak GALGAS_overridingExtensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST_2D_weak result ;
  const GALGAS_overridingExtensionSetterAST_2D_weak * p = (const GALGAS_overridingExtensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                         GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_overridingExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mProperty_mBaseTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mProperty_mExtensionSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mProperty_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overridingExtensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_outputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_outputActualParameterAST::getter_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mProperty_mOutputActualParameterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_outputActualParameterAST::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mProperty_mEndOfExpressionLocation ;
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

typeComparisonResult GALGAS_outputActualParameterAST_2D_weak::objectCompare (const GALGAS_outputActualParameterAST_2D_weak & inOperand) const {
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

GALGAS_outputActualParameterAST_2D_weak::GALGAS_outputActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak & GALGAS_outputActualParameterAST_2D_weak::operator = (const GALGAS_outputActualParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak::GALGAS_outputActualParameterAST_2D_weak (const GALGAS_outputActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak GALGAS_outputActualParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outputActualParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST_2D_weak::bang_outputActualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputActualParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputActualParameterAST) ;
      result = GALGAS_outputActualParameterAST ((cPtr_outputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outputActualParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterAST_2D_weak ("outputActualParameterAST-weak",
                                                         & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak GALGAS_outputActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST_2D_weak result ;
  const GALGAS_outputActualParameterAST_2D_weak * p = (const GALGAS_outputActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_outputInputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputActualParameterAST::getter_mOutputInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mProperty_mOutputInputActualParameterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_outputInputActualParameterAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mProperty_mStructAttributeList ;
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

typeComparisonResult GALGAS_outputInputActualParameterAST_2D_weak::objectCompare (const GALGAS_outputInputActualParameterAST_2D_weak & inOperand) const {
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

GALGAS_outputInputActualParameterAST_2D_weak::GALGAS_outputInputActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak & GALGAS_outputInputActualParameterAST_2D_weak::operator = (const GALGAS_outputInputActualParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak::GALGAS_outputInputActualParameterAST_2D_weak (const GALGAS_outputInputActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak GALGAS_outputInputActualParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST_2D_weak::bang_outputInputActualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputActualParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterAST) ;
      result = GALGAS_outputInputActualParameterAST ((cPtr_outputInputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputActualParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterAST_2D_weak ("outputInputActualParameterAST-weak",
                                                              & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak GALGAS_outputInputActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST_2D_weak result ;
  const GALGAS_outputInputActualParameterAST_2D_weak * p = (const GALGAS_outputInputActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_outputInputSingleJokerParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputSingleJokerParameterAST * p = (const cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
    result = p->mProperty_mActualSelector ;
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

typeComparisonResult GALGAS_outputInputSingleJokerParameterAST_2D_weak::objectCompare (const GALGAS_outputInputSingleJokerParameterAST_2D_weak & inOperand) const {
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

GALGAS_outputInputSingleJokerParameterAST_2D_weak::GALGAS_outputInputSingleJokerParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak & GALGAS_outputInputSingleJokerParameterAST_2D_weak::operator = (const GALGAS_outputInputSingleJokerParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak::GALGAS_outputInputSingleJokerParameterAST_2D_weak (const GALGAS_outputInputSingleJokerParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak GALGAS_outputInputSingleJokerParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST_2D_weak::bang_outputInputSingleJokerParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputSingleJokerParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputSingleJokerParameterAST) ;
      result = GALGAS_outputInputSingleJokerParameterAST ((cPtr_outputInputSingleJokerParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputSingleJokerParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST_2D_weak ("outputInputSingleJokerParameterAST-weak",
                                                                   & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputSingleJokerParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputSingleJokerParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSingleJokerParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak GALGAS_outputInputSingleJokerParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST_2D_weak result ;
  const GALGAS_outputInputSingleJokerParameterAST_2D_weak * p = (const GALGAS_outputInputSingleJokerParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputSingleJokerParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSingleJokerParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    result = p->mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    result = p->mProperty_mInputActualParameterName ;
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

typeComparisonResult GALGAS_inputActualExistingVariableParameterAST_2D_weak::objectCompare (const GALGAS_inputActualExistingVariableParameterAST_2D_weak & inOperand) const {
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

GALGAS_inputActualExistingVariableParameterAST_2D_weak::GALGAS_inputActualExistingVariableParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak & GALGAS_inputActualExistingVariableParameterAST_2D_weak::operator = (const GALGAS_inputActualExistingVariableParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak::GALGAS_inputActualExistingVariableParameterAST_2D_weak (const GALGAS_inputActualExistingVariableParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak GALGAS_inputActualExistingVariableParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST_2D_weak::bang_inputActualExistingVariableParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualExistingVariableParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualExistingVariableParameterAST) ;
      result = GALGAS_inputActualExistingVariableParameterAST ((cPtr_inputActualExistingVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualExistingVariableParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2D_weak ("inputActualExistingVariableParameterAST-weak",
                                                                        & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualExistingVariableParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualExistingVariableParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualExistingVariableParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak GALGAS_inputActualExistingVariableParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST_2D_weak result ;
  const GALGAS_inputActualExistingVariableParameterAST_2D_weak * p = (const GALGAS_inputActualExistingVariableParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualExistingVariableParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputActualSelfPropertyParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualSelfPropertyParameterAST * p = (const cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    result = p->mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualSelfPropertyParameterAST::getter_mInputActualSelfPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualSelfPropertyParameterAST * p = (const cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    result = p->mProperty_mInputActualSelfPropertyName ;
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

typeComparisonResult GALGAS_inputActualSelfPropertyParameterAST_2D_weak::objectCompare (const GALGAS_inputActualSelfPropertyParameterAST_2D_weak & inOperand) const {
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

GALGAS_inputActualSelfPropertyParameterAST_2D_weak::GALGAS_inputActualSelfPropertyParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak & GALGAS_inputActualSelfPropertyParameterAST_2D_weak::operator = (const GALGAS_inputActualSelfPropertyParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak::GALGAS_inputActualSelfPropertyParameterAST_2D_weak (const GALGAS_inputActualSelfPropertyParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak GALGAS_inputActualSelfPropertyParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST_2D_weak::bang_inputActualSelfPropertyParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualSelfPropertyParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualSelfPropertyParameterAST) ;
      result = GALGAS_inputActualSelfPropertyParameterAST ((cPtr_inputActualSelfPropertyParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualSelfPropertyParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2D_weak ("inputActualSelfPropertyParameterAST-weak",
                                                                    & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualSelfPropertyParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualSelfPropertyParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualSelfPropertyParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak GALGAS_inputActualSelfPropertyParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST_2D_weak result ;
  const GALGAS_inputActualSelfPropertyParameterAST_2D_weak * p = (const GALGAS_inputActualSelfPropertyParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualSelfPropertyParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mProperty_mInputOptionalActualTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mProperty_mInputActualParameterName ;
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

typeComparisonResult GALGAS_inputActualNewVariableParameterAST_2D_weak::objectCompare (const GALGAS_inputActualNewVariableParameterAST_2D_weak & inOperand) const {
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

GALGAS_inputActualNewVariableParameterAST_2D_weak::GALGAS_inputActualNewVariableParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak & GALGAS_inputActualNewVariableParameterAST_2D_weak::operator = (const GALGAS_inputActualNewVariableParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak::GALGAS_inputActualNewVariableParameterAST_2D_weak (const GALGAS_inputActualNewVariableParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak GALGAS_inputActualNewVariableParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST_2D_weak::bang_inputActualNewVariableParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualNewVariableParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewVariableParameterAST) ;
      result = GALGAS_inputActualNewVariableParameterAST ((cPtr_inputActualNewVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualNewVariableParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2D_weak ("inputActualNewVariableParameterAST-weak",
                                                                   & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewVariableParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewVariableParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewVariableParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak GALGAS_inputActualNewVariableParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST_2D_weak result ;
  const GALGAS_inputActualNewVariableParameterAST_2D_weak * p = (const GALGAS_inputActualNewVariableParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewVariableParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mProperty_mInputOptionalActualTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mProperty_mInputActualParameterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_inputActualNewConstantParameterAST::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mProperty_mMarkedAsUnused ;
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

typeComparisonResult GALGAS_inputActualNewConstantParameterAST_2D_weak::objectCompare (const GALGAS_inputActualNewConstantParameterAST_2D_weak & inOperand) const {
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

GALGAS_inputActualNewConstantParameterAST_2D_weak::GALGAS_inputActualNewConstantParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak & GALGAS_inputActualNewConstantParameterAST_2D_weak::operator = (const GALGAS_inputActualNewConstantParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak::GALGAS_inputActualNewConstantParameterAST_2D_weak (const GALGAS_inputActualNewConstantParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak GALGAS_inputActualNewConstantParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST_2D_weak::bang_inputActualNewConstantParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualNewConstantParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewConstantParameterAST) ;
      result = GALGAS_inputActualNewConstantParameterAST ((cPtr_inputActualNewConstantParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualNewConstantParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2D_weak ("inputActualNewConstantParameterAST-weak",
                                                                   & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewConstantParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewConstantParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewConstantParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak GALGAS_inputActualNewConstantParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST_2D_weak result ;
  const GALGAS_inputActualNewConstantParameterAST_2D_weak * p = (const GALGAS_inputActualNewConstantParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewConstantParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputSingleJokerActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    result = p->mProperty_mActualSelector ;
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

typeComparisonResult GALGAS_inputSingleJokerActualParameterAST_2D_weak::objectCompare (const GALGAS_inputSingleJokerActualParameterAST_2D_weak & inOperand) const {
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

GALGAS_inputSingleJokerActualParameterAST_2D_weak::GALGAS_inputSingleJokerActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak & GALGAS_inputSingleJokerActualParameterAST_2D_weak::operator = (const GALGAS_inputSingleJokerActualParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak::GALGAS_inputSingleJokerActualParameterAST_2D_weak (const GALGAS_inputSingleJokerActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak GALGAS_inputSingleJokerActualParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST_2D_weak::bang_inputSingleJokerActualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputSingleJokerActualParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputSingleJokerActualParameterAST) ;
      result = GALGAS_inputSingleJokerActualParameterAST ((cPtr_inputSingleJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputSingleJokerActualParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2D_weak ("inputSingleJokerActualParameterAST-weak",
                                                                   & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak GALGAS_inputSingleJokerActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST_2D_weak result ;
  const GALGAS_inputSingleJokerActualParameterAST_2D_weak * p = (const GALGAS_inputSingleJokerActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputSingleJokerActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputParameterVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    result = p->mProperty_mActualParameterName ;
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

typeComparisonResult GALGAS_inputParameterVariable_2D_weak::objectCompare (const GALGAS_inputParameterVariable_2D_weak & inOperand) const {
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

GALGAS_inputParameterVariable_2D_weak::GALGAS_inputParameterVariable_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak & GALGAS_inputParameterVariable_2D_weak::operator = (const GALGAS_inputParameterVariable & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak::GALGAS_inputParameterVariable_2D_weak (const GALGAS_inputParameterVariable & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak GALGAS_inputParameterVariable_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputParameterVariable_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable_2D_weak::bang_inputParameterVariable_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterVariable result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterVariable) ;
      result = GALGAS_inputParameterVariable ((cPtr_inputParameterVariable *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterVariable-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterVariable_2D_weak ("inputParameterVariable-weak",
                                                       & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterVariable_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterVariable_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak GALGAS_inputParameterVariable_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable_2D_weak result ;
  const GALGAS_inputParameterVariable_2D_weak * p = (const GALGAS_inputParameterVariable_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterVariable_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    result = p->mProperty_mActualParameterTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    result = p->mProperty_mActualParameterName ;
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

typeComparisonResult GALGAS_inputParameterDeclaredVariable_2D_weak::objectCompare (const GALGAS_inputParameterDeclaredVariable_2D_weak & inOperand) const {
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

GALGAS_inputParameterDeclaredVariable_2D_weak::GALGAS_inputParameterDeclaredVariable_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak & GALGAS_inputParameterDeclaredVariable_2D_weak::operator = (const GALGAS_inputParameterDeclaredVariable & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak::GALGAS_inputParameterDeclaredVariable_2D_weak (const GALGAS_inputParameterDeclaredVariable & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak GALGAS_inputParameterDeclaredVariable_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable_2D_weak::bang_inputParameterDeclaredVariable_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterDeclaredVariable result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredVariable) ;
      result = GALGAS_inputParameterDeclaredVariable ((cPtr_inputParameterDeclaredVariable *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterDeclaredVariable-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2D_weak ("inputParameterDeclaredVariable-weak",
                                                               & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredVariable_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredVariable_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredVariable_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak GALGAS_inputParameterDeclaredVariable_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable_2D_weak result ;
  const GALGAS_inputParameterDeclaredVariable_2D_weak * p = (const GALGAS_inputParameterDeclaredVariable_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterDeclaredVariable_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    result = p->mProperty_mActualParameterTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    result = p->mProperty_mActualParameterName ;
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

typeComparisonResult GALGAS_inputParameterDeclaredConstant_2D_weak::objectCompare (const GALGAS_inputParameterDeclaredConstant_2D_weak & inOperand) const {
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

GALGAS_inputParameterDeclaredConstant_2D_weak::GALGAS_inputParameterDeclaredConstant_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak & GALGAS_inputParameterDeclaredConstant_2D_weak::operator = (const GALGAS_inputParameterDeclaredConstant & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak::GALGAS_inputParameterDeclaredConstant_2D_weak (const GALGAS_inputParameterDeclaredConstant & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak GALGAS_inputParameterDeclaredConstant_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant_2D_weak::bang_inputParameterDeclaredConstant_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterDeclaredConstant result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredConstant) ;
      result = GALGAS_inputParameterDeclaredConstant ((cPtr_inputParameterDeclaredConstant *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterDeclaredConstant-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2D_weak ("inputParameterDeclaredConstant-weak",
                                                               & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredConstant_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredConstant_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredConstant_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak GALGAS_inputParameterDeclaredConstant_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant_2D_weak result ;
  const GALGAS_inputParameterDeclaredConstant_2D_weak * p = (const GALGAS_inputParameterDeclaredConstant_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterDeclaredConstant_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_bool GALGAS_externRoutineDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externRoutineDeclarationAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externRoutineDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mProperty_mFormalArgumentList ;
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

typeComparisonResult GALGAS_externRoutineDeclarationAST_2D_weak::objectCompare (const GALGAS_externRoutineDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_externRoutineDeclarationAST_2D_weak::GALGAS_externRoutineDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineDeclarationAST_2D_weak & GALGAS_externRoutineDeclarationAST_2D_weak::operator = (const GALGAS_externRoutineDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineDeclarationAST_2D_weak::GALGAS_externRoutineDeclarationAST_2D_weak (const GALGAS_externRoutineDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineDeclarationAST_2D_weak GALGAS_externRoutineDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_externRoutineDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST_2D_weak::bang_externRoutineDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externRoutineDeclarationAST) ;
      result = GALGAS_externRoutineDeclarationAST ((cPtr_externRoutineDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externRoutineDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineDeclarationAST_2D_weak ("externRoutineDeclarationAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externRoutineDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externRoutineDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineDeclarationAST_2D_weak GALGAS_externRoutineDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineDeclarationAST_2D_weak result ;
  const GALGAS_externRoutineDeclarationAST_2D_weak * p = (const GALGAS_externRoutineDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_semanticInstructionListAST GALGAS_procDeclarationAST::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procDeclarationAST * p = (const cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    result = p->mProperty_mRoutineInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_procDeclarationAST::getter_mEndOfRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_procDeclarationAST * p = (const cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    result = p->mProperty_mEndOfRoutineInstructionList ;
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

typeComparisonResult GALGAS_procDeclarationAST_2D_weak::objectCompare (const GALGAS_procDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_procDeclarationAST_2D_weak::GALGAS_procDeclarationAST_2D_weak (void) :
GALGAS_externRoutineDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak & GALGAS_procDeclarationAST_2D_weak::operator = (const GALGAS_procDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak::GALGAS_procDeclarationAST_2D_weak (const GALGAS_procDeclarationAST & inSource) :
GALGAS_externRoutineDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak GALGAS_procDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_procDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST_2D_weak::bang_procDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procDeclarationAST) ;
      result = GALGAS_procDeclarationAST ((cPtr_procDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@procDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procDeclarationAST_2D_weak ("procDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_externRoutineDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak GALGAS_procDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST_2D_weak result ;
  const GALGAS_procDeclarationAST_2D_weak * p = (const GALGAS_procDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_externFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_externFunctionDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    result = p->mProperty_mFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    result = p->mProperty_mResultTypeName ;
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

typeComparisonResult GALGAS_externFunctionDeclarationAST_2D_weak::objectCompare (const GALGAS_externFunctionDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_externFunctionDeclarationAST_2D_weak::GALGAS_externFunctionDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak & GALGAS_externFunctionDeclarationAST_2D_weak::operator = (const GALGAS_externFunctionDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak::GALGAS_externFunctionDeclarationAST_2D_weak (const GALGAS_externFunctionDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak GALGAS_externFunctionDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST_2D_weak::bang_externFunctionDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externFunctionDeclarationAST) ;
      result = GALGAS_externFunctionDeclarationAST ((cPtr_externFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externFunctionDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak ("externFunctionDeclarationAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak GALGAS_externFunctionDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST_2D_weak result ;
  const GALGAS_externFunctionDeclarationAST_2D_weak * p = (const GALGAS_externFunctionDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_functionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mProperty_mResultVariableName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_functionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mProperty_mFunctionInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_functionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mProperty_mEndOfFunctionInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mProperty_mIsUsefull ;
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

typeComparisonResult GALGAS_functionDeclarationAST_2D_weak::objectCompare (const GALGAS_functionDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_functionDeclarationAST_2D_weak::GALGAS_functionDeclarationAST_2D_weak (void) :
GALGAS_externFunctionDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak & GALGAS_functionDeclarationAST_2D_weak::operator = (const GALGAS_functionDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak::GALGAS_functionDeclarationAST_2D_weak (const GALGAS_functionDeclarationAST & inSource) :
GALGAS_externFunctionDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak GALGAS_functionDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST_2D_weak::bang_functionDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionDeclarationAST) ;
      result = GALGAS_functionDeclarationAST ((cPtr_functionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ("functionDeclarationAST-weak",
                                                       & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak GALGAS_functionDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST_2D_weak result ;
  const GALGAS_functionDeclarationAST_2D_weak * p = (const GALGAS_functionDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mProperty_mResultTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mProperty_mResultVariableName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_onceFunctionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mProperty_mFunctionInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_onceFunctionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mProperty_mEndOfFunctionInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mProperty_mIsUsefull ;
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

typeComparisonResult GALGAS_onceFunctionDeclarationAST_2D_weak::objectCompare (const GALGAS_onceFunctionDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_onceFunctionDeclarationAST_2D_weak::GALGAS_onceFunctionDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak & GALGAS_onceFunctionDeclarationAST_2D_weak::operator = (const GALGAS_onceFunctionDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak::GALGAS_onceFunctionDeclarationAST_2D_weak (const GALGAS_onceFunctionDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak GALGAS_onceFunctionDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST_2D_weak::bang_onceFunctionDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_onceFunctionDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationAST) ;
      result = GALGAS_onceFunctionDeclarationAST ((cPtr_onceFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@onceFunctionDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2D_weak ("onceFunctionDeclarationAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak GALGAS_onceFunctionDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST_2D_weak result ;
  const GALGAS_onceFunctionDeclarationAST_2D_weak * p = (const GALGAS_onceFunctionDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_onceFunctionDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_bool GALGAS_filewrapperDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationAST::getter_mSourceFileAbsolutePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mProperty_mSourceFileAbsolutePath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mProperty_mFilewrapperPath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::getter_mFilewrapperTextFileExtensionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mProperty_mFilewrapperTextFileExtensionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::getter_mFilewrapperBinaryFileExtensionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperDeclarationAST::getter_mFilewrapperTemplateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mProperty_mFilewrapperTemplateList ;
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

typeComparisonResult GALGAS_filewrapperDeclarationAST_2D_weak::objectCompare (const GALGAS_filewrapperDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_filewrapperDeclarationAST_2D_weak::GALGAS_filewrapperDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak & GALGAS_filewrapperDeclarationAST_2D_weak::operator = (const GALGAS_filewrapperDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak::GALGAS_filewrapperDeclarationAST_2D_weak (const GALGAS_filewrapperDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak GALGAS_filewrapperDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST_2D_weak::bang_filewrapperDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationAST) ;
      result = GALGAS_filewrapperDeclarationAST ((cPtr_filewrapperDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2D_weak ("filewrapperDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak GALGAS_filewrapperDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST_2D_weak result ;
  const GALGAS_filewrapperDeclarationAST_2D_weak * p = (const GALGAS_filewrapperDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentAST::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentAST::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mProperty_mRuleList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_SyntaxComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mProperty_mHasTranslateFeature ;
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

typeComparisonResult GALGAS_galgas_33_SyntaxComponentAST_2D_weak::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak & inOperand) const {
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

GALGAS_galgas_33_SyntaxComponentAST_2D_weak::GALGAS_galgas_33_SyntaxComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak & GALGAS_galgas_33_SyntaxComponentAST_2D_weak::operator = (const GALGAS_galgas_33_SyntaxComponentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak::GALGAS_galgas_33_SyntaxComponentAST_2D_weak (const GALGAS_galgas_33_SyntaxComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak GALGAS_galgas_33_SyntaxComponentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST_2D_weak::bang_galgas_33_SyntaxComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_SyntaxComponentAST) ;
      result = GALGAS_galgas_33_SyntaxComponentAST ((cPtr_galgas_33_SyntaxComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3SyntaxComponentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ("galgas3SyntaxComponentAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak GALGAS_galgas_33_SyntaxComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST_2D_weak result ;
  const GALGAS_galgas_33_SyntaxComponentAST_2D_weak * p = (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lbool GALGAS_galgas_33_GrammarComponentAST::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mHasIndexing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mGrammarComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::getter_mGrammarClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mGrammarClass ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mSyntaxComponents ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mStartSymbolName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentAST::getter_mStartSymbolLabelList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mStartSymbolLabelList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::getter_mUnusedNonterminalList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mUnusedNonterminalList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_GrammarComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mProperty_mHasTranslateFeature ;
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

typeComparisonResult GALGAS_galgas_33_GrammarComponentAST_2D_weak::objectCompare (const GALGAS_galgas_33_GrammarComponentAST_2D_weak & inOperand) const {
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

GALGAS_galgas_33_GrammarComponentAST_2D_weak::GALGAS_galgas_33_GrammarComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak & GALGAS_galgas_33_GrammarComponentAST_2D_weak::operator = (const GALGAS_galgas_33_GrammarComponentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak::GALGAS_galgas_33_GrammarComponentAST_2D_weak (const GALGAS_galgas_33_GrammarComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak GALGAS_galgas_33_GrammarComponentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST_2D_weak::bang_galgas_33_GrammarComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GrammarComponentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_GrammarComponentAST) ;
      result = GALGAS_galgas_33_GrammarComponentAST ((cPtr_galgas_33_GrammarComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3GrammarComponentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ("galgas3GrammarComponentAST-weak",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak GALGAS_galgas_33_GrammarComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST_2D_weak result ;
  const GALGAS_galgas_33_GrammarComponentAST_2D_weak * p = (const GALGAS_galgas_33_GrammarComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GrammarComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap-entry baseType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry extensionGetter_baseType (const GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result_outBaseType ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_entry temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 391)).isValid ()) {
    uint32_t variant_16743 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 391)).uintValue () ;
    bool loop_16743 = true ;
    while (loop_16743) {
      loop_16743 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 391)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 391)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 391)).isValid () ;
      if (loop_16743) {
        loop_16743 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 391)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 391)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 391)).boolValue () ;
      }
      if (loop_16743 && (0 == variant_16743)) {
        loop_16743 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticsTypes.galgas", 391)) ;
      }
      if (loop_16743) {
        variant_16743 -- ;
        result_outBaseType = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 392)) ;
      }
    }
  }
//---
  return result_outBaseType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-entry addHeaderFileName'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const GALGAS_unifiedTypeMap_2D_entry inObject,
                                        GALGAS_stringset & ioArgument_ioInclusions,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap_2D_entry temp_1 = inObject ;
    const GALGAS_unifiedTypeMap_2D_entry temp_2 = inObject ;
    test_0 = temp_1.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 399)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 399)).operator_and (GALGAS_bool (kIsNotEqual, temp_2.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 399)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticsTypes.galgas", 399)))) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 399)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_unifiedTypeMap_2D_entry temp_3 = inObject ;
      ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 400))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 400)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-entry addHeaderFileName1'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const GALGAS_unifiedTypeMap_2D_entry inObject,
                                            GALGAS_stringset & ioArgument_ioInclusions,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap_2D_entry temp_1 = inObject ;
    test_0 = temp_1.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 407)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 407)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_unifiedTypeMap_2D_entry temp_2 = inObject ;
      switch (temp_2.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 408)).enumValue ()) {
      case GALGAS_headerKind::kNotBuilt:
        break ;
      case GALGAS_headerKind::kEnum_noHeader:
        {
        }
        break ;
      case GALGAS_headerKind::kEnum_oneHeader:
        {
          const GALGAS_unifiedTypeMap_2D_entry temp_3 = inObject ;
          ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 411))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 411)) ;
        }
        break ;
      case GALGAS_headerKind::kEnum_twoHeaders:
        {
          const GALGAS_unifiedTypeMap_2D_entry temp_4 = inObject ;
          ioArgument_ioInclusions.addAssign_operation (temp_4.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 413)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 413))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 413)) ;
        }
        break ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_actualParameterForGeneration::objectCompare (const GALGAS_actualParameterForGeneration & inOperand) const {
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

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_actualParameterForGeneration::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_actualParameterForGeneration * p = (const cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    result = p->mProperty_mFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterForGeneration::setter_setMFormalArgumentType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_actualParameterForGeneration * p = (cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    p->mProperty_mFormalArgumentType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType
                                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mFormalArgumentType (in_mFormalArgumentType) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterForGeneration ("actualParameterForGeneration",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualParameterForGeneration_2D_weak::objectCompare (const GALGAS_actualParameterForGeneration_2D_weak & inOperand) const {
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

GALGAS_actualParameterForGeneration_2D_weak::GALGAS_actualParameterForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak & GALGAS_actualParameterForGeneration_2D_weak::operator = (const GALGAS_actualParameterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak::GALGAS_actualParameterForGeneration_2D_weak (const GALGAS_actualParameterForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak GALGAS_actualParameterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_actualParameterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration GALGAS_actualParameterForGeneration_2D_weak::bang_actualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterForGeneration) ;
      result = GALGAS_actualParameterForGeneration ((cPtr_actualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak ("actualParameterForGeneration-weak",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak GALGAS_actualParameterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterForGeneration_2D_weak result ;
  const GALGAS_actualParameterForGeneration_2D_weak * p = (const GALGAS_actualParameterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_actualParameterForGeneration_generateActualParameter> gExtensionMethodTable_actualParameterForGeneration_generateActualParameter ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateActualParameter (const int32_t inClassIndex,
                                                   extensionMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_actualParameterForGeneration_generateActualParameter (void) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_actualParameterForGeneration_generateActualParameter (NULL,
                                                                                 freeExtensionMethod_actualParameterForGeneration_generateActualParameter) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputInputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutputInputVariableCppName.objectCompare (p->mProperty_mOutputInputVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeList.objectCompare (p->mProperty_mTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputInputActualParameterForGeneration::objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const {
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

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                          GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                          GALGAS_unifiedTypeMapEntryList::constructor_emptyList (HERE)
                                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mFormalArgumentType,
                                                                                                                const GALGAS_string & inAttribute_mOutputInputVariableCppName,
                                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                                const GALGAS_unifiedTypeMapEntryList & inAttribute_mTypeList
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputInputVariableCppName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mTypeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputInputVariableCppName, inAttribute_mStructAttributeList, inAttribute_mTypeList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_outputInputActualParameterForGeneration::getter_mOutputInputVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mProperty_mOutputInputVariableCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_outputInputActualParameterForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_outputInputActualParameterForGeneration::getter_mTypeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mProperty_mTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMOutputInputVariableCppName (GALGAS_string inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mOutputInputVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMTypeList (GALGAS_unifiedTypeMapEntryList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mTypeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                                            const GALGAS_string & in_mOutputInputVariableCppName,
                                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                            const GALGAS_unifiedTypeMapEntryList & in_mTypeList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mOutputInputVariableCppName (in_mOutputInputVariableCppName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mTypeList (in_mTypeList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

void cPtr_outputInputActualParameterForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@outputInputActualParameterForGeneration:" ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutputInputVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputInputVariableCppName, mProperty_mStructAttributeList, mProperty_mTypeList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputActualParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ("outputInputActualParameterForGeneration",
                                                                & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outputInputActualParameterForGeneration_2D_weak::objectCompare (const GALGAS_outputInputActualParameterForGeneration_2D_weak & inOperand) const {
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

GALGAS_outputInputActualParameterForGeneration_2D_weak::GALGAS_outputInputActualParameterForGeneration_2D_weak (void) :
GALGAS_actualParameterForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak & GALGAS_outputInputActualParameterForGeneration_2D_weak::operator = (const GALGAS_outputInputActualParameterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak::GALGAS_outputInputActualParameterForGeneration_2D_weak (const GALGAS_outputInputActualParameterForGeneration & inSource) :
GALGAS_actualParameterForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak GALGAS_outputInputActualParameterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration_2D_weak::bang_outputInputActualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputActualParameterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterForGeneration) ;
      result = GALGAS_outputInputActualParameterForGeneration ((cPtr_outputInputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputActualParameterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2D_weak ("outputInputActualParameterForGeneration-weak",
                                                                        & kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak GALGAS_outputInputActualParameterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration_2D_weak result ;
  const GALGAS_outputInputActualParameterForGeneration_2D_weak * p = (const GALGAS_outputInputActualParameterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualParameterForGeneration * p = (const cPtr_inputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputActualCppName.objectCompare (p->mProperty_mInputActualCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputActualParameterForGeneration::objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const {
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

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mFormalArgumentType,
                                                                                                    const GALGAS_string & inAttribute_mInputActualCppName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mInputActualCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mInputActualCppName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_inputActualParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualParameterForGeneration * p = (const cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    result = p->mProperty_mInputActualCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualParameterForGeneration::setter_setMInputActualCppName (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    p->mProperty_mInputActualCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputActualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                                const GALGAS_string & in_mInputActualCppName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mInputActualCppName (in_mInputActualCppName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

void cPtr_inputActualParameterForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@inputActualParameterForGeneration:" ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualParameterForGeneration ("inputActualParameterForGeneration",
                                                          & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_inputActualParameterForGeneration_2D_weak::objectCompare (const GALGAS_inputActualParameterForGeneration_2D_weak & inOperand) const {
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

GALGAS_inputActualParameterForGeneration_2D_weak::GALGAS_inputActualParameterForGeneration_2D_weak (void) :
GALGAS_actualParameterForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration_2D_weak & GALGAS_inputActualParameterForGeneration_2D_weak::operator = (const GALGAS_inputActualParameterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration_2D_weak::GALGAS_inputActualParameterForGeneration_2D_weak (const GALGAS_inputActualParameterForGeneration & inSource) :
GALGAS_actualParameterForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration_2D_weak GALGAS_inputActualParameterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration_2D_weak::bang_inputActualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualParameterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualParameterForGeneration) ;
      result = GALGAS_inputActualParameterForGeneration ((cPtr_inputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputActualParameterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2D_weak ("inputActualParameterForGeneration-weak",
                                                                  & kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualParameterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualParameterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualParameterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration_2D_weak GALGAS_inputActualParameterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration_2D_weak result ;
  const GALGAS_inputActualParameterForGeneration_2D_weak * p = (const GALGAS_inputActualParameterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualParameterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputJokerParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputJokerParameterForGeneration * p = (const cPtr_inputJokerParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputActualCppName.objectCompare (p->mProperty_mInputActualCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputJokerParameterForGeneration::objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const {
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

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputJokerParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mFormalArgumentType,
                                                                                                  const GALGAS_string & inAttribute_mInputActualCppName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mInputActualCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputJokerParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mInputActualCppName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_inputJokerParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputJokerParameterForGeneration * p = (const cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    result = p->mProperty_mInputActualCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputJokerParameterForGeneration::setter_setMInputActualCppName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputJokerParameterForGeneration * p = (cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    p->mProperty_mInputActualCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                              const GALGAS_string & in_mInputActualCppName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mInputActualCppName (in_mInputActualCppName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputJokerParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

void cPtr_inputJokerParameterForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@inputJokerParameterForGeneration:" ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputJokerParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputJokerParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputJokerParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ("inputJokerParameterForGeneration",
                                                         & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputJokerParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputJokerParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_inputJokerParameterForGeneration_2D_weak::objectCompare (const GALGAS_inputJokerParameterForGeneration_2D_weak & inOperand) const {
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

GALGAS_inputJokerParameterForGeneration_2D_weak::GALGAS_inputJokerParameterForGeneration_2D_weak (void) :
GALGAS_actualParameterForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration_2D_weak & GALGAS_inputJokerParameterForGeneration_2D_weak::operator = (const GALGAS_inputJokerParameterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration_2D_weak::GALGAS_inputJokerParameterForGeneration_2D_weak (const GALGAS_inputJokerParameterForGeneration & inSource) :
GALGAS_actualParameterForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration_2D_weak GALGAS_inputJokerParameterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputJokerParameterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration_2D_weak::bang_inputJokerParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputJokerParameterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputJokerParameterForGeneration) ;
      result = GALGAS_inputJokerParameterForGeneration ((cPtr_inputJokerParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputJokerParameterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2D_weak ("inputJokerParameterForGeneration-weak",
                                                                 & kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputJokerParameterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputJokerParameterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerParameterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration_2D_weak GALGAS_inputJokerParameterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerParameterForGeneration_2D_weak result ;
  const GALGAS_inputJokerParameterForGeneration_2D_weak * p = (const GALGAS_inputJokerParameterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputJokerParameterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerParameterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mHeaderContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mProperty_mHeaderContents ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mCppContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mProperty_mCppContents ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mCocoaHeader (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mProperty_mCocoaHeader ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::getter_mCocoaImplementation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mProperty_mCocoaImplementation ;
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

