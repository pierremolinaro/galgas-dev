#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

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

void callExtensionMethod_generateExpression (cPtr_semanticExpressionForGeneration * inObject,
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
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    inObject->method_generateExpression (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
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

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                            const GALGAS_string & inAttribute_mTypeName,
                                                                                            const GALGAS_unifiedTypeMapEntry & inAttribute_mCastType
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

void GALGAS_castInExpressionForGeneration::setter_setMCastType (GALGAS_unifiedTypeMapEntry inValue
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

GALGAS_unifiedTypeMapEntry GALGAS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_string & in_mTypeName,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mCastType
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

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mFormalArgumentType,
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

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
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
    result = mProperty_mObjcCocoaHeader.objectCompare (p->mProperty_mObjcCocoaHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjcCocoaImplementation.objectCompare (p->mProperty_mObjcCocoaImplementation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwiftCocoaImplementation.objectCompare (p->mProperty_mSwiftCocoaImplementation) ;
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
                                                                                                const GALGAS_string & inAttribute_mObjcCocoaHeader,
                                                                                                const GALGAS_string & inAttribute_mObjcCocoaImplementation,
                                                                                                const GALGAS_string & inAttribute_mSwiftCocoaImplementation
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mHeaderContents.isValid () && inAttribute_mCppContents.isValid () && inAttribute_mObjcCocoaHeader.isValid () && inAttribute_mObjcCocoaImplementation.isValid () && inAttribute_mSwiftCocoaImplementation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mLexiqueName, inAttribute_mHeaderContents, inAttribute_mCppContents, inAttribute_mObjcCocoaHeader, inAttribute_mObjcCocoaImplementation, inAttribute_mSwiftCocoaImplementation COMMA_THERE)) ;
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

void GALGAS_lexiqueDeclarationForGeneration::setter_setMObjcCocoaHeader (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mObjcCocoaHeader = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMObjcCocoaImplementation (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mObjcCocoaImplementation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueDeclarationForGeneration::setter_setMSwiftCocoaImplementation (GALGAS_string inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    p->mProperty_mSwiftCocoaImplementation = inValue ;
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

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaHeader (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaHeader ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaImplementation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaImplementation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mSwiftCocoaImplementation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSwiftCocoaImplementation ;
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
                                                                            const GALGAS_string & in_mObjcCocoaHeader,
                                                                            const GALGAS_string & in_mObjcCocoaImplementation,
                                                                            const GALGAS_string & in_mSwiftCocoaImplementation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mHeaderContents (in_mHeaderContents),
mProperty_mCppContents (in_mCppContents),
mProperty_mObjcCocoaHeader (in_mObjcCocoaHeader),
mProperty_mObjcCocoaImplementation (in_mObjcCocoaImplementation),
mProperty_mSwiftCocoaImplementation (in_mSwiftCocoaImplementation) {
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
  mProperty_mObjcCocoaHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObjcCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwiftCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mLexiqueName, mProperty_mHeaderContents, mProperty_mCppContents, mProperty_mObjcCocoaHeader, mProperty_mObjcCocoaImplementation, mProperty_mSwiftCocoaImplementation COMMA_THERE)) ;
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak::GALGAS_lexiqueDeclarationForGeneration_2D_weak (const GALGAS_lexiqueDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak GALGAS_lexiqueDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration_2D_weak::bang_lexiqueDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak::GALGAS_grammarForGeneration_2D_weak (const GALGAS_grammarForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak GALGAS_grammarForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration_2D_weak::bang_grammarForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (const GALGAS_routinePrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::bang_routinePrototypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak::GALGAS_routineImplementationForGeneration_2D_weak (const GALGAS_routineImplementationForGeneration & inSource) :
GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak GALGAS_routineImplementationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration_2D_weak::bang_routineImplementationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routineImplementationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
                                                                                                                    const GALGAS_unifiedTypeMapEntry & inAttribute_mReturnType
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

void GALGAS_functionPrototypeDeclarationForGeneration::setter_setMReturnType (GALGAS_unifiedTypeMapEntry inValue
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

GALGAS_unifiedTypeMapEntry GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
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
                                                                                                const GALGAS_unifiedTypeMapEntry & in_mReturnType
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (const GALGAS_functionPrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::bang_functionPrototypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
                                                                                                        const GALGAS_unifiedTypeMapEntry & inAttribute_mReturnType,
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
                                                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnType,
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak::GALGAS_functionImplementationForGeneration_2D_weak (const GALGAS_functionImplementationForGeneration & inSource) :
GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak GALGAS_functionImplementationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration_2D_weak::bang_functionImplementationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionImplementationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
                                                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mReturnType,
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

void GALGAS_onceFunctionDeclarationForGeneration::setter_setMReturnType (GALGAS_unifiedTypeMapEntry inValue
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

GALGAS_unifiedTypeMapEntry GALGAS_onceFunctionDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
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
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReturnType,
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak::GALGAS_onceFunctionDeclarationForGeneration_2D_weak (const GALGAS_onceFunctionDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak GALGAS_onceFunctionDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration_2D_weak::bang_onceFunctionDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
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

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak::GALGAS_primitiveTypeForGeneration_2D_weak (const GALGAS_primitiveTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak GALGAS_primitiveTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration_2D_weak::bang_primitiveTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak::GALGAS_filewrapperDeclarationForGeneration_2D_weak (const GALGAS_filewrapperDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak GALGAS_filewrapperDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration_2D_weak::bang_filewrapperDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperDeclarationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak::GALGAS_programComponentForGeneration_2D_weak (const GALGAS_programComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak GALGAS_programComponentForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_programComponentForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration_2D_weak::bang_programComponentForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_programComponentForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

void callExtensionMethod_analyzeGrammarInstructionSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_localVarManager & io_ioVariableMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeGrammarInstructionSDT (constin_inAnalysisContext, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
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

GALGAS_localVarManager GALGAS_localVarManager::constructor_new (const GALGAS_currentVarManager & in_mCurrentManager,
                                                                const GALGAS_openedOverrideList & in_mOverridenManagers 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  if (in_mCurrentManager.isValid () && in_mOverridenManagers.isValid ()) {
    result = GALGAS_localVarManager (in_mCurrentManager, in_mOverridenManagers) ;
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
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inType,
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
                                              const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                              const GALGAS_string constinArgument_inCppName,
                                              const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 64)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 64)) COMMA_SOURCE_FILE ("variable-manager.galgas", 64)), GALGAS_localVarValuation::constructor_read (SOURCE_FILE ("variable-manager.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 59)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (GALGAS_localVarManager & ioObject,
                                                     const GALGAS_lstring constinArgument_inVarName,
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GALGAS_string constinArgument_inCppName,
                                                     const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 80)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 80)) COMMA_SOURCE_FILE ("variable-manager.galgas", 80)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 75)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (GALGAS_localVarManager & ioObject,
                                                  const GALGAS_lstring constinArgument_inVarName,
                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GALGAS_string constinArgument_inCppName,
                                                  const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 96)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 96)) COMMA_SOURCE_FILE ("variable-manager.galgas", 96)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 91)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                const GALGAS_lstring constinArgument_inVarName,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_string constinArgument_inCppName,
                                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 114)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 114)) COMMA_SOURCE_FILE ("variable-manager.galgas", 114)).operator_or (GALGAS_localVariableAttributes::constructor_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 114)) COMMA_SOURCE_FILE ("variable-manager.galgas", 114)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 109)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                const GALGAS_lstring constinArgument_inVarName,
                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                const GALGAS_string constinArgument_inCppName,
                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 130)).operator_or (GALGAS_localVariableAttributes::constructor_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 130)) COMMA_SOURCE_FILE ("variable-manager.galgas", 130)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 125)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                        const GALGAS_lstring constinArgument_inVarName,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                        const GALGAS_string constinArgument_inCppName,
                                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 146)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 146)) COMMA_SOURCE_FILE ("variable-manager.galgas", 146)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 146)) COMMA_SOURCE_FILE ("variable-manager.galgas", 146)).operator_or (GALGAS_localVariableAttributes::constructor_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 146)) COMMA_SOURCE_FILE ("variable-manager.galgas", 146)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 141)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                        const GALGAS_lstring constinArgument_inVarName,
                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                        const GALGAS_string constinArgument_inCppName,
                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 162)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 162)) COMMA_SOURCE_FILE ("variable-manager.galgas", 162)).operator_or (GALGAS_localVariableAttributes::constructor_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 162)) COMMA_SOURCE_FILE ("variable-manager.galgas", 162)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 157)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertOutputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                 const GALGAS_lstring constinArgument_inVarName,
                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                 const GALGAS_string constinArgument_inCppName,
                                                 const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 180)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 180)) COMMA_SOURCE_FILE ("variable-manager.galgas", 180)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 180)) COMMA_SOURCE_FILE ("variable-manager.galgas", 180)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 175)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                      const GALGAS_lstring constinArgument_inVarName,
                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GALGAS_string constinArgument_inCppName,
                                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 198)).operator_or (GALGAS_localVariableAttributes::constructor_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 198)) COMMA_SOURCE_FILE ("variable-manager.galgas", 198)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 193)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                      const GALGAS_lstring constinArgument_inVarName,
                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                      const GALGAS_string constinArgument_inCppName,
                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 214)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 214)) COMMA_SOURCE_FILE ("variable-manager.galgas", 214)).operator_or (GALGAS_localVariableAttributes::constructor_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 214)) COMMA_SOURCE_FILE ("variable-manager.galgas", 214)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 209)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertNonMutableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                               const GALGAS_string constinArgument_inCppName,
                                               const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 232)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 232)) COMMA_SOURCE_FILE ("variable-manager.galgas", 232)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 232)) COMMA_SOURCE_FILE ("variable-manager.galgas", 232)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 227)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertMutableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (GALGAS_localVarManager & ioObject,
                                            const GALGAS_lstring constinArgument_inVarName,
                                            const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                            const GALGAS_string constinArgument_inCppName,
                                            const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 248)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 248)) COMMA_SOURCE_FILE ("variable-manager.galgas", 248)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 243)) ;
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
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 258))  COMMA_SOURCE_FILE ("variable-manager.galgas", 258)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForRepeatBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GALGAS_localVarManager & ioObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_repeatOverride (SOURCE_FILE ("variable-manager.galgas", 264))  COMMA_SOURCE_FILE ("variable-manager.galgas", 264)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarManager temp_1 = ioObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mOverridenManagers ().getter_length (SOURCE_FILE ("variable-manager.galgas", 270)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_overrideKind var_savedManager_12945 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_12945, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 271)) ;
      }
      switch (var_savedManager_12945.enumValue ()) {
      case GALGAS_overrideKind::kNotBuilt:
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_13048 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_12945.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_13045_savedManager = extractPtr_13048->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_13209 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_12945.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_13124_savedManager = extractPtr_13209->mAssociatedValue0 ;
          const GALGAS_currentVarManager extractedValue_13160_referenceManager = extractPtr_13209->mAssociatedValue1 ;
          ioObject.mProperty_mCurrentManager = extractedValue_13160_referenceManager ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_repeatOverride:
        {
        }
        break ;
      }
    }
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
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 284)) ;
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
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 290)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarManager temp_1 = ioObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mOverridenManagers ().getter_length (SOURCE_FILE ("variable-manager.galgas", 292)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_overrideKind var_savedManager_13818 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_13818, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 293)) ;
      }
      switch (var_savedManager_13818.enumValue ()) {
      case GALGAS_overrideKind::kNotBuilt:
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_14088 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_13818.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_13911_savedManager = extractPtr_14088->mAssociatedValue0 ;
          const GALGAS_localVarManager temp_2 = ioObject ;
          ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideNextBranches (extractedValue_13911_savedManager, temp_2.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 296))  COMMA_SOURCE_FILE ("variable-manager.galgas", 296)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_13911_savedManager ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_14541 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_13818.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_14157_savedManager = extractPtr_14541->mAssociatedValue0 ;
          const GALGAS_currentVarManager extractedValue_14193_referenceManager = extractPtr_14541->mAssociatedValue1 ;
          const GALGAS_localVarManager temp_3 = ioObject ;
          GALGAS_currentVarManager var_newReferenceManager_14226 = temp_3.readProperty_mCurrentManager () ;
          {
          extensionSetter_combineManagerWith (var_newReferenceManager_14226, extractedValue_14193_referenceManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 300)) ;
          }
          ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideNextBranches (extractedValue_14157_savedManager, var_newReferenceManager_14226  COMMA_SOURCE_FILE ("variable-manager.galgas", 301))  COMMA_SOURCE_FILE ("variable-manager.galgas", 301)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14157_savedManager ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_repeatOverride:
        {
          ioObject.mProperty_mOverridenManagers.addAssign_operation (var_savedManager_13818  COMMA_SOURCE_FILE ("variable-manager.galgas", 304)) ;
        }
        break ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager neutralAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GALGAS_localVarManager & ioObject,
                                    const GALGAS_lstring constinArgument_inVarName,
                                    GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                    GALGAS_string & outArgument_outCppName,
                                    GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 387)) ;
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
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 431)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GALGAS_localVarManager & ioObject,
                                           const GALGAS_lstring constinArgument_inVarName,
                                           GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                           GALGAS_string & outArgument_outCppName,
                                           GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 465)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GALGAS_localVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                          GALGAS_string & outArgument_outCppName,
                                          GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 572)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                               GALGAS_string & outArgument_outCppName,
                                               GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 670)) ;
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
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 823)) ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition::GALGAS_unifiedTypeDefinition (void) :
mProperty_mTypeName (),
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
                                                            const GALGAS_unifiedTypeMapEntry & inOperand3,
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
                                                            const GALGAS_unifiedTypeMapEntry & inOperand23,
                                                            const GALGAS_string & inOperand24,
                                                            const GALGAS_string & inOperand25,
                                                            const GALGAS_headerKind & inOperand26) :
