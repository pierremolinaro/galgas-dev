#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_extensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterName ;
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

GALGAS_formalInputParameterListAST cPtr_extensionGetterAST::getter_mExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterFormalInputParameterList ;
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

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterReturnedTypeName ;
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

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterReturnedVariableName ;
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

GALGAS_semanticInstructionListAST cPtr_extensionGetterAST::getter_mExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterInstructionList ;
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

GALGAS_location cPtr_extensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfReaderLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterAST::setter_setMExtensionGetterName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::setter_setMExtensionGetterName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterAST::setter_setMExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterFormalInputParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::setter_setMExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterFormalInputParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterAST::setter_setMExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterReturnedTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::setter_setMExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterReturnedTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterAST::setter_setMExtensionGetterReturnedVariableName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterReturnedVariableName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::setter_setMExtensionGetterReturnedVariableName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterReturnedVariableName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterAST::setter_setMExtensionGetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::setter_setMExtensionGetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterAST::setter_setMEndOfReaderLocation (GALGAS_location inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mEndOfReaderLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::setter_setMEndOfReaderLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfReaderLocation = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
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
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionGetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
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

GALGAS_string cPtr_extensionGetterForGeneration::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterName ;
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

GALGAS_bool cPtr_extensionGetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplementedAsFunction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
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

GALGAS_string cPtr_extensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultVarCppName ;
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

GALGAS_formalInputParameterListForGeneration cPtr_extensionGetterForGeneration::getter_mExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterFormalParameterList ;
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

GALGAS_typedPropertyList cPtr_extensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
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

GALGAS_semanticInstructionListForGeneration cPtr_extensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMExtensionGetterName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mExtensionGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMExtensionGetterName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mImplementedAsFunction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplementedAsFunction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mResultType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMResultVarCppName (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mResultVarCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMResultVarCppName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultVarCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mExtensionGetterFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionGetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_extensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_extensionMethodAST::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodName ;
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

GALGAS_formalParameterListAST cPtr_extensionMethodAST::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodFormalParameterList ;
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

GALGAS_semanticInstructionListAST cPtr_extensionMethodAST::getter_mExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodInstructionList ;
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

GALGAS_location cPtr_extensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfMethodLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodAST::setter_setMExtensionMethodName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::setter_setMExtensionMethodName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodAST::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodAST::setter_setMExtensionMethodInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mExtensionMethodInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::setter_setMExtensionMethodInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodAST::setter_setMEndOfMethodLocation (GALGAS_location inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mEndOfMethodLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::setter_setMEndOfMethodLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfMethodLocation = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_extensionMethodForGeneration::GALGAS_extensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
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
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
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

GALGAS_string cPtr_extensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodName ;
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

GALGAS_bool cPtr_extensionMethodForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplementedAsFunction ;
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

GALGAS_formalParameterListForGeneration cPtr_extensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodFormalParameterList ;
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

GALGAS_typedPropertyList cPtr_extensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
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

GALGAS_semanticInstructionListForGeneration cPtr_extensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodForGeneration::setter_setMExtensionMethodName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::setter_setMExtensionMethodName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mImplementedAsFunction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplementedAsFunction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodForGeneration::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionMethodForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionMethodForGeneration::cPtr_extensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_extensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_extensionSetterAST::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterName ;
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

GALGAS_formalParameterListAST cPtr_extensionSetterAST::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterFormalParameterList ;
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

GALGAS_semanticInstructionListAST cPtr_extensionSetterAST::getter_mExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterInstructionList ;
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

GALGAS_location cPtr_extensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSetterDeclarationLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterAST::setter_setMExtensionSetterName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mExtensionSetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::setter_setMExtensionSetterName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterAST::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mExtensionSetterFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterAST::setter_setMExtensionSetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mExtensionSetterInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::setter_setMExtensionSetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterAST::setter_setMEndOfSetterDeclarationLocation (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mEndOfSetterDeclarationLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::setter_setMEndOfSetterDeclarationLocation (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfSetterDeclarationLocation = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_extensionSetterForGeneration::GALGAS_extensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
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
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
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

GALGAS_string cPtr_extensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterName ;
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

GALGAS_bool cPtr_extensionSetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplementedAsFunction ;
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

GALGAS_formalParameterListForGeneration cPtr_extensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterFormalParameterList ;
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

GALGAS_typedPropertyList cPtr_extensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
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

GALGAS_semanticInstructionListForGeneration cPtr_extensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterForGeneration::setter_setMExtensionSetterName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mExtensionSetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::setter_setMExtensionSetterName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mImplementedAsFunction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplementedAsFunction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterForGeneration::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mExtensionSetterFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionSetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_overridingAbstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterName ;
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

GALGAS_formalInputParameterListAST cPtr_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterFormalInputParameterList ;
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

GALGAS_lstring cPtr_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterReturnedTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionGetterAST::setter_setMAbstractExtensionGetterName (GALGAS_lstring inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    p->mProperty_mAbstractExtensionGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::setter_setMAbstractExtensionGetterName (GALGAS_lstring inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionGetterAST::setter_setMAbstractExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    p->mProperty_mAbstractExtensionGetterFormalInputParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::setter_setMAbstractExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterFormalInputParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionGetterAST::setter_setMAbstractExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    p->mProperty_mAbstractExtensionGetterReturnedTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::setter_setMAbstractExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterReturnedTypeName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_overridingAbstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionMethodName ;
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

GALGAS_formalParameterListAST cPtr_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionMethodFormalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionMethodAST::setter_setMOverridingExtensionMethodName (GALGAS_lstring inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    p->mProperty_mOverridingExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::setter_setMOverridingExtensionMethodName (GALGAS_lstring inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionMethodName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionMethodAST::setter_setMOverridingExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    p->mProperty_mOverridingExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::setter_setMOverridingExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionMethodFormalParameterList = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_overridingAbstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionSetterName ;
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

GALGAS_formalParameterListAST cPtr_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionSetterFormalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionSetterAST::setter_setMOverridingExtensionSetterName (GALGAS_lstring inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    p->mProperty_mOverridingExtensionSetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::setter_setMOverridingExtensionSetterName (GALGAS_lstring inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionSetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingAbstractExtensionSetterAST::setter_setMOverridingExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    p->mProperty_mOverridingExtensionSetterFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::setter_setMOverridingExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionSetterFormalParameterList = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionGetterName ;
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

GALGAS_formalInputParameterListAST cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionGetterFormalInputParameterList ;
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

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionGetterReturnedTypeName ;
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

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionGetterReturnedVariableName ;
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

GALGAS_semanticInstructionListAST cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionGetterInstructionList ;
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

GALGAS_location cPtr_overridingExtensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfReaderLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterName (GALGAS_lstring inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    p->mProperty_mOverridingExtensionGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionGetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    p->mProperty_mOverridingExtensionGetterFormalInputParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionGetterFormalInputParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    p->mProperty_mOverridingExtensionGetterReturnedTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionGetterReturnedTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterReturnedVariableName (GALGAS_lstring inValue
                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    p->mProperty_mOverridingExtensionGetterReturnedVariableName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterReturnedVariableName (GALGAS_lstring inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionGetterReturnedVariableName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    p->mProperty_mOverridingExtensionGetterInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::setter_setMOverridingExtensionGetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionGetterInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionGetterAST::setter_setMEndOfReaderLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    p->mProperty_mEndOfReaderLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::setter_setMEndOfReaderLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfReaderLocation = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_overrideExtensionGetterForGeneration::GALGAS_overrideExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
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
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                          const GALGAS_string & inAttribute_mOverridingExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overrideExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_overrideExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
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

GALGAS_string cPtr_overrideExtensionGetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseTypeName ;
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

GALGAS_string cPtr_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionGetterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overrideExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_overrideExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
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

GALGAS_string cPtr_overrideExtensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultVarCppName ;
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

GALGAS_formalInputParameterListForGeneration cPtr_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionGetterFormalParameterList ;
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

GALGAS_typedPropertyList cPtr_overrideExtensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
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

GALGAS_semanticInstructionListForGeneration cPtr_overrideExtensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMBaseTypeName (GALGAS_string inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mBaseTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMBaseTypeName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBaseTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMOverridingExtensionGetterName (GALGAS_string inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mOverridingExtensionGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMOverridingExtensionGetterName (GALGAS_string inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionGetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mResultType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMResultVarCppName (GALGAS_string inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mResultVarCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMResultVarCppName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultVarCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMOverridingExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mOverridingExtensionGetterFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMOverridingExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionGetterFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overrideExtensionGetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overrideExtensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mBaseTypeName,
                                                                                      const GALGAS_string & in_mOverridingExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_overridingExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_overridingExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionMethodName ;
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

GALGAS_formalParameterListAST cPtr_overridingExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionMethodFormalParameterList ;
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

GALGAS_semanticInstructionListAST cPtr_overridingExtensionMethodAST::getter_mOverridingExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionMethodInstructionList ;
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

GALGAS_location cPtr_overridingExtensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfMethodLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodAST::setter_setMOverridingExtensionMethodName (GALGAS_lstring inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    p->mProperty_mOverridingExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::setter_setMOverridingExtensionMethodName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionMethodName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodAST::setter_setMOverridingExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    p->mProperty_mOverridingExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::setter_setMOverridingExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionMethodFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodAST::setter_setMOverridingExtensionMethodInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    p->mProperty_mOverridingExtensionMethodInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::setter_setMOverridingExtensionMethodInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionMethodInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodAST::setter_setMEndOfMethodLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    p->mProperty_mEndOfMethodLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::setter_setMEndOfMethodLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfMethodLocation = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_overridingExtensionMethodForGeneration::GALGAS_overridingExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
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
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overridingExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_overridingExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
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

GALGAS_string cPtr_overridingExtensionMethodForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseTypeName ;
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

GALGAS_string cPtr_overridingExtensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodName ;
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

GALGAS_formalParameterListForGeneration cPtr_overridingExtensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodFormalParameterList ;
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

GALGAS_typedPropertyList cPtr_overridingExtensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
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

GALGAS_semanticInstructionListForGeneration cPtr_overridingExtensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodForGeneration::setter_setMBaseTypeName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    p->mProperty_mBaseTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::setter_setMBaseTypeName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBaseTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodForGeneration::setter_setMExtensionMethodName (GALGAS_string inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    p->mProperty_mExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::setter_setMExtensionMethodName (GALGAS_string inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodForGeneration::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    p->mProperty_mExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionMethodForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodForGeneration::cPtr_overridingExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_overridingExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
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

GALGAS_lstring cPtr_overridingExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionSetterName ;
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

GALGAS_formalParameterListAST cPtr_overridingExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionSetterFormalParameterList ;
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

GALGAS_semanticInstructionListAST cPtr_overridingExtensionSetterAST::getter_mOverridingExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridingExtensionSetterInstructionList ;
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

GALGAS_location cPtr_overridingExtensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSetterDeclarationLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterAST::setter_setMOverridingExtensionSetterName (GALGAS_lstring inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    p->mProperty_mOverridingExtensionSetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::setter_setMOverridingExtensionSetterName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionSetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterAST::setter_setMOverridingExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    p->mProperty_mOverridingExtensionSetterFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::setter_setMOverridingExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionSetterFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterAST::setter_setMOverridingExtensionSetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    p->mProperty_mOverridingExtensionSetterInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::setter_setMOverridingExtensionSetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridingExtensionSetterInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterAST::setter_setMEndOfSetterDeclarationLocation (GALGAS_location inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    p->mProperty_mEndOfSetterDeclarationLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::setter_setMEndOfSetterDeclarationLocation (GALGAS_location inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfSetterDeclarationLocation = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_overridingExtensionSetterForGeneration::GALGAS_overridingExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
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
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overridingExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_overridingExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
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

GALGAS_string cPtr_overridingExtensionSetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseTypeName ;
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

GALGAS_string cPtr_overridingExtensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterName ;
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

GALGAS_formalParameterListForGeneration cPtr_overridingExtensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterFormalParameterList ;
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

GALGAS_typedPropertyList cPtr_overridingExtensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
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

GALGAS_semanticInstructionListForGeneration cPtr_overridingExtensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterForGeneration::setter_setMBaseTypeName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    p->mProperty_mBaseTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::setter_setMBaseTypeName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBaseTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterForGeneration::setter_setMExtensionSetterName (GALGAS_string inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    p->mProperty_mExtensionSetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::setter_setMExtensionSetterName (GALGAS_string inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterForGeneration::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    p->mProperty_mExtensionSetterFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterFormalParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_overridingExtensionSetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterForGeneration::cPtr_overridingExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_outputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
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

GALGAS_semanticExpressionAST cPtr_outputActualParameterAST::getter_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutputActualParameterExpression ;
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

GALGAS_location cPtr_outputActualParameterAST::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpressionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterAST::setter_setMOutputActualParameterExpression (GALGAS_semanticExpressionAST inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    p->mProperty_mOutputActualParameterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::setter_setMOutputActualParameterExpression (GALGAS_semanticExpressionAST inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutputActualParameterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterAST::setter_setMEndOfExpressionLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    p->mProperty_mEndOfExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::setter_setMEndOfExpressionLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfExpressionLocation = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_outputInputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
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

GALGAS_lstring cPtr_outputInputActualParameterAST::getter_mOutputInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutputInputActualParameterName ;
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

GALGAS_lstringlist cPtr_outputInputActualParameterAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterAST::setter_setMOutputInputActualParameterName (GALGAS_lstring inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    p->mProperty_mOutputInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::setter_setMOutputInputActualParameterName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutputInputActualParameterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_outputInputSingleJokerParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputSingleJokerParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputInputSingleJokerParameterAST * p = (cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputActualExistingVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
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

GALGAS_lstring cPtr_inputActualExistingVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputActualParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualExistingVariableParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualExistingVariableParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    p->mProperty_mInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputActualParameterName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputActualSelfPropertyParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
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

GALGAS_lstring cPtr_inputActualSelfPropertyParameterAST::getter_mInputActualSelfPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputActualSelfPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualSelfPropertyParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualSelfPropertyParameterAST::setter_setMInputActualSelfPropertyName (GALGAS_lstring inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    p->mProperty_mInputActualSelfPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::setter_setMInputActualSelfPropertyName (GALGAS_lstring inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputActualSelfPropertyName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
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

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputOptionalActualTypeName ;
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

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputActualParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewVariableParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewVariableParameterAST::setter_setMInputOptionalActualTypeName (GALGAS_lstring inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    p->mProperty_mInputOptionalActualTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::setter_setMInputOptionalActualTypeName (GALGAS_lstring inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputOptionalActualTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewVariableParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    p->mProperty_mInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputActualParameterName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
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

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputOptionalActualTypeName ;
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

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputActualParameterName ;
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

GALGAS_bool cPtr_inputActualNewConstantParameterAST::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMarkedAsUnused ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMInputOptionalActualTypeName (GALGAS_lstring inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mInputOptionalActualTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::setter_setMInputOptionalActualTypeName (GALGAS_lstring inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputOptionalActualTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mInputActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::setter_setMInputActualParameterName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputActualParameterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualNewConstantParameterAST::setter_setMMarkedAsUnused (GALGAS_bool inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    p->mProperty_mMarkedAsUnused = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::setter_setMMarkedAsUnused (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMarkedAsUnused = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputSingleJokerActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputSingleJokerActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    p->mProperty_mActualSelector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::setter_setMActualSelector (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualSelector = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputParameterVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterVariable::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputParameterDeclaredVariable::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterTypeName ;
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

GALGAS_lstring cPtr_inputParameterDeclaredVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredVariable::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    p->mProperty_mActualParameterTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredVariable::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_inputParameterDeclaredConstant::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterTypeName ;
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

GALGAS_lstring cPtr_inputParameterDeclaredConstant::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredConstant::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    p->mProperty_mActualParameterTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputParameterDeclaredConstant::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_bool cPtr_externRoutineDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsInternal ;
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

GALGAS_lstring cPtr_externRoutineDeclarationAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineName ;
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

GALGAS_formalParameterListAST cPtr_externRoutineDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_externRoutineDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsInternal = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineDeclarationAST::setter_setMRoutineName (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_externRoutineDeclarationAST::setter_setMRoutineName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRoutineName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineDeclarationAST::setter_setMFormalArgumentList (GALGAS_formalParameterListAST inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externRoutineDeclarationAST * p = (cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_externRoutineDeclarationAST::setter_setMFormalArgumentList (GALGAS_formalParameterListAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFormalArgumentList = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_semanticInstructionListAST cPtr_procDeclarationAST::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineInstructionList ;
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

GALGAS_location cPtr_procDeclarationAST::getter_mEndOfRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfRoutineInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_procDeclarationAST::setter_setMRoutineInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    p->mProperty_mRoutineInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::setter_setMRoutineInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRoutineInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_procDeclarationAST::setter_setMEndOfRoutineInstructionList (GALGAS_location inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    p->mProperty_mEndOfRoutineInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::setter_setMEndOfRoutineInstructionList (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfRoutineInstructionList = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_externFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
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

GALGAS_formalInputParameterListAST cPtr_externFunctionDeclarationAST::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
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

GALGAS_lstring cPtr_externFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationAST::setter_setMFormalArgumentList (GALGAS_formalInputParameterListAST inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::setter_setMFormalArgumentList (GALGAS_formalInputParameterListAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFormalArgumentList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultTypeName = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_functionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultVariableName ;
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

GALGAS_semanticInstructionListAST cPtr_functionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionInstructionList ;
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

GALGAS_location cPtr_functionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfFunctionInstructionList ;
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

GALGAS_bool cPtr_functionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsInternal ;
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

GALGAS_bool cPtr_functionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUsefull ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMResultVariableName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mResultVariableName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::setter_setMResultVariableName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultVariableName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMEndOfFunctionInstructionList (GALGAS_location inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mEndOfFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::setter_setMEndOfFunctionInstructionList (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfFunctionInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsInternal = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setter_setMIsUsefull (GALGAS_bool inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mIsUsefull = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::setter_setMIsUsefull (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsUsefull = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_onceFunctionDeclarationAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
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

GALGAS_lstring cPtr_onceFunctionDeclarationAST::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultTypeName ;
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

GALGAS_lstring cPtr_onceFunctionDeclarationAST::getter_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultVariableName ;
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

GALGAS_semanticInstructionListAST cPtr_onceFunctionDeclarationAST::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionInstructionList ;
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

GALGAS_location cPtr_onceFunctionDeclarationAST::getter_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfFunctionInstructionList ;
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

GALGAS_bool cPtr_onceFunctionDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsInternal ;
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

GALGAS_bool cPtr_onceFunctionDeclarationAST::getter_mIsUsefull (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUsefull ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::setter_setMResultTypeName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMResultVariableName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mResultVariableName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::setter_setMResultVariableName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultVariableName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMEndOfFunctionInstructionList (GALGAS_location inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mEndOfFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::setter_setMEndOfFunctionInstructionList (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfFunctionInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsInternal = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_onceFunctionDeclarationAST::setter_setMIsUsefull (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    p->mProperty_mIsUsefull = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::setter_setMIsUsefull (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsUsefull = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_bool cPtr_filewrapperDeclarationAST::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsInternal ;
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

GALGAS_string cPtr_filewrapperDeclarationAST::getter_mSourceFileAbsolutePath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceFileAbsolutePath ;
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

GALGAS_lstring cPtr_filewrapperDeclarationAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
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

GALGAS_lstring cPtr_filewrapperDeclarationAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperPath ;
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

GALGAS_lstringlist cPtr_filewrapperDeclarationAST::getter_mFilewrapperTextFileExtensionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperTextFileExtensionList ;
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

GALGAS_lstringlist cPtr_filewrapperDeclarationAST::getter_mFilewrapperBinaryFileExtensionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperBinaryFileExtensionList ;
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

GALGAS_filewrapperTemplateListAST cPtr_filewrapperDeclarationAST::getter_mFilewrapperTemplateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperTemplateList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mIsInternal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::setter_setMIsInternal (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsInternal = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMSourceFileAbsolutePath (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mSourceFileAbsolutePath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::setter_setMSourceFileAbsolutePath (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceFileAbsolutePath = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperPath (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::setter_setMFilewrapperPath (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperPath = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperTextFileExtensionList (GALGAS_lstringlist inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperTextFileExtensionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::setter_setMFilewrapperTextFileExtensionList (GALGAS_lstringlist inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperTextFileExtensionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperBinaryFileExtensionList (GALGAS_lstringlist inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperBinaryFileExtensionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::setter_setMFilewrapperBinaryFileExtensionList (GALGAS_lstringlist inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperBinaryFileExtensionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperDeclarationAST::setter_setMFilewrapperTemplateList (GALGAS_filewrapperTemplateListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    p->mProperty_mFilewrapperTemplateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::setter_setMFilewrapperTemplateList (GALGAS_filewrapperTemplateListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperTemplateList = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lstring cPtr_galgas_33_SyntaxComponentAST::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponentName ;
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

GALGAS_lstring cPtr_galgas_33_SyntaxComponentAST::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueName ;
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

GALGAS_nonterminalDeclarationListAST cPtr_galgas_33_SyntaxComponentAST::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonterminalDeclarationList ;
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

GALGAS_syntaxRuleListAST cPtr_galgas_33_SyntaxComponentAST::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRuleList ;
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

GALGAS_bool cPtr_galgas_33_SyntaxComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMSyntaxComponentName (GALGAS_lstring inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mSyntaxComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::setter_setMSyntaxComponentName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMLexiqueName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mLexiqueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::setter_setMLexiqueName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMNonterminalDeclarationList (GALGAS_nonterminalDeclarationListAST inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mNonterminalDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::setter_setMNonterminalDeclarationList (GALGAS_nonterminalDeclarationListAST inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNonterminalDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMRuleList (GALGAS_syntaxRuleListAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mRuleList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::setter_setMRuleList (GALGAS_syntaxRuleListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRuleList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentAST::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    p->mProperty_mHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasTranslateFeature = inValue ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_lbool cPtr_galgas_33_GrammarComponentAST::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasIndexing ;
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

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarComponentName ;
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

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::getter_mGrammarClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarClass ;
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

GALGAS_lstringlist cPtr_galgas_33_GrammarComponentAST::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponents ;
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

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartSymbolName ;
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

GALGAS_nonTerminalLabelListAST cPtr_galgas_33_GrammarComponentAST::getter_mStartSymbolLabelList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartSymbolLabelList ;
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

GALGAS_lstringlist cPtr_galgas_33_GrammarComponentAST::getter_mUnusedNonterminalList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnusedNonterminalList ;
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

GALGAS_bool cPtr_galgas_33_GrammarComponentAST::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMHasIndexing (GALGAS_lbool inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mHasIndexing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMHasIndexing (GALGAS_lbool inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasIndexing = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMGrammarComponentName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mGrammarComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMGrammarComponentName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMGrammarClass (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mGrammarClass = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMGrammarClass (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarClass = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMSyntaxComponents (GALGAS_lstringlist inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mSyntaxComponents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMSyntaxComponents (GALGAS_lstringlist inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxComponents = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMStartSymbolName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mStartSymbolName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMStartSymbolName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStartSymbolName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMStartSymbolLabelList (GALGAS_nonTerminalLabelListAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mStartSymbolLabelList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMStartSymbolLabelList (GALGAS_nonTerminalLabelListAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStartSymbolLabelList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMUnusedNonterminalList (GALGAS_lstringlist inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mUnusedNonterminalList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMUnusedNonterminalList (GALGAS_lstringlist inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUnusedNonterminalList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GrammarComponentAST::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    p->mProperty_mHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasTranslateFeature = inValue ;
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
//Extension Getter '@unifiedTypeMap-proxy baseType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy extensionGetter_baseType (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result_outBaseType ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 380)).isValid ()) {
    uint32_t variant_18376 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 380)).uintValue () ;
    bool loop_18376 = true ;
    while (loop_18376) {
      loop_18376 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 380)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 380)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 380)).isValid () ;
      if (loop_18376) {
        loop_18376 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 380)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 380)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 380)).boolValue () ;
      }
      if (loop_18376 && (0 == variant_18376)) {
        loop_18376 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticsTypes.galgas", 380)) ;
      }
      if (loop_18376) {
        variant_18376 -- ;
        result_outBaseType = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 381)) ;
      }
    }
  }
//---
  return result_outBaseType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-proxy addHeaderFileName'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const GALGAS_unifiedTypeMap_2D_proxy inObject,
                                        GALGAS_stringset & ioArgument_ioInclusions,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
    const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
    test_0 = temp_1.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 388)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 388)).operator_and (GALGAS_bool (kIsNotEqual, temp_2.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 388)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticsTypes.galgas", 388)))) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 388)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_unifiedTypeMap_2D_proxy temp_3 = inObject ;
      ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 389))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 389)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-proxy addHeaderFileName1'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const GALGAS_unifiedTypeMap_2D_proxy inObject,
                                            GALGAS_stringset & ioArgument_ioInclusions,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
    test_0 = temp_1.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 396)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 396)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      switch (temp_2.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 397)).enumValue ()) {
      case GALGAS_headerKind::kNotBuilt:
        break ;
      case GALGAS_headerKind::kEnum_noHeader:
        {
        }
        break ;
      case GALGAS_headerKind::kEnum_oneHeader:
        {
          const GALGAS_unifiedTypeMap_2D_proxy temp_3 = inObject ;
          ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 400))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 400)) ;
        }
        break ;
      case GALGAS_headerKind::kEnum_twoHeaders:
        {
          const GALGAS_unifiedTypeMap_2D_proxy temp_4 = inObject ;
          ioArgument_ioInclusions.addAssign_operation (temp_4.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 402)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 402))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 402)) ;
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_actualParameterForGeneration::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_actualParameterForGeneration * p = (const cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    result = p->mProperty_mFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_actualParameterForGeneration::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterForGeneration::setter_setMFormalArgumentType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_actualParameterForGeneration * p = (cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    p->mProperty_mFormalArgumentType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_actualParameterForGeneration::setter_setMFormalArgumentType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFormalArgumentType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType
                                                                      COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                          GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                          GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)
                                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_string cPtr_outputInputActualParameterForGeneration::getter_mOutputInputVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutputInputVariableCppName ;
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

GALGAS_lstringlist cPtr_outputInputActualParameterForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList GALGAS_outputInputActualParameterForGeneration::getter_mTypeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mProperty_mTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList cPtr_outputInputActualParameterForGeneration::getter_mTypeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMOutputInputVariableCppName (GALGAS_string inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mOutputInputVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::setter_setMOutputInputVariableCppName (GALGAS_string inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutputInputVariableCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMTypeList (GALGAS_unifiedTypeMapProxyList inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mTypeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::setter_setMTypeList (GALGAS_unifiedTypeMapProxyList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                            const GALGAS_string & in_mOutputInputVariableCppName,
                                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                            const GALGAS_unifiedTypeMapProxyList & in_mTypeList
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
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

GALGAS_string cPtr_inputActualParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputActualCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputActualParameterForGeneration::setter_setMInputActualCppName (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    p->mProperty_mInputActualCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::setter_setMInputActualCppName (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputActualCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputActualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputJokerParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerParameterForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
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

GALGAS_string cPtr_inputJokerParameterForGeneration::getter_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputActualCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputJokerParameterForGeneration::setter_setMInputActualCppName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_inputJokerParameterForGeneration * p = (cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    p->mProperty_mInputActualCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::setter_setMInputActualCppName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInputActualCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueName ;
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

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mHeaderContents (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHeaderContents ;
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

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mCppContents (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppContents ;
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

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mCocoaHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCocoaHeader ;
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

GALGAS_string cPtr_lexiqueDeclarationForGeneration::getter_mCocoaImplementation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCocoaImplementation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mLexiqueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMHeaderContents (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mHeaderContents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::setter_setMHeaderContents (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHeaderContents = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMCppContents (GALGAS_string inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mCppContents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::setter_setMCppContents (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppContents = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMCocoaHeader (GALGAS_string inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mCocoaHeader = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::setter_setMCocoaHeader (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCocoaHeader = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMCocoaImplementation (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mCocoaImplementation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::setter_setMCocoaImplementation (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCocoaImplementation = inValue ;
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
//   Object comparison                                                                           
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_string GALGAS_grammarForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mGrammarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_grammarForGeneration::getter_mNonTerminalMapForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mNonTerminalMapForGrammarAnalysis ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis cPtr_grammarForGeneration::getter_mNonTerminalMapForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonTerminalMapForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_grammarForGeneration::getter_mNonTerminalToAddList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mNonTerminalToAddList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList cPtr_grammarForGeneration::getter_mNonTerminalToAddList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonTerminalToAddList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarForGeneration::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mHasIndexing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarForGeneration::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasIndexing ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_grammarForGeneration::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mSyntaxComponents ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_grammarForGeneration::getter_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponents ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mStartSymbolName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarForGeneration::getter_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartSymbolName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarForGeneration::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mHasTranslateFeature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarForGeneration::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::getter_mCppFileContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mProperty_mCppFileContents ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarForGeneration::getter_mCppFileContents (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppFileContents ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mGrammarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mLexiqueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMNonTerminalMapForGrammarAnalysis (GALGAS_nonTerminalSymbolMapForGrammarAnalysis inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mNonTerminalMapForGrammarAnalysis = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMNonTerminalMapForGrammarAnalysis (GALGAS_nonTerminalSymbolMapForGrammarAnalysis inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNonTerminalMapForGrammarAnalysis = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMNonTerminalToAddList (GALGAS_nonTerminalToAddList inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mNonTerminalToAddList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMNonTerminalToAddList (GALGAS_nonTerminalToAddList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNonTerminalToAddList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMHasIndexing (GALGAS_bool inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mHasIndexing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMHasIndexing (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasIndexing = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMSyntaxComponents (GALGAS_lstringlist inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mSyntaxComponents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMSyntaxComponents (GALGAS_lstringlist inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxComponents = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMStartSymbolName (GALGAS_string inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mStartSymbolName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMStartSymbolName (GALGAS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStartSymbolName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasTranslateFeature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarForGeneration::setter_setMCppFileContents (GALGAS_string inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    p->mProperty_mCppFileContents = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::setter_setMCppFileContents (GALGAS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppFileContents = inValue ;
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
//   Object comparison                                                                           
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_string GALGAS_routinePrototypeDeclarationForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_routinePrototypeDeclarationForGeneration * p = (const cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_routinePrototypeDeclarationForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_routinePrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_routinePrototypeDeclarationForGeneration * p = (const cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    result = p->mProperty_mFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration cPtr_routinePrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routinePrototypeDeclarationForGeneration::setter_setMRoutineName (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::setter_setMRoutineName (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRoutineName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routinePrototypeDeclarationForGeneration::setter_setMFormalArgumentList (GALGAS_formalParameterListForGeneration inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::setter_setMFormalArgumentList (GALGAS_formalParameterListForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFormalArgumentList = inValue ;
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
//   Object comparison                                                                           
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_bool GALGAS_routineImplementationForGeneration::getter_mGenerateStatic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineImplementationForGeneration * p = (const cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    result = p->mProperty_mGenerateStatic ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_routineImplementationForGeneration::getter_mGenerateStatic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateStatic ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_routineImplementationForGeneration::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineImplementationForGeneration * p = (const cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    result = p->mProperty_mRoutineInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_routineImplementationForGeneration::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineImplementationForGeneration::setter_setMGenerateStatic (GALGAS_bool inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    p->mProperty_mGenerateStatic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::setter_setMGenerateStatic (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGenerateStatic = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineImplementationForGeneration::setter_setMRoutineInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    p->mProperty_mRoutineInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::setter_setMRoutineInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRoutineInstructionList = inValue ;
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
//   Object comparison                                                                           
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                            GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                                            COMMA_THERE) ;
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
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPrototypeDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionPrototypeDeclarationForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionPrototypeDeclarationForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_functionPrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mProperty_mFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration cPtr_functionPrototypeDeclarationForGeneration::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionPrototypeDeclarationForGeneration::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cPtr_functionPrototypeDeclarationForGeneration::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionPrototypeDeclarationForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionPrototypeDeclarationForGeneration::setter_setMFormalArgumentList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::setter_setMFormalArgumentList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFormalArgumentList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionPrototypeDeclarationForGeneration::setter_setMReturnType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::setter_setMReturnType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReturnType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionPrototypeDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                const GALGAS_string & in_mImplementationCppFileName,
                                                                                                const GALGAS_string & in_mFunctionName,
                                                                                                const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
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
//   Object comparison                                                                           
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
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
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

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (void) :
GALGAS_functionPrototypeDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionImplementationForGeneration::getter_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    result = p->mProperty_mResultVariableCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionImplementationForGeneration::getter_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultVariableCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_functionImplementationForGeneration::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    result = p->mProperty_mFunctionInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_functionImplementationForGeneration::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionImplementationForGeneration::setter_setMResultVariableCppName (GALGAS_string inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    p->mProperty_mResultVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::setter_setMResultVariableCppName (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultVariableCppName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionImplementationForGeneration::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::setter_setMFunctionInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionImplementationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
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