mProperty_mTypeName (inOperand0),
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

GALGAS_unifiedTypeDefinition GALGAS_unifiedTypeDefinition::constructor_new (const GALGAS_lstring & in_mTypeName,
                                                                            const GALGAS_bool & in_mIsPredefined,
                                                                            const GALGAS_bool & in_mIsConcrete,
                                                                            const GALGAS_unifiedTypeMapEntry & in_mSuperType,
                                                                            const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                                                            const GALGAS_bool & in_mSupportCollectionValue,
                                                                            const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                                                            const GALGAS_propertyMap & in_mPropertyMap,
                                                                            const GALGAS_typedPropertyList & in_mCurrentTypedPropertyList,
                                                                            const GALGAS_constructorMap & in_mConstructorMap,
                                                                            const GALGAS_getterMap & in_mGetterMap,
                                                                            const GALGAS_setterMap & in_mSetterMap,
                                                                            const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                                                            const GALGAS_classMethodMap & in_mClassMethodMap,
                                                                            const GALGAS_optionalMethodMap & in_mOptionalMethodMap,
                                                                            const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                                                            const GALGAS_operators & in_mHandledOperatorFlags,
                                                                            const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                                                            const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                                                            const GALGAS_enumConstantList & in_mEnumConstantList,
                                                                            const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                                                            const GALGAS_mapSearchMethodListAST & in_mMapEntrySearchConstructorList,
                                                                            const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                                                            const GALGAS_unifiedTypeMapEntry & in_mTypeForEnumeratedElement,
                                                                            const GALGAS_string & in_mDefaultConstructorName,
                                                                            const GALGAS_string & in_mHeaderFileName,
                                                                            const GALGAS_headerKind & in_mHeaderKind 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
  if (in_mTypeName.isValid () && in_mIsPredefined.isValid () && in_mIsConcrete.isValid () && in_mSuperType.isValid () && in_mTypeKindEnum.isValid () && in_mSupportCollectionValue.isValid () && in_mAllTypedPropertyList.isValid () && in_mPropertyMap.isValid () && in_mCurrentTypedPropertyList.isValid () && in_mConstructorMap.isValid () && in_mGetterMap.isValid () && in_mSetterMap.isValid () && in_mInstanceMethodMap.isValid () && in_mClassMethodMap.isValid () && in_mOptionalMethodMap.isValid () && in_mEnumerationDescriptor.isValid () && in_mHandledOperatorFlags.isValid () && in_mAddAssignOperatorArguments.isValid () && in_mEnumConstantMap.isValid () && in_mEnumConstantList.isValid () && in_mMapSearchMethodList.isValid () && in_mMapEntrySearchConstructorList.isValid () && in_mGenerateHeaderInSeparateFile.isValid () && in_mTypeForEnumeratedElement.isValid () && in_mDefaultConstructorName.isValid () && in_mHeaderFileName.isValid () && in_mHeaderKind.isValid ()) {
    result = GALGAS_unifiedTypeDefinition (in_mTypeName, in_mIsPredefined, in_mIsConcrete, in_mSuperType, in_mTypeKindEnum, in_mSupportCollectionValue, in_mAllTypedPropertyList, in_mPropertyMap, in_mCurrentTypedPropertyList, in_mConstructorMap, in_mGetterMap, in_mSetterMap, in_mInstanceMethodMap, in_mClassMethodMap, in_mOptionalMethodMap, in_mEnumerationDescriptor, in_mHandledOperatorFlags, in_mAddAssignOperatorArguments, in_mEnumConstantMap, in_mEnumConstantList, in_mMapSearchMethodList, in_mMapEntrySearchConstructorList, in_mGenerateHeaderInSeparateFile, in_mTypeForEnumeratedElement, in_mDefaultConstructorName, in_mHeaderFileName, in_mHeaderKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeDefinition::objectCompare (const GALGAS_unifiedTypeDefinition & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
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
  return mProperty_mTypeName.isValid () && mProperty_mIsPredefined.isValid () && mProperty_mIsConcrete.isValid () && mProperty_mSuperType.isValid () && mProperty_mTypeKindEnum.isValid () && mProperty_mSupportCollectionValue.isValid () && mProperty_mAllTypedPropertyList.isValid () && mProperty_mPropertyMap.isValid () && mProperty_mCurrentTypedPropertyList.isValid () && mProperty_mConstructorMap.isValid () && mProperty_mGetterMap.isValid () && mProperty_mSetterMap.isValid () && mProperty_mInstanceMethodMap.isValid () && mProperty_mClassMethodMap.isValid () && mProperty_mOptionalMethodMap.isValid () && mProperty_mEnumerationDescriptor.isValid () && mProperty_mHandledOperatorFlags.isValid () && mProperty_mAddAssignOperatorArguments.isValid () && mProperty_mEnumConstantMap.isValid () && mProperty_mEnumConstantList.isValid () && mProperty_mMapSearchMethodList.isValid () && mProperty_mMapEntrySearchConstructorList.isValid () && mProperty_mGenerateHeaderInSeparateFile.isValid () && mProperty_mTypeForEnumeratedElement.isValid () && mProperty_mDefaultConstructorName.isValid () && mProperty_mHeaderFileName.isValid () && mProperty_mHeaderKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeDefinition::drop (void) {
  mProperty_mTypeName.drop () ;
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
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
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
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition cPtr_unifiedTypeMapElementClass::getter_definition (C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeDefinition result_result ; // Returned variable
  const GALGAS_unifiedTypeMapElementClass temp_0 = this ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GALGAS_typeDefinition::kNotBuilt:
    break ;
  case GALGAS_typeDefinition::kEnum_unsolved:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 136)), GALGAS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 136)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeDefinition::kEnum_solved:
    {
      const cEnumAssociatedValues_typeDefinition_solved * extractPtr_5796 = (const cEnumAssociatedValues_typeDefinition_solved *) (temp_0.readProperty_mDefinition ().unsafePointer ()) ;
      const GALGAS_unifiedTypeDefinition extractedValue_5769_definition = extractPtr_5796->mAssociatedValue0 ;
      result_result = extractedValue_5769_definition ;
    }
    break ;
  }
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
  if (nullptr != inObject) {
    result = inObject->getter_definition (inCompiler COMMA_THERE) ;
  }
  return result ;
}

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

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------
// @trueExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_trueExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_trueExpressionForGeneration * p = (const cPtr_trueExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_trueExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_trueExpressionForGeneration::objectCompare (const GALGAS_trueExpressionForGeneration & inOperand) const {
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

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (const cPtr_trueExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                        const GALGAS_location & inAttribute_mLocation
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_trueExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_trueExpressionForGeneration::cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GALGAS_location & in_mLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

void cPtr_trueExpressionForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@trueExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_trueExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionForGeneration ("trueExpressionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @falseExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_falseExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_falseExpressionForGeneration * p = (const cPtr_falseExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_falseExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_falseExpressionForGeneration::objectCompare (const GALGAS_falseExpressionForGeneration & inOperand) const {
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

GALGAS_falseExpressionForGeneration::GALGAS_falseExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration::GALGAS_falseExpressionForGeneration (const cPtr_falseExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                          const GALGAS_location & inAttribute_mLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_falseExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_falseExpressionForGeneration::cPtr_falseExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration ;
}

void cPtr_falseExpressionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@falseExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_falseExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_falseExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpressionForGeneration ("falseExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration result ;
  const GALGAS_falseExpressionForGeneration * p = (const GALGAS_falseExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticExpressionForGeneration::getter_isTrueExpression (C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isTrueExpression (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalStringExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalStringExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringExpressionForGeneration * p = (const cPtr_literalStringExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalStringExpressionForGeneration::objectCompare (const GALGAS_literalStringExpressionForGeneration & inOperand) const {
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

GALGAS_literalStringExpressionForGeneration::GALGAS_literalStringExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration::GALGAS_literalStringExpressionForGeneration (const cPtr_literalStringExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_string & inAttribute_mString
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_literalStringExpressionForGeneration::readProperty_mString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
    return p->mProperty_mString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_string & in_mString
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mString (in_mString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

void cPtr_literalStringExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@literalStringExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalStringExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ("literalStringExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration result ;
  const GALGAS_literalStringExpressionForGeneration * p = (const GALGAS_literalStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalCharExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalCharExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalCharExpressionAST * p = (const cPtr_literalCharExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalCharExpressionAST::objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const {
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

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalCharExpressionAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalCharExpressionAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_literalCharExpressionAST::readProperty_mCharacter (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_literalCharExpressionAST * p = (cPtr_literalCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

void cPtr_literalCharExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalCharExpressionAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalCharExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalCharExpressionAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalCharExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalCharExpressionAST ("literalCharExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  const GALGAS_literalCharExpressionAST * p = (const GALGAS_literalCharExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalCharExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalCharExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalCharExpressionForGeneration * p = (const cPtr_literalCharExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalCharExpressionForGeneration::objectCompare (const GALGAS_literalCharExpressionForGeneration & inOperand) const {
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

GALGAS_literalCharExpressionForGeneration::GALGAS_literalCharExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration::GALGAS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_char & inAttribute_mCharacter
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalCharExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_literalCharExpressionForGeneration::readProperty_mCharacter (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_char () ;
  }else{
    cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_char & in_mCharacter
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

void cPtr_literalCharExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@literalCharExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalCharExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalCharExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ("literalCharExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration result ;
  const GALGAS_literalCharExpressionForGeneration * p = (const GALGAS_literalCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalDoubleExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalDoubleExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalDoubleExpressionAST * p = (const cPtr_literalDoubleExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalDoubleExpressionAST::objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const {
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

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalDoubleExpressionAST::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::constructor_new (const GALGAS_ldouble & inAttribute_mValue
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalDoubleExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_literalDoubleExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ldouble () ;
  }else{
    cPtr_literalDoubleExpressionAST * p = (cPtr_literalDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

void cPtr_literalDoubleExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalDoubleExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalDoubleExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalDoubleExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalDoubleExpressionAST ("literalDoubleExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  const GALGAS_literalDoubleExpressionAST * p = (const GALGAS_literalDoubleExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalDoubleExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalDoubleExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalDoubleExpressionForGeneration * p = (const cPtr_literalDoubleExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalDoubleExpressionForGeneration::objectCompare (const GALGAS_literalDoubleExpressionForGeneration & inOperand) const {
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

GALGAS_literalDoubleExpressionForGeneration::GALGAS_literalDoubleExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration::GALGAS_literalDoubleExpressionForGeneration (const cPtr_literalDoubleExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_double & inAttribute_mValue
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalDoubleExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_double GALGAS_literalDoubleExpressionForGeneration::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_double () ;
  }else{
    cPtr_literalDoubleExpressionForGeneration * p = (cPtr_literalDoubleExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_double & in_mValue
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalDoubleExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

void cPtr_literalDoubleExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@literalDoubleExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalDoubleExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalDoubleExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ("literalDoubleExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration result ;
  const GALGAS_literalDoubleExpressionForGeneration * p = (const GALGAS_literalDoubleExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalDoubleExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalBigIntExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalBigIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalBigIntExpressionAST * p = (const cPtr_literalBigIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalBigIntExpressionAST::objectCompare (const GALGAS_literalBigIntExpressionAST & inOperand) const {
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

GALGAS_literalBigIntExpressionAST::GALGAS_literalBigIntExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalBigIntExpressionAST::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST::GALGAS_literalBigIntExpressionAST (const cPtr_literalBigIntExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mValue
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalBigIntExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_literalBigIntExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (const GALGAS_lbigint & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalBigIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

void cPtr_literalBigIntExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalBigIntExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBigIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalBigIntExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalBigIntExpressionAST ("literalBigIntExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBigIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBigIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBigIntExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST result ;
  const GALGAS_literalBigIntExpressionAST * p = (const GALGAS_literalBigIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalBigIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalUIntExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalUIntExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUIntExpressionForGeneration * p = (const cPtr_literalUIntExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalUIntExpressionForGeneration::objectCompare (const GALGAS_literalUIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalUIntExpressionForGeneration::GALGAS_literalUIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration::GALGAS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_uint & inAttribute_mValue
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUIntExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalUIntExpressionForGeneration::setter_setMValue (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_literalUIntExpressionForGeneration::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_uint & in_mValue
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

void cPtr_literalUIntExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@literalUIntExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalUIntExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ("literalUIntExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration result ;
  const GALGAS_literalUIntExpressionForGeneration * p = (const GALGAS_literalUIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalUInt_36__34_ExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalUInt_36__34_ExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUInt_36__34_ExpressionForGeneration * p = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalUInt_36__34_ExpressionForGeneration::objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inOperand) const {
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

GALGAS_literalUInt_36__34_ExpressionForGeneration::GALGAS_literalUInt_36__34_ExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration::GALGAS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                                      const GALGAS_uint_36__34_ & inAttribute_mValue
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUInt_36__34_ExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_ GALGAS_literalUInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GALGAS_location & in_mLocation,
                                                                                                  const GALGAS_uint_36__34_ & in_mValue
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalUInt_36__34_ExpressionForGeneration::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@literalUInt64ExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUInt_36__34_ExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalUInt64ExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ("literalUInt64ExpressionForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration result ;
  const GALGAS_literalUInt_36__34_ExpressionForGeneration * p = (const GALGAS_literalUInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUInt_36__34_ExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalSIntExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalSIntExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalSIntExpressionForGeneration * p = (const cPtr_literalSIntExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalSIntExpressionForGeneration::objectCompare (const GALGAS_literalSIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalSIntExpressionForGeneration::GALGAS_literalSIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration::GALGAS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_sint & inAttribute_mValue
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalSIntExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_literalSIntExpressionForGeneration::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sint () ;
  }else{
    cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_sint & in_mValue
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalSIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

void cPtr_literalSIntExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@literalSIntExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalSIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalSIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalSIntExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ("literalSIntExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionForGeneration result ;
  const GALGAS_literalSIntExpressionForGeneration * p = (const GALGAS_literalSIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalSInt_36__34_ExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalSInt_36__34_ExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalSInt_36__34_ExpressionForGeneration * p = (const cPtr_literalSInt_36__34_ExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalSInt_36__34_ExpressionForGeneration::objectCompare (const GALGAS_literalSInt_36__34_ExpressionForGeneration & inOperand) const {
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

GALGAS_literalSInt_36__34_ExpressionForGeneration::GALGAS_literalSInt_36__34_ExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionForGeneration::GALGAS_literalSInt_36__34_ExpressionForGeneration (const cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionForGeneration GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                                      const GALGAS_sint_36__34_ & inAttribute_mValue
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalSInt_36__34_ExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_ GALGAS_literalSInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sint_36__34_ () ;
  }else{
    cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalSInt64ExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GALGAS_location & in_mLocation,
                                                                                                  const GALGAS_sint_36__34_ & in_mValue
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalSInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalSInt_36__34_ExpressionForGeneration::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@literalSInt64ExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalSInt_36__34_ExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalSInt64ExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ("literalSInt64ExpressionForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionForGeneration GALGAS_literalSInt_36__34_ExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionForGeneration result ;
  const GALGAS_literalSInt_36__34_ExpressionForGeneration * p = (const GALGAS_literalSInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSInt_36__34_ExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSInt64ExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalBigIntExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalBigIntExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalBigIntExpressionForGeneration * p = (const cPtr_literalBigIntExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalBigIntExpressionForGeneration::objectCompare (const GALGAS_literalBigIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalBigIntExpressionForGeneration::GALGAS_literalBigIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionForGeneration::GALGAS_literalBigIntExpressionForGeneration (const cPtr_literalBigIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionForGeneration GALGAS_literalBigIntExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_bigint & inAttribute_mValue
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalBigIntExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalBigIntExpressionForGeneration::setter_setMValue (GALGAS_bigint inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_literalBigIntExpressionForGeneration::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_bigint & in_mValue
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalBigIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

void cPtr_literalBigIntExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@literalBigIntExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBigIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalBigIntExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ("literalBigIntExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBigIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBigIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBigIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionForGeneration GALGAS_literalBigIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionForGeneration result ;
  const GALGAS_literalBigIntExpressionForGeneration * p = (const GALGAS_literalBigIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalBigIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @comparisonExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonExpressionForGeneration * p = (const cPtr_comparisonExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
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
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonExpressionForGeneration::objectCompare (const GALGAS_comparisonExpressionForGeneration & inOperand) const {
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

GALGAS_comparisonExpressionForGeneration::GALGAS_comparisonExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionForGeneration::GALGAS_comparisonExpressionForGeneration (const cPtr_comparisonExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionForGeneration GALGAS_comparisonExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                    const GALGAS_comparison & inAttribute_mComparison,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mComparison.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mComparison, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionForGeneration::setter_setMComparison (GALGAS_comparison inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    p->mProperty_mComparison = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_comparisonExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparisonExpressionForGeneration::readProperty_mComparison (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_comparison () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mComparison ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_comparisonExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                const GALGAS_comparison & in_mComparison,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mComparison (in_mComparison),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

void cPtr_comparisonExpressionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@comparisonExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ("comparisonExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionForGeneration GALGAS_comparisonExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionForGeneration result ;
  const GALGAS_comparisonExpressionForGeneration * p = (const GALGAS_comparisonExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @binaryOperatorExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_binaryOperatorExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binaryOperatorExpressionForGeneration * p = (const cPtr_binaryOperatorExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
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
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_binaryOperatorExpressionForGeneration::objectCompare (const GALGAS_binaryOperatorExpressionForGeneration & inOperand) const {
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

GALGAS_binaryOperatorExpressionForGeneration::GALGAS_binaryOperatorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperatorExpressionForGeneration::GALGAS_binaryOperatorExpressionForGeneration (const cPtr_binaryOperatorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperatorExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperatorExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                            const GALGAS_binaryOperator & inAttribute_mOperator,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperatorExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binaryOperatorExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mOperator, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binaryOperatorExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binaryOperatorExpressionForGeneration::setter_setMOperator (GALGAS_binaryOperator inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    p->mProperty_mOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binaryOperatorExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperatorExpressionForGeneration::readProperty_mOperator (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_binaryOperator () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperatorExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_binaryOperatorExpressionForGeneration::cPtr_binaryOperatorExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                        const GALGAS_location & in_mLocation,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                        const GALGAS_binaryOperator & in_mOperator,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperator (in_mOperator),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_binaryOperatorExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;
}

void cPtr_binaryOperatorExpressionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@binaryOperatorExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binaryOperatorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binaryOperatorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mOperator, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@binaryOperatorExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ("binaryOperatorExpressionForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperatorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperatorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperatorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperatorExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperatorExpressionForGeneration result ;
  const GALGAS_binaryOperatorExpressionForGeneration * p = (const GALGAS_binaryOperatorExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryOperatorExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperatorExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_testDynamicClassInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testDynamicClassInExpressionAST * p = (const cPtr_testDynamicClassInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeComparisonKind.objectCompare (p->mProperty_mTypeComparisonKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_testDynamicClassInExpressionAST::objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const {
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

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                                const GALGAS_dynamicTypeComparisonKind & inAttribute_mTypeComparisonKind,
                                                                                                const GALGAS_lstring & inAttribute_mTypeName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeComparisonKind.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeComparisonKind, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_testDynamicClassInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_testDynamicClassInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionAST::readProperty_mTypeComparisonKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_testDynamicClassInExpressionAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                            const GALGAS_location & in_mEndOfReceiverExpression,
                                                                            const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                            const GALGAS_lstring & in_mTypeName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mTypeComparisonKind (in_mTypeComparisonKind),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

void cPtr_testDynamicClassInExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@testDynamicClassInExpressionAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testDynamicClassInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@testDynamicClassInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ("testDynamicClassInExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  const GALGAS_testDynamicClassInExpressionAST * p = (const GALGAS_testDynamicClassInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testDynamicClassInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @castInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_castInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_castInExpressionAST * p = (const cPtr_castInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_castInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_castInExpressionAST::objectCompare (const GALGAS_castInExpressionAST & inOperand) const {
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

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                        const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                        const GALGAS_lstring & inAttribute_mTypeName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_castInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_castInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_castInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInExpressionAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                                    const GALGAS_lstring & in_mTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

void cPtr_castInExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@castInExpressionAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_castInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@castInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInExpressionAST ("castInExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  const GALGAS_castInExpressionAST * p = (const GALGAS_castInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_testDynamicClassInExpressionForGeneration::objectCompare (const GALGAS_testDynamicClassInExpressionForGeneration & inOperand) const {
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

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (const cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                                    const GALGAS_dynamicTypeComparisonKind & inAttribute_mTypeComparisonKind,
                                                                                                                    const GALGAS_unifiedTypeMapEntry & inAttribute_mCastType
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mTypeComparisonKind.isValid () && inAttribute_mCastType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mReceiverExpression, inAttribute_mTypeComparisonKind, inAttribute_mCastType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionForGeneration::readProperty_mTypeComparisonKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_testDynamicClassInExpressionForGeneration::readProperty_mCastType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                const GALGAS_unifiedTypeMapEntry & in_mCastType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mTypeComparisonKind (in_mTypeComparisonKind),
mProperty_mCastType (in_mCastType) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testDynamicClassInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mCastType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@testDynamicClassInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ("testDynamicClassInExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @extractObjectInExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extractObjectInExpressionForGeneration::objectCompare (const GALGAS_extractObjectInExpressionForGeneration & inOperand) const {
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

GALGAS_extractObjectInExpressionForGeneration::GALGAS_extractObjectInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractObjectInExpressionForGeneration::GALGAS_extractObjectInExpressionForGeneration (const cPtr_extractObjectInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extractObjectInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractObjectInExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extractObjectInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extractObjectInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                          const GALGAS_location & in_mLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                          const GALGAS_string & in_mTypeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extractObjectInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extractObjectInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extractObjectInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ("extractObjectInExpressionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extractObjectInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extractObjectInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractObjectInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @optionExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_optionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionExpressionAST * p = (const cPtr_optionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionEntryName.objectCompare (p->mProperty_mOptionEntryName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionGetterName.objectCompare (p->mProperty_mOptionGetterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionExpressionAST::objectCompare (const GALGAS_optionExpressionAST & inOperand) const {
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

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                        const GALGAS_lstring & inAttribute_mOptionEntryName,
                                                                        const GALGAS_lstring & inAttribute_mOptionGetterName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  if (inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionEntryName.isValid () && inAttribute_mOptionGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionExpressionAST (inAttribute_mOptionComponentName, inAttribute_mOptionEntryName, inAttribute_mOptionGetterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionEntryName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                                    const GALGAS_lstring & in_mOptionEntryName,
                                                    const GALGAS_lstring & in_mOptionGetterName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionEntryName (in_mOptionEntryName),
mProperty_mOptionGetterName (in_mOptionGetterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

void cPtr_optionExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@optionExpressionAST:" ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionExpressionAST (mProperty_mOptionComponentName, mProperty_mOptionEntryName, mProperty_mOptionGetterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionExpressionAST ("optionExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  const GALGAS_optionExpressionAST * p = (const GALGAS_optionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @optionValueExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionValueExpressionForGeneration::objectCompare (const GALGAS_optionValueExpressionForGeneration & inOperand) const {
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

GALGAS_optionValueExpressionForGeneration::GALGAS_optionValueExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionValueExpressionForGeneration::GALGAS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionValueExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionValueExpressionForGeneration GALGAS_optionValueExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionValueExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionValueExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionValueExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionValueExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionValueExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionValueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionValueExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ("optionValueExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionValueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionValueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionValueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @optionCharExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionCharExpressionForGeneration::objectCompare (const GALGAS_optionCharExpressionForGeneration & inOperand) const {
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

GALGAS_optionCharExpressionForGeneration::GALGAS_optionCharExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCharExpressionForGeneration::GALGAS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCharExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCharExpressionForGeneration GALGAS_optionCharExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionCharExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCharExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCharExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionCharExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionCharExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionCharExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ("optionCharExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @optionStringExpressionForGeneration reference class
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

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionStringExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

GALGAS_bool GALGAS_optionStringExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionStringExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionStringExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionStringExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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
// @optionCommentExpressionForGeneration reference class
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

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCommentExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

GALGAS_bool GALGAS_optionCommentExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCommentExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCommentExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionCommentExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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
// @lexiqueIntrospectionExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexiqueIntrospectionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueComponentName.objectCompare (p->mProperty_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueGetterName.objectCompare (p->mProperty_mLexiqueGetterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexiqueIntrospectionExpressionAST::objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const {
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

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexiqueComponentName,
                                                                                                    const GALGAS_lstring & inAttribute_mLexiqueGetterName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  if (inAttribute_mLexiqueComponentName.isValid () && inAttribute_mLexiqueGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueIntrospectionExpressionAST (inAttribute_mLexiqueComponentName, inAttribute_mLexiqueGetterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                const GALGAS_lstring & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mLexiqueGetterName (in_mLexiqueGetterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueIntrospectionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

void cPtr_lexiqueIntrospectionExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@lexiqueIntrospectionExpressionAST:" ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueIntrospectionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionExpressionAST (mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueIntrospectionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ("lexiqueIntrospectionExpressionAST",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueIntrospectionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  const GALGAS_lexiqueIntrospectionExpressionAST * p = (const GALGAS_lexiqueIntrospectionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueIntrospectionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexiqueIntrospectionForGeneration reference class
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

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (const cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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
// @filewrapperObjectInstanciationInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperObjectInstanciationInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperObjectInstanciationInExpressionAST::objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const {
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

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperObjectInstanciationInExpressionAST (inAttribute_mFilewrapperName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperObjectInstanciationInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperObjectInstanciationInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperObjectInstanciationInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperObjectInstanciationInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

void cPtr_filewrapperObjectInstanciationInExpressionAST::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@filewrapperObjectInstanciationInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperObjectInstanciationInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperObjectInstanciationInExpressionAST (mProperty_mFilewrapperName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperObjectInstanciationInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ("filewrapperObjectInstanciationInExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperObjectInstanciationInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperObjectInstanciationInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperObjectInstanciationInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST * p = (const GALGAS_filewrapperObjectInstanciationInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperObjectInstanciationInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperObjectInstanciationInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperPath.objectCompare (p->mProperty_mFilewrapperPath) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperInExpressionAST::objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const {
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

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                      const GALGAS_lstring & inAttribute_mFilewrapperPath
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperInExpressionAST (inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperInExpressionAST::setter_setMFilewrapperPath (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperInExpressionAST::readProperty_mFilewrapperPath (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                  const GALGAS_lstring & in_mFilewrapperPath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperPath (in_mFilewrapperPath) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

void cPtr_filewrapperInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@filewrapperInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperInExpressionAST ("filewrapperInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  const GALGAS_filewrapperInExpressionAST * p = (const GALGAS_filewrapperInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperTemplateInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperTemplateInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplateName.objectCompare (p->mProperty_mFilewrapperTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperTemplateInExpressionAST::objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const {
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

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                                      const GALGAS_lstring & inAttribute_mFilewrapperTemplateName,
                                                                                                      const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperTemplateName.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperTemplateInExpressionAST (inAttribute_mFilewrapperName, inAttribute_mFilewrapperTemplateName, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMFilewrapperTemplateName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mFilewrapperTemplateName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperTemplateName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperTemplateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_filewrapperTemplateInExpressionAST::readProperty_mExpressions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                                  const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                  const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperTemplateName (in_mFilewrapperTemplateName),
mProperty_mExpressions (in_mExpressions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperTemplateInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

void cPtr_filewrapperTemplateInExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@filewrapperTemplateInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperTemplateInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ("filewrapperTemplateInExpressionAST",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  const GALGAS_filewrapperTemplateInExpressionAST * p = (const GALGAS_filewrapperTemplateInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperInExpressionForGeneration reference class
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

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (const cPtr_filewrapperInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

void GALGAS_filewrapperInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperInExpressionForGeneration::setter_setMFilewrapperPath (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperPath (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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
// @filewrapperTemplateInExpressionForGeneration reference class
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

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (const cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperTemplateName (GALGAS_string inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mFilewrapperTemplateName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMActualOutputParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mActualOutputParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::readProperty_mFilewrapperTemplateName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperTemplateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::readProperty_mActualOutputParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mActualOutputParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionForGeneration::cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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
// @filewrapperStaticPathInExpressionForGeneration reference class
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

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (const cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperFileIndex (GALGAS_uint inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mFilewrapperFileIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMIsTextFile (GALGAS_bool inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mIsTextFile = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperFileIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperFileIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperStaticPathInExpressionForGeneration::readProperty_mIsTextFile (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mIsTextFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperStaticPathInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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
// @getterCallExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_getterCallExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_errorOnGetterCallInsteadOfPropertyRead.objectCompare (p->mProperty_errorOnGetterCallInsteadOfPropertyRead) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiver.objectCompare (p->mProperty_mReceiver) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_getterCallExpressionAST::objectCompare (const GALGAS_getterCallExpressionAST & inOperand) const {
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

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST GALGAS_getterCallExpressionAST::constructor_new (const GALGAS_bool & inAttribute_errorOnGetterCallInsteadOfPropertyRead,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mReceiver,
                                                                                const GALGAS_lstring & inAttribute_mGetterName,
                                                                                const GALGAS_actualOutputExpressionList & inAttribute_mExpressions,
                                                                                const GALGAS_location & inAttribute_mExpressionLocation
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST result ;
  if (inAttribute_errorOnGetterCallInsteadOfPropertyRead.isValid () && inAttribute_mReceiver.isValid () && inAttribute_mGetterName.isValid () && inAttribute_mExpressions.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getterCallExpressionAST (inAttribute_errorOnGetterCallInsteadOfPropertyRead, inAttribute_mReceiver, inAttribute_mGetterName, inAttribute_mExpressions, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_getterCallExpressionAST::readProperty_errorOnGetterCallInsteadOfPropertyRead (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_errorOnGetterCallInsteadOfPropertyRead ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_getterCallExpressionAST::readProperty_mReceiver (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mReceiver ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_getterCallExpressionAST::readProperty_mGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_getterCallExpressionAST::readProperty_mExpressions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_getterCallExpressionAST::readProperty_mExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GALGAS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                                            const GALGAS_semanticExpressionAST & in_mReceiver,
                                                            const GALGAS_lstring & in_mGetterName,
                                                            const GALGAS_actualOutputExpressionList & in_mExpressions,
                                                            const GALGAS_location & in_mExpressionLocation
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_errorOnGetterCallInsteadOfPropertyRead (in_errorOnGetterCallInsteadOfPropertyRead),
mProperty_mReceiver (in_mReceiver),
mProperty_mGetterName (in_mGetterName),
mProperty_mExpressions (in_mExpressions),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@getterCallExpressionAST:" ;
  mProperty_errorOnGetterCallInsteadOfPropertyRead.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiver.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getterCallExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mProperty_errorOnGetterCallInsteadOfPropertyRead, mProperty_mReceiver, mProperty_mGetterName, mProperty_mExpressions, mProperty_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@getterCallExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getterCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterCallExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST GALGAS_getterCallExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST result ;
  const GALGAS_getterCallExpressionAST * p = (const GALGAS_getterCallExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @getterCallExpressionForGeneration reference class
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

GALGAS_getterCallExpressionForGeneration::GALGAS_getterCallExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionForGeneration::GALGAS_getterCallExpressionForGeneration (const cPtr_getterCallExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionForGeneration GALGAS_getterCallExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

void GALGAS_getterCallExpressionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMFieldList (GALGAS_stringlist inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mFieldList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMGetterName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterCallExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_getterCallExpressionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_methodKind () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_getterCallExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_getterCallExpressionForGeneration::readProperty_mFieldList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mFieldList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getterCallExpressionForGeneration::readProperty_mGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_getterCallExpressionForGeneration::readProperty_mExpressions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_getterCallExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
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

