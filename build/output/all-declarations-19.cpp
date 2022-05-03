#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_opEqualInstructionForGeneration_2D_weak::objectCompare (const GALGAS_opEqualInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_opEqualInstructionForGeneration_2D_weak::GALGAS_opEqualInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak & GALGAS_opEqualInstructionForGeneration_2D_weak::operator = (const GALGAS_opEqualInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak::GALGAS_opEqualInstructionForGeneration_2D_weak (const GALGAS_opEqualInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak GALGAS_opEqualInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration GALGAS_opEqualInstructionForGeneration_2D_weak::bang_opEqualInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_opEqualInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_opEqualInstructionForGeneration) ;
      result = GALGAS_opEqualInstructionForGeneration ((cPtr_opEqualInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@opEqualInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_opEqualInstructionForGeneration_2D_weak ("opEqualInstructionForGeneration-weak",
                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_opEqualInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opEqualInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_opEqualInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_opEqualInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak GALGAS_opEqualInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration_2D_weak result ;
  const GALGAS_opEqualInstructionForGeneration_2D_weak * p = (const GALGAS_opEqualInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_opEqualInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opEqualInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_errorInstructionForGeneration_2D_weak::objectCompare (const GALGAS_errorInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_errorInstructionForGeneration_2D_weak::GALGAS_errorInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak & GALGAS_errorInstructionForGeneration_2D_weak::operator = (const GALGAS_errorInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak::GALGAS_errorInstructionForGeneration_2D_weak (const GALGAS_errorInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak GALGAS_errorInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration GALGAS_errorInstructionForGeneration_2D_weak::bang_errorInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_errorInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionForGeneration) ;
      result = GALGAS_errorInstructionForGeneration ((cPtr_errorInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@errorInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionForGeneration_2D_weak ("errorInstructionForGeneration-weak",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak GALGAS_errorInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration_2D_weak result ;
  const GALGAS_errorInstructionForGeneration_2D_weak * p = (const GALGAS_errorInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_errorInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumeratedCollectionImplicitVarInExpAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumeratedCollectionImplicitVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfAnonymousEnumeration.objectCompare (p->mProperty_mEndOfAnonymousEnumeration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const {
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

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                                const GALGAS_location & inAttribute_mEndOfAnonymousEnumeration
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (inAttribute_mPrefix.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfAnonymousEnumeration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionImplicitVarInExpAST (inAttribute_mPrefix, inAttribute_mEnumeratedExpression, inAttribute_mEndOfAnonymousEnumeration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mPrefix (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mEndOfAnonymousEnumeration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mEndOfAnonymousEnumeration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionImplicitVarInExpAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionImplicitVarInExpAST::cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                            const GALGAS_location & in_mEndOfAnonymousEnumeration
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfAnonymousEnumeration (in_mEndOfAnonymousEnumeration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionImplicitVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

void cPtr_enumeratedCollectionImplicitVarInExpAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionImplicitVarInExpAST:" ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfAnonymousEnumeration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionImplicitVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionImplicitVarInExpAST (mProperty_mPrefix, mProperty_mEnumeratedExpression, mProperty_mEndOfAnonymousEnumeration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionImplicitVarInExpAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ("enumeratedCollectionImplicitVarInExpAST",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & inOperand) const {
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

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (void) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::operator = (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::bang_enumeratedCollectionImplicitVarInExpAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
      result = GALGAS_enumeratedCollectionImplicitVarInExpAST ((cPtr_enumeratedCollectionImplicitVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionImplicitVarInExpAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ("enumeratedCollectionImplicitVarInExpAST-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumeratedCollectionVarInExpAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumeratedCollectionVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationOptionalTypeName.objectCompare (p->mProperty_mEnumerationOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationVariable.objectCompare (p->mProperty_mEnumerationVariable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfEnumerationExpression.objectCompare (p->mProperty_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumeratedCollectionVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const {
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

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionVarInExpAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationOptionalTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationOptionalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationVariable (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationVariable ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionVarInExpAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionVarInExpAST::cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                                            const GALGAS_lstring & in_mEnumerationVariable,
                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mEnumerationOptionalTypeName (in_mEnumerationOptionalTypeName),
mProperty_mEnumerationVariable (in_mEnumerationVariable),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

void cPtr_enumeratedCollectionVarInExpAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionVarInExpAST:" ;
  mProperty_mEnumerationOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumerationVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionVarInExpAST (mProperty_mEnumerationOptionalTypeName, mProperty_mEnumerationVariable, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionVarInExpAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ("enumeratedCollectionVarInExpAST",
                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumeratedCollectionVarInExpAST_2D_weak::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak & inOperand) const {
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

GALGAS_enumeratedCollectionVarInExpAST_2D_weak::GALGAS_enumeratedCollectionVarInExpAST_2D_weak (void) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak & GALGAS_enumeratedCollectionVarInExpAST_2D_weak::operator = (const GALGAS_enumeratedCollectionVarInExpAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak::GALGAS_enumeratedCollectionVarInExpAST_2D_weak (const GALGAS_enumeratedCollectionVarInExpAST & inSource) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak GALGAS_enumeratedCollectionVarInExpAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST_2D_weak::bang_enumeratedCollectionVarInExpAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionVarInExpAST) ;
      result = GALGAS_enumeratedCollectionVarInExpAST ((cPtr_enumeratedCollectionVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionVarInExpAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ("enumeratedCollectionVarInExpAST-weak",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak GALGAS_enumeratedCollectionVarInExpAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST_2D_weak result ;
  const GALGAS_enumeratedCollectionVarInExpAST_2D_weak * p = (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedObjectList.objectCompare (p->mProperty_mEnumeratedObjectList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexVariableName.objectCompare (p->mProperty_mIndexVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_while_5F_expression.objectCompare (p->mProperty_mEndOf_5F_while_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_before_5F_branch.objectCompare (p->mProperty_mEndOf_5F_before_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_between_5F_branch.objectCompare (p->mProperty_mEndOf_5F_between_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_branch.objectCompare (p->mProperty_mEndOf_5F_do_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_after_5F_branch.objectCompare (p->mProperty_mEndOf_5F_after_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_foreach_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_foreach_5F_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
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

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionAST::readProperty_mEnumeratedObjectList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_forInstructionEnumeratedObjectListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEnumeratedObjectList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mIndexVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIndexVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_while_5F_expression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_while_5F_expression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mBeforeInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_before_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_before_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mBetweenInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_between_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_between_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_do_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mAfterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_after_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_after_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_foreach_5F_instruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_foreach_5F_instruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mEnumeratedObjectList (in_mEnumeratedObjectList),
mProperty_mIndexVariableName (in_mIndexVariableName),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_while_5F_expression (in_mEndOf_5F_while_5F_expression),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mEndOf_5F_before_5F_branch (in_mEndOf_5F_before_5F_branch),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mEndOf_5F_between_5F_branch (in_mEndOf_5F_between_5F_branch),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_do_5F_branch (in_mEndOf_5F_do_5F_branch),
mProperty_mAfterInstructionList (in_mAfterInstructionList),
mProperty_mEndOf_5F_after_5F_branch (in_mEndOf_5F_after_5F_branch),
mProperty_mEndOf_5F_foreach_5F_instruction (in_mEndOf_5F_foreach_5F_instruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_while_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_before_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_between_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_after_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_foreach_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableName, mProperty_mWhileExpression, mProperty_mEndOf_5F_while_5F_expression, mProperty_mBeforeInstructionList, mProperty_mEndOf_5F_before_5F_branch, mProperty_mBetweenInstructionList, mProperty_mEndOf_5F_between_5F_branch, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_branch, mProperty_mAfterInstructionList, mProperty_mEndOf_5F_after_5F_branch, mProperty_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forInstructionAST_2D_weak::objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const {
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

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak & GALGAS_forInstructionAST_2D_weak::operator = (const GALGAS_forInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (const GALGAS_forInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST_2D_weak::bang_forInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GALGAS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ("forInstructionAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  const GALGAS_forInstructionAST_2D_weak * p = (const GALGAS_forInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_forInstructionForGeneration_2D_weak::objectCompare (const GALGAS_forInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_forInstructionForGeneration_2D_weak::GALGAS_forInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak & GALGAS_forInstructionForGeneration_2D_weak::operator = (const GALGAS_forInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak::GALGAS_forInstructionForGeneration_2D_weak (const GALGAS_forInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak GALGAS_forInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration GALGAS_forInstructionForGeneration_2D_weak::bang_forInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionForGeneration) ;
      result = GALGAS_forInstructionForGeneration ((cPtr_forInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionForGeneration_2D_weak ("forInstructionForGeneration-weak",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak GALGAS_forInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration_2D_weak result ;
  const GALGAS_forInstructionForGeneration_2D_weak * p = (const GALGAS_forInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInVar:" ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInVar type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ("grammarInstructionSyntaxDirectedTranslationResultInVar",
                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInVar-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInVar-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                                  const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                              const GALGAS_lstring & in_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst",
                                                                                         & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInFileInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInFileInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSourceExpression.objectCompare (p->mProperty_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInFileInstructionAST::objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const {
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

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (const cPtr_grammarInFileInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInFileInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInFileInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInFileInstructionAST::readProperty_mLabelName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInFileInstructionAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInFileInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_grammarInFileInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInFileInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInFileInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInFileInstructionAST::cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_lstring & in_mGrammarComponentName,
                                                                    const GALGAS_lstring & in_mLabelName,
                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                                                    const GALGAS_location & in_mEndOfSourceExpression,
                                                                    const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mEndOfSourceExpression (in_mEndOfSourceExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInFileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

void cPtr_grammarInFileInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@grammarInFileInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInFileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInFileInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInFileInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInFileInstructionAST ("grammarInFileInstructionAST",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInFileInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInFileInstructionAST_2D_weak & inOperand) const {
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

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak & GALGAS_grammarInFileInstructionAST_2D_weak::operator = (const GALGAS_grammarInFileInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (const GALGAS_grammarInFileInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST_2D_weak::bang_grammarInFileInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInFileInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInFileInstructionAST) ;
      result = GALGAS_grammarInFileInstructionAST ((cPtr_grammarInFileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInFileInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ("grammarInFileInstructionAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  const GALGAS_grammarInFileInstructionAST_2D_weak * p = (const GALGAS_grammarInFileInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInFileInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInStringInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInStringInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSourceExpression.objectCompare (p->mProperty_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameExpression.objectCompare (p->mProperty_mNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfNameExpression.objectCompare (p->mProperty_mEndOfNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInStringInstructionAST::objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const {
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

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (const cPtr_grammarInStringInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInStringInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInStringInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInStringInstructionAST::readProperty_mLabelName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInStringInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::readProperty_mNameExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mNameExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInStringInstructionAST::readProperty_mEndOfNameExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfNameExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_grammarInStringInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInStringInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInStringInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mEndOfSourceExpression (in_mEndOfSourceExpression),
mProperty_mNameExpression (in_mNameExpression),
mProperty_mEndOfNameExpression (in_mEndOfNameExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInStringInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

void cPtr_grammarInStringInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@grammarInStringInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInStringInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInStringInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mNameExpression, mProperty_mEndOfNameExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInStringInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInStringInstructionAST ("grammarInStringInstructionAST",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInStringInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInStringInstructionAST_2D_weak & inOperand) const {
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

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak & GALGAS_grammarInStringInstructionAST_2D_weak::operator = (const GALGAS_grammarInStringInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (const GALGAS_grammarInStringInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST_2D_weak::bang_grammarInStringInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInStringInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInStringInstructionAST) ;
      result = GALGAS_grammarInStringInstructionAST ((cPtr_grammarInStringInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInStringInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ("grammarInStringInstructionAST-weak",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  const GALGAS_grammarInStringInstructionAST_2D_weak * p = (const GALGAS_grammarInStringInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInStringInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::operator = (const GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (const GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::bang_grammarInstructionWithSourceFileForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionWithSourceFileForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
      result = GALGAS_grammarInstructionWithSourceFileForGeneration ((cPtr_grammarInstructionWithSourceFileForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionWithSourceFileForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ("grammarInstructionWithSourceFileForGeneration-weak",
                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak result ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak * p = (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::objectCompare (const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::operator = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::bang_grammarInstructionWithSourceExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
      result = GALGAS_grammarInstructionWithSourceExpressionForGeneration ((cPtr_grammarInstructionWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionWithSourceExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak ("grammarInstructionWithSourceExpressionForGeneration-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak result ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak * p = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecInstructionAST::objectCompare (const GALGAS_incDecInstructionAST & inOperand) const {
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

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                          const GALGAS_lstring & inAttribute_mReceiverName,
                                                                          const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                          const GALGAS_incDecKind & inAttribute_mKind
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMPrefixedBySelf (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mPrefixedBySelf = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_incDecInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecInstructionAST::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_bool & in_mPrefixedBySelf,
                                                      const GALGAS_lstring & in_mReceiverName,
                                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                                      const GALGAS_incDecKind & in_mKind
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@incDecInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecInstructionAST_2D_weak::objectCompare (const GALGAS_incDecInstructionAST_2D_weak & inOperand) const {
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

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak & GALGAS_incDecInstructionAST_2D_weak::operator = (const GALGAS_incDecInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (const GALGAS_incDecInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST_2D_weak::bang_incDecInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionAST) ;
      result = GALGAS_incDecInstructionAST ((cPtr_incDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ("incDecInstructionAST-weak",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  const GALGAS_incDecInstructionAST_2D_weak * p = (const GALGAS_incDecInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecNoOVFInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecNoOVFInstructionAST::objectCompare (const GALGAS_incDecNoOVFInstructionAST & inOperand) const {
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

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (const cPtr_incDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                    const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                    const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMPrefixedBySelf (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mPrefixedBySelf = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecNoOVFInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_incDecNoOVFInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionAST::cPtr_incDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_bool & in_mPrefixedBySelf,
                                                                const GALGAS_lstring & in_mReceiverName,
                                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                                const GALGAS_incDecKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

void cPtr_incDecNoOVFInstructionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ("incDecNoOVFInstructionAST",
                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecNoOVFInstructionAST_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionAST_2D_weak & inOperand) const {
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

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak & GALGAS_incDecNoOVFInstructionAST_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (const GALGAS_incDecNoOVFInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST_2D_weak::bang_incDecNoOVFInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionAST) ;
      result = GALGAS_incDecNoOVFInstructionAST ((cPtr_incDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ("incDecNoOVFInstructionAST-weak",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionAST_2D_weak * p = (const GALGAS_incDecNoOVFInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecInstructionForGeneration::objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const {
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

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                              const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                              const GALGAS_incDecKind & inAttribute_mKind
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_incDecInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecInstructionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mReceiverCppName,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                                                          const GALGAS_incDecKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

void cPtr_incDecInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@incDecInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak & GALGAS_incDecInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (const GALGAS_incDecInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration_2D_weak::bang_incDecInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionForGeneration) ;
      result = GALGAS_incDecInstructionForGeneration ((cPtr_incDecInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ("incDecInstructionForGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecInstructionForGeneration_2D_weak * p = (const GALGAS_incDecInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecNoOVFInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecNoOVFInstructionForGeneration::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const {
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

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                        const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                        const GALGAS_incDecKind & inAttribute_mKind
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mReceiverCppName,
                                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

void cPtr_incDecNoOVFInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::bang_incDecNoOVFInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionForGeneration) ;
      result = GALGAS_incDecNoOVFInstructionForGeneration ((cPtr_incDecNoOVFInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ("incDecNoOVFInstructionForGeneration-weak",
                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak * p = (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @localVariableOrConstantDeclarationWithAssignmentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsConstant.objectCompare (p->mProperty_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mIsConstant (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithAssignmentAST::cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                                                    const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                    const GALGAS_lstring & in_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mIsConstant, mProperty_mOptionalTypeName, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableOrConstantDeclarationWithAssignmentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ("localVariableOrConstantDeclarationWithAssignmentAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::bang_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
      result = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ((cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableOrConstantDeclarationWithAssignmentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ("localVariableOrConstantDeclarationWithAssignmentAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_undefinedLocalConstantDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantTypeName.objectCompare (p->mProperty_mConstantTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationAST::objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST & inOperand) const {
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

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (const cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationAST::cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                                      const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantTypeName (in_mConstantTypeName),
mProperty_mConstantName (in_mConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

void cPtr_undefinedLocalConstantDeclarationAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationAST (mProperty_mInstructionLocation, mProperty_mConstantTypeName, mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ("undefinedLocalConstantDeclarationAST",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::operator = (const GALGAS_undefinedLocalConstantDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (const GALGAS_undefinedLocalConstantDeclarationAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::bang_undefinedLocalConstantDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationAST) ;
      result = GALGAS_undefinedLocalConstantDeclarationAST ((cPtr_undefinedLocalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ("undefinedLocalConstantDeclarationAST-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST_2D_weak result ;
  const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak * p = (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @localConstantDeclarationWithAssignmentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const {
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

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localConstantDeclarationWithAssignmentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localConstantDeclarationWithAssignmentAST::cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

void cPtr_localConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@localConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localConstantDeclarationWithAssignmentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ("localConstantDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (const GALGAS_localConstantDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::bang_localConstantDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
      result = GALGAS_localConstantDeclarationWithAssignmentAST ((cPtr_localConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localConstantDeclarationWithAssignmentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ("localConstantDeclarationWithAssignmentAST-weak",
                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_undefinedLocalConstantDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
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

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                                 GALGAS_string::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mTargetType,
                                                                                                                              const GALGAS_string & inAttribute_mCppVariableName
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (inAttribute_mTargetType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_undefinedLocalConstantDeclarationForGeneration::readProperty_mTargetType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_undefinedLocalConstantDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                                                                          const GALGAS_string & in_mCppVariableName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mCppVariableName (in_mCppVariableName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationForGeneration:" ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::operator = (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::bang_undefinedLocalConstantDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
      result = GALGAS_undefinedLocalConstantDeclarationForGeneration ((cPtr_undefinedLocalConstantDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ("undefinedLocalConstantDeclarationForGeneration-weak",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak result ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak * p = (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak & GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::operator = (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
      result = GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ((cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableOrConstantDeclarationWithSourceExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak result ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak * p = (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_logInstructionForGeneration_2D_weak::objectCompare (const GALGAS_logInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_logInstructionForGeneration_2D_weak::GALGAS_logInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak & GALGAS_logInstructionForGeneration_2D_weak::operator = (const GALGAS_logInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak::GALGAS_logInstructionForGeneration_2D_weak (const GALGAS_logInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak GALGAS_logInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration_2D_weak::bang_logInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_logInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionForGeneration) ;
      result = GALGAS_logInstructionForGeneration ((cPtr_logInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@logInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logInstructionForGeneration_2D_weak ("logInstructionForGeneration-weak",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak GALGAS_logInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration_2D_weak result ;
  const GALGAS_logInstructionForGeneration_2D_weak * p = (const GALGAS_logInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @loopInstructionForGeneration reference class
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

void GALGAS_loopInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mVariantExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMFirstInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mFirstInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMLoopExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mLoopExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loopInstructionForGeneration::setter_setMSecondInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mSecondInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::readProperty_mVariantExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    return p->mProperty_mVariantExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::readProperty_mFirstInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::readProperty_mLoopExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::readProperty_mSecondInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
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

typeComparisonResult GALGAS_loopInstructionForGeneration_2D_weak::objectCompare (const GALGAS_loopInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_loopInstructionForGeneration_2D_weak::GALGAS_loopInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionForGeneration_2D_weak & GALGAS_loopInstructionForGeneration_2D_weak::operator = (const GALGAS_loopInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionForGeneration_2D_weak::GALGAS_loopInstructionForGeneration_2D_weak (const GALGAS_loopInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionForGeneration_2D_weak GALGAS_loopInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_loopInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionForGeneration GALGAS_loopInstructionForGeneration_2D_weak::bang_loopInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loopInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionForGeneration) ;
      result = GALGAS_loopInstructionForGeneration ((cPtr_loopInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@loopInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionForGeneration_2D_weak ("loopInstructionForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loopInstructionForGeneration_2D_weak GALGAS_loopInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionForGeneration_2D_weak result ;
  const GALGAS_loopInstructionForGeneration_2D_weak * p = (const GALGAS_loopInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loopInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_messageInstructionForGeneration_2D_weak::objectCompare (const GALGAS_messageInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_messageInstructionForGeneration_2D_weak::GALGAS_messageInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak & GALGAS_messageInstructionForGeneration_2D_weak::operator = (const GALGAS_messageInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak::GALGAS_messageInstructionForGeneration_2D_weak (const GALGAS_messageInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak GALGAS_messageInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_messageInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration GALGAS_messageInstructionForGeneration_2D_weak::bang_messageInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_messageInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_messageInstructionForGeneration) ;
      result = GALGAS_messageInstructionForGeneration ((cPtr_messageInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@messageInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_messageInstructionForGeneration_2D_weak ("messageInstructionForGeneration-weak",
                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_messageInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_messageInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_messageInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak GALGAS_messageInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionForGeneration_2D_weak result ;
  const GALGAS_messageInstructionForGeneration_2D_weak * p = (const GALGAS_messageInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_messageInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @methodCallInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_methodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_methodCallInstructionAST::objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const {
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

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_methodCallInstructionAST::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_methodCallInstructionAST::readProperty_mMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_methodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @methodCallInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionAST::cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                              const GALGAS_lstring & in_mMethodName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_methodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

void cPtr_methodCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@methodCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_methodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_methodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@methodCallInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionAST ("methodCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_methodCallInstructionAST_2D_weak::objectCompare (const GALGAS_methodCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_methodCallInstructionAST_2D_weak::GALGAS_methodCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak & GALGAS_methodCallInstructionAST_2D_weak::operator = (const GALGAS_methodCallInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak::GALGAS_methodCallInstructionAST_2D_weak (const GALGAS_methodCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak GALGAS_methodCallInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST_2D_weak::bang_methodCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_methodCallInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionAST) ;
      result = GALGAS_methodCallInstructionAST ((cPtr_methodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@methodCallInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionAST_2D_weak ("methodCallInstructionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak GALGAS_methodCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST_2D_weak result ;
  const GALGAS_methodCallInstructionAST_2D_weak * p = (const GALGAS_methodCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_methodCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_methodCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_methodCallInstructionForGeneration_2D_weak::GALGAS_methodCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak & GALGAS_methodCallInstructionForGeneration_2D_weak::operator = (const GALGAS_methodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak::GALGAS_methodCallInstructionForGeneration_2D_weak (const GALGAS_methodCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak GALGAS_methodCallInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration GALGAS_methodCallInstructionForGeneration_2D_weak::bang_methodCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_methodCallInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionForGeneration) ;
      result = GALGAS_methodCallInstructionForGeneration ((cPtr_methodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@methodCallInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2D_weak ("methodCallInstructionForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak GALGAS_methodCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration_2D_weak result ;
  const GALGAS_methodCallInstructionForGeneration_2D_weak * p = (const GALGAS_methodCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @procCallInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_procCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_procCallInstructionAST::objectCompare (const GALGAS_procCallInstructionAST & inOperand) const {
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

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_procCallInstructionAST::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_procCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mRoutineName,
                                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@procCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mProperty_mInstructionLocation, mProperty_mRoutineName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@procCallInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                               & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_procCallInstructionAST_2D_weak::objectCompare (const GALGAS_procCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_procCallInstructionAST_2D_weak::GALGAS_procCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak & GALGAS_procCallInstructionAST_2D_weak::operator = (const GALGAS_procCallInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak::GALGAS_procCallInstructionAST_2D_weak (const GALGAS_procCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak GALGAS_procCallInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_procCallInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST_2D_weak::bang_procCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procCallInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionAST) ;
      result = GALGAS_procCallInstructionAST ((cPtr_procCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@procCallInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionAST_2D_weak ("procCallInstructionAST-weak",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak GALGAS_procCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST_2D_weak result ;
  const GALGAS_procCallInstructionAST_2D_weak * p = (const GALGAS_procCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @procCallInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_procCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_procCallInstructionForGeneration::objectCompare (const GALGAS_procCallInstructionForGeneration & inOperand) const {
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

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionForGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_actualParameterListForGeneration::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                  const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionForGeneration (inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_procCallInstructionForGeneration::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_procCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

void cPtr_procCallInstructionForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@procCallInstructionForGeneration:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionForGeneration (mProperty_mRoutineName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@procCallInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionForGeneration ("procCallInstructionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_procCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_procCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_procCallInstructionForGeneration_2D_weak::GALGAS_procCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak & GALGAS_procCallInstructionForGeneration_2D_weak::operator = (const GALGAS_procCallInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak::GALGAS_procCallInstructionForGeneration_2D_weak (const GALGAS_procCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak GALGAS_procCallInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration_2D_weak::bang_procCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procCallInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionForGeneration) ;
      result = GALGAS_procCallInstructionForGeneration ((cPtr_procCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@procCallInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2D_weak ("procCallInstructionForGeneration-weak",
                                                                 & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak GALGAS_procCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration_2D_weak result ;
  const GALGAS_procCallInstructionForGeneration_2D_weak * p = (const GALGAS_procCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @setterCallInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverStructProperties.objectCompare (p->mProperty_mReceiverStructProperties) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeNameForCasting.objectCompare (p->mProperty_mTypeNameForCasting) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_setterCallInstructionAST::objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const {
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

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_setterCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (const cPtr_setterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                  const GALGAS_lstringlist & inAttribute_mReceiverStructProperties,
                                                                                  const GALGAS_lstring & inAttribute_mTypeNameForCasting,
                                                                                  const GALGAS_lstring & inAttribute_mSetterName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverStructProperties.isValid () && inAttribute_mTypeNameForCasting.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mReceiverStructProperties, inAttribute_mTypeNameForCasting, inAttribute_mSetterName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_setterCallInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_setterCallInstructionAST::readProperty_mReceiverStructProperties (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mReceiverStructProperties ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionAST::readProperty_mTypeNameForCasting (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mTypeNameForCasting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionAST::readProperty_mSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_setterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @setterCallInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionAST::cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_bool & in_mPrefixedBySelf,
                                                              const GALGAS_lstring & in_mReceiverName,
                                                              const GALGAS_lstringlist & in_mReceiverStructProperties,
                                                              const GALGAS_lstring & in_mTypeNameForCasting,
                                                              const GALGAS_lstring & in_mSetterName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverStructProperties (in_mReceiverStructProperties),
mProperty_mTypeNameForCasting (in_mTypeNameForCasting),
mProperty_mSetterName (in_mSetterName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

void cPtr_setterCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@setterCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverStructProperties.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeNameForCasting.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mReceiverStructProperties, mProperty_mTypeNameForCasting, mProperty_mSetterName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@setterCallInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionAST ("setterCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_setterCallInstructionAST_2D_weak::objectCompare (const GALGAS_setterCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_setterCallInstructionAST_2D_weak::GALGAS_setterCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak & GALGAS_setterCallInstructionAST_2D_weak::operator = (const GALGAS_setterCallInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak::GALGAS_setterCallInstructionAST_2D_weak (const GALGAS_setterCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak GALGAS_setterCallInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST_2D_weak::bang_setterCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setterCallInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionAST) ;
      result = GALGAS_setterCallInstructionAST ((cPtr_setterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@setterCallInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionAST_2D_weak ("setterCallInstructionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak GALGAS_setterCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST_2D_weak result ;
  const GALGAS_setterCallInstructionAST_2D_weak * p = (const GALGAS_setterCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @selfSetterCallInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selfSetterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selfSetterCallInstructionAST::objectCompare (const GALGAS_selfSetterCallInstructionAST & inOperand) const {
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

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfSetterCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (const cPtr_selfSetterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfSetterCallInstructionAST::readProperty_mSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    return p->mProperty_mSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_selfSetterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selfSetterCallInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionAST::cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mSetterName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSetterName (in_mSetterName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

void cPtr_selfSetterCallInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@selfSetterCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfSetterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mSetterName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selfSetterCallInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ("selfSetterCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selfSetterCallInstructionAST_2D_weak::objectCompare (const GALGAS_selfSetterCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfSetterCallInstructionAST_2D_weak::GALGAS_selfSetterCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak & GALGAS_selfSetterCallInstructionAST_2D_weak::operator = (const GALGAS_selfSetterCallInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak::GALGAS_selfSetterCallInstructionAST_2D_weak (const GALGAS_selfSetterCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak GALGAS_selfSetterCallInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST_2D_weak::bang_selfSetterCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfSetterCallInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionAST) ;
      result = GALGAS_selfSetterCallInstructionAST ((cPtr_selfSetterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@selfSetterCallInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2D_weak ("selfSetterCallInstructionAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak GALGAS_selfSetterCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST_2D_weak result ;
  const GALGAS_selfSetterCallInstructionAST_2D_weak * p = (const GALGAS_selfSetterCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfSetterCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @setterCallInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverBaseName.objectCompare (p->mProperty_mReceiverBaseName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverStructAttributes.objectCompare (p->mProperty_mReceiverStructAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastType.objectCompare (p->mProperty_mCastType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
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


typeComparisonResult GALGAS_setterCallInstructionForGeneration::objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const {
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

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (const cPtr_setterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                      const GALGAS_string & inAttribute_mReceiverBaseName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mReceiverStructAttributes,
                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mCastType,
                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                      const GALGAS_lstring & inAttribute_mSetterName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverBaseName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mCastType.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverBaseName, inAttribute_mReceiverStructAttributes, inAttribute_mCastType, inAttribute_mReceiverType, inAttribute_mSetterName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_setterCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverBaseName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverBaseName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverStructAttributes (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverStructAttributes ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_setterCallInstructionForGeneration::readProperty_mCastType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionForGeneration::readProperty_mSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_setterCallInstructionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_methodKind () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_setterCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_setterCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_setterCallInstructionForGeneration::readProperty_mMethodBaseType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mMethodBaseType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @setterCallInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionForGeneration::cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_string & in_mReceiverCppName,
                                                                                  const GALGAS_string & in_mReceiverBaseName,
                                                                                  const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mCastType,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                  const GALGAS_lstring & in_mSetterName,
                                                                                  const GALGAS_methodKind & in_mKind,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mMethodBaseType
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverBaseName (in_mReceiverBaseName),
mProperty_mReceiverStructAttributes (in_mReceiverStructAttributes),
mProperty_mCastType (in_mCastType),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mSetterName (in_mSetterName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mMethodBaseType (in_mMethodBaseType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

void cPtr_setterCallInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@setterCallInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverBaseName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverStructAttributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_setterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setterCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverBaseName, mProperty_mReceiverStructAttributes, mProperty_mCastType, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@setterCallInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ("setterCallInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_setterCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_setterCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_setterCallInstructionForGeneration_2D_weak::GALGAS_setterCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak & GALGAS_setterCallInstructionForGeneration_2D_weak::operator = (const GALGAS_setterCallInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak::GALGAS_setterCallInstructionForGeneration_2D_weak (const GALGAS_setterCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak GALGAS_setterCallInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration_2D_weak::bang_setterCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setterCallInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionForGeneration) ;
      result = GALGAS_setterCallInstructionForGeneration ((cPtr_setterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@setterCallInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2D_weak ("setterCallInstructionForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak GALGAS_setterCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration_2D_weak result ;
  const GALGAS_setterCallInstructionForGeneration_2D_weak * p = (const GALGAS_setterCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @selfSetterCallInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selfSetterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfCppName.objectCompare (p->mProperty_mSelfCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
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
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selfSetterCallInstructionForGeneration::objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const {
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

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mSelfCppName,
                                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selfSetterCallInstructionForGeneration::readProperty_mSelfCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mSelfCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_selfSetterCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfSetterCallInstructionForGeneration::readProperty_mSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_selfSetterCallInstructionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_methodKind () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_selfSetterCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_selfSetterCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selfSetterCallInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionForGeneration::cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                          const GALGAS_lstring & in_mSetterName,
                                                                                          const GALGAS_methodKind & in_mKind,
                                                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mSelfCppName (in_mSelfCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mSetterName (in_mSetterName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

void cPtr_selfSetterCallInstructionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@selfSetterCallInstructionForGeneration:" ;
  mProperty_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfSetterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionForGeneration (mProperty_mSelfCppName, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selfSetterCallInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ("selfSetterCallInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selfSetterCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_selfSetterCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_selfSetterCallInstructionForGeneration_2D_weak::GALGAS_selfSetterCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak & GALGAS_selfSetterCallInstructionForGeneration_2D_weak::operator = (const GALGAS_selfSetterCallInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak::GALGAS_selfSetterCallInstructionForGeneration_2D_weak (const GALGAS_selfSetterCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak GALGAS_selfSetterCallInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration_2D_weak::bang_selfSetterCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionForGeneration) ;
      result = GALGAS_selfSetterCallInstructionForGeneration ((cPtr_selfSetterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@selfSetterCallInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2D_weak ("selfSetterCallInstructionForGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak GALGAS_selfSetterCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration_2D_weak result ;
  const GALGAS_selfSetterCallInstructionForGeneration_2D_weak * p = (const GALGAS_selfSetterCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfSetterCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_switchInstructionForGeneration_2D_weak::objectCompare (const GALGAS_switchInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_switchInstructionForGeneration_2D_weak::GALGAS_switchInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak & GALGAS_switchInstructionForGeneration_2D_weak::operator = (const GALGAS_switchInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak::GALGAS_switchInstructionForGeneration_2D_weak (const GALGAS_switchInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak GALGAS_switchInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration GALGAS_switchInstructionForGeneration_2D_weak::bang_switchInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_switchInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionForGeneration) ;
      result = GALGAS_switchInstructionForGeneration ((cPtr_switchInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@switchInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionForGeneration_2D_weak ("switchInstructionForGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak GALGAS_switchInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration_2D_weak result ;
  const GALGAS_switchInstructionForGeneration_2D_weak * p = (const GALGAS_switchInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typeMethodCallInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeMethodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeMethodCallInstructionAST::objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const {
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

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeMethodCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (const cPtr_typeMethodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mMethodName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::readProperty_mMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_typeMethodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typeMethodCallInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typeMethodCallInstructionAST::cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mMethodName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeMethodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

void cPtr_typeMethodCallInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@typeMethodCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeMethodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mMethodName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@typeMethodCallInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ("typeMethodCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  const GALGAS_typeMethodCallInstructionAST * p = (const GALGAS_typeMethodCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeMethodCallInstructionAST_2D_weak::objectCompare (const GALGAS_typeMethodCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_typeMethodCallInstructionAST_2D_weak::GALGAS_typeMethodCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak & GALGAS_typeMethodCallInstructionAST_2D_weak::operator = (const GALGAS_typeMethodCallInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak::GALGAS_typeMethodCallInstructionAST_2D_weak (const GALGAS_typeMethodCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak GALGAS_typeMethodCallInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST_2D_weak::bang_typeMethodCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeMethodCallInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionAST) ;
      result = GALGAS_typeMethodCallInstructionAST ((cPtr_typeMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeMethodCallInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2D_weak ("typeMethodCallInstructionAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak GALGAS_typeMethodCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST_2D_weak result ;
  const GALGAS_typeMethodCallInstructionAST_2D_weak * p = (const GALGAS_typeMethodCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typeMethodCallInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeMethodCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodCallInstructionForGeneration * p = (const cPtr_typeMethodCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeMethodCallInstructionForGeneration::objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const {
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

GALGAS_typeMethodCallInstructionForGeneration::GALGAS_typeMethodCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeMethodCallInstructionForGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_actualParameterListForGeneration::constructor_emptyList (HERE),
                                                                         GALGAS_bool::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration::GALGAS_typeMethodCallInstructionForGeneration (const cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                              const GALGAS_lstring & inAttribute_mMethodName,
                                                                                                              const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                              const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodCallInstructionForGeneration (inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionForGeneration::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_typeMethodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeMethodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typeMethodCallInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typeMethodCallInstructionForGeneration::cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                                                          const GALGAS_lstring & in_mMethodName,
                                                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeMethodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;
}

void cPtr_typeMethodCallInstructionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@typeMethodCallInstructionForGeneration:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeMethodCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionForGeneration (mProperty_mTypeName, mProperty_mMethodName, mProperty_mActualParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@typeMethodCallInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ("typeMethodCallInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  const GALGAS_typeMethodCallInstructionForGeneration * p = (const GALGAS_typeMethodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeMethodCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_typeMethodCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_typeMethodCallInstructionForGeneration_2D_weak::GALGAS_typeMethodCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak & GALGAS_typeMethodCallInstructionForGeneration_2D_weak::operator = (const GALGAS_typeMethodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak::GALGAS_typeMethodCallInstructionForGeneration_2D_weak (const GALGAS_typeMethodCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak GALGAS_typeMethodCallInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration_2D_weak::bang_typeMethodCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionForGeneration) ;
      result = GALGAS_typeMethodCallInstructionForGeneration ((cPtr_typeMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeMethodCallInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2D_weak ("typeMethodCallInstructionForGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak GALGAS_typeMethodCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration_2D_weak result ;
  const GALGAS_typeMethodCallInstructionForGeneration_2D_weak * p = (const GALGAS_typeMethodCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @localVariableDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationAST * p = (const cPtr_localVariableDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUndefinedConstant.objectCompare (p->mProperty_mIsUndefinedConstant) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableDeclarationAST::objectCompare (const GALGAS_localVariableDeclarationAST & inOperand) const {
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

GALGAS_localVariableDeclarationAST::GALGAS_localVariableDeclarationAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST GALGAS_localVariableDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_localVariableDeclarationAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST::GALGAS_localVariableDeclarationAST (const cPtr_localVariableDeclarationAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST GALGAS_localVariableDeclarationAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mVariableName,
                                                                                        const GALGAS_bool & inAttribute_mIsUndefinedConstant
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mIsUndefinedConstant.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mVariableName, inAttribute_mIsUndefinedConstant COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableDeclarationAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableDeclarationAST * p = (cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableDeclarationAST::readProperty_mVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableDeclarationAST * p = (cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    return p->mProperty_mVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableDeclarationAST::readProperty_mIsUndefinedConstant (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_localVariableDeclarationAST * p = (cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    return p->mProperty_mIsUndefinedConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationAST::cPtr_localVariableDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_lstring & in_mTypeName,
                                                                    const GALGAS_lstring & in_mVariableName,
                                                                    const GALGAS_bool & in_mIsUndefinedConstant
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mVariableName (in_mVariableName),
mProperty_mIsUndefinedConstant (in_mIsUndefinedConstant) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationAST ;
}

void cPtr_localVariableDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@localVariableDeclarationAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUndefinedConstant.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableDeclarationAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mVariableName, mProperty_mIsUndefinedConstant COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationAST ("localVariableDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST GALGAS_localVariableDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationAST result ;
  const GALGAS_localVariableDeclarationAST * p = (const GALGAS_localVariableDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVariableDeclarationAST_2D_weak::objectCompare (const GALGAS_localVariableDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_localVariableDeclarationAST_2D_weak::GALGAS_localVariableDeclarationAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST_2D_weak & GALGAS_localVariableDeclarationAST_2D_weak::operator = (const GALGAS_localVariableDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST_2D_weak::GALGAS_localVariableDeclarationAST_2D_weak (const GALGAS_localVariableDeclarationAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST_2D_weak GALGAS_localVariableDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localVariableDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST GALGAS_localVariableDeclarationAST_2D_weak::bang_localVariableDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationAST) ;
      result = GALGAS_localVariableDeclarationAST ((cPtr_localVariableDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationAST_2D_weak ("localVariableDeclarationAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationAST_2D_weak GALGAS_localVariableDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationAST_2D_weak result ;
  const GALGAS_localVariableDeclarationAST_2D_weak * p = (const GALGAS_localVariableDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @localVariableDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mVariableType.objectCompare (p->mProperty_mVariableType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableDeclarationForGeneration::objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const {
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

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_localVariableDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mVariableType,
                                                                                                            const GALGAS_string & inAttribute_mCppVariableName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  if (inAttribute_mVariableType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (inAttribute_mVariableType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_localVariableDeclarationForGeneration::readProperty_mVariableType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mVariableType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVariableDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mVariableType,
                                                                                        const GALGAS_string & in_mCppVariableName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mVariableType (in_mVariableType),
mProperty_mCppVariableName (in_mCppVariableName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

void cPtr_localVariableDeclarationForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@localVariableDeclarationForGeneration:" ;
  mProperty_mVariableType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableDeclarationForGeneration (mProperty_mVariableType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVariableDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_localVariableDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_localVariableDeclarationForGeneration_2D_weak::GALGAS_localVariableDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak & GALGAS_localVariableDeclarationForGeneration_2D_weak::operator = (const GALGAS_localVariableDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak::GALGAS_localVariableDeclarationForGeneration_2D_weak (const GALGAS_localVariableDeclarationForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak GALGAS_localVariableDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration_2D_weak::bang_localVariableDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationForGeneration) ;
      result = GALGAS_localVariableDeclarationForGeneration ((cPtr_localVariableDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2D_weak ("localVariableDeclarationForGeneration-weak",
                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak GALGAS_localVariableDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration_2D_weak result ;
  const GALGAS_localVariableDeclarationForGeneration_2D_weak * p = (const GALGAS_localVariableDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @localVariableDeclarationWithAssignmentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationWithAssignmentAST * p = (const cPtr_localVariableDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableDeclarationWithAssignmentAST::objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST & inOperand) const {
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

GALGAS_localVariableDeclarationWithAssignmentAST::GALGAS_localVariableDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST::GALGAS_localVariableDeclarationWithAssignmentAST (const cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localVariableDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationWithAssignmentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationWithAssignmentAST::cPtr_localVariableDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

void cPtr_localVariableDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@localVariableDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableDeclarationWithAssignmentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ("localVariableDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  const GALGAS_localVariableDeclarationWithAssignmentAST * p = (const GALGAS_localVariableDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localVariableDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (const GALGAS_localVariableDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::bang_localVariableDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
      result = GALGAS_localVariableDeclarationWithAssignmentAST ((cPtr_localVariableDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableDeclarationWithAssignmentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak ("localVariableDeclarationWithAssignmentAST-weak",
                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_warningInstructionForGeneration_2D_weak::objectCompare (const GALGAS_warningInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_warningInstructionForGeneration_2D_weak::GALGAS_warningInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak & GALGAS_warningInstructionForGeneration_2D_weak::operator = (const GALGAS_warningInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak::GALGAS_warningInstructionForGeneration_2D_weak (const GALGAS_warningInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak GALGAS_warningInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration GALGAS_warningInstructionForGeneration_2D_weak::bang_warningInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_warningInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionForGeneration) ;
      result = GALGAS_warningInstructionForGeneration ((cPtr_warningInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@warningInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionForGeneration_2D_weak ("warningInstructionForGeneration-weak",
                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_warningInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_warningInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak GALGAS_warningInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration_2D_weak result ;
  const GALGAS_warningInstructionForGeneration_2D_weak * p = (const GALGAS_warningInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_warningInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @readAccessWithInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfKeyExpression.objectCompare (p->mProperty_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoBranchInstructions.objectCompare (p->mProperty_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchInstructions.objectCompare (p->mProperty_mElseBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_else_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_readAccessWithInstructionAST::objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const {
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

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (const cPtr_readAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readAccessWithInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mPrefix,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                          const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mDoBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mElseBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_mElseBranchInstructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_mElseBranchInstructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMPrefix (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mPrefix = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMReceiverExpression (GALGAS_semanticExpressionAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMEndOfReceiverExpression (GALGAS_location inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOfReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMKeyExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMEndOfKeyExpression (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOfKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMSearchMethodNameForErrorSignaling (GALGAS_lstring inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mDoBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMEndOf_5F_do_5F_instructions (GALGAS_location inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mElseBranchInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readAccessWithInstructionAST::setter_setMEndOf_5F_else_5F_instructions (GALGAS_location inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_else_5F_instructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readAccessWithInstructionAST::readProperty_mPrefix (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::readProperty_mKeyExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mKeyExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOfKeyExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOfKeyExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readAccessWithInstructionAST::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::readProperty_mDoBranchInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mDoBranchInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOf_5F_do_5F_instructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::readProperty_mElseBranchInstructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mElseBranchInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOf_5F_else_5F_instructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_else_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @readAccessWithInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_readAccessWithInstructionAST::cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mPrefix,
                                                                      const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                      const GALGAS_location & in_mEndOfReceiverExpression,
                                                                      const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                      const GALGAS_location & in_mEndOfKeyExpression,
                                                                      const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                      const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mEndOfKeyExpression (in_mEndOfKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_mDoBranchInstructions (in_mDoBranchInstructions),
mProperty_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mProperty_mElseBranchInstructions (in_mElseBranchInstructions),
mProperty_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

void cPtr_readAccessWithInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@readAccessWithInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readAccessWithInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefix, mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mKeyExpression, mProperty_mEndOfKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_mDoBranchInstructions, mProperty_mEndOf_5F_do_5F_instructions, mProperty_mElseBranchInstructions, mProperty_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@readAccessWithInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readAccessWithInstructionAST ("readAccessWithInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  const GALGAS_readAccessWithInstructionAST * p = (const GALGAS_readAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_readAccessWithInstructionAST_2D_weak::objectCompare (const GALGAS_readAccessWithInstructionAST_2D_weak & inOperand) const {
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

GALGAS_readAccessWithInstructionAST_2D_weak::GALGAS_readAccessWithInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak & GALGAS_readAccessWithInstructionAST_2D_weak::operator = (const GALGAS_readAccessWithInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak::GALGAS_readAccessWithInstructionAST_2D_weak (const GALGAS_readAccessWithInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak GALGAS_readAccessWithInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST_2D_weak::bang_readAccessWithInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_readAccessWithInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readAccessWithInstructionAST) ;
      result = GALGAS_readAccessWithInstructionAST ((cPtr_readAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@readAccessWithInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2D_weak ("readAccessWithInstructionAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readAccessWithInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readAccessWithInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readAccessWithInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak GALGAS_readAccessWithInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST_2D_weak result ;
  const GALGAS_readAccessWithInstructionAST_2D_weak * p = (const GALGAS_readAccessWithInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readAccessWithInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @readWriteAccessWithInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readWriteAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverIsPrefixedBySelf.objectCompare (p->mProperty_mReceiverIsPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldList.objectCompare (p->mProperty_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfKeyExpression.objectCompare (p->mProperty_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_do_5F_Instructions.objectCompare (p->mProperty_m_5F_do_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_else_5F_Instructions.objectCompare (p->mProperty_m_5F_else_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_else_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_readWriteAccessWithInstructionAST::objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const {
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

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (const cPtr_readWriteAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readWriteAccessWithInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                    const GALGAS_bool & inAttribute_mReceiverIsPrefixedBySelf,
                                                                                                    const GALGAS_lstringlist & inAttribute_mFieldList,
                                                                                                    const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                                    const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_do_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_else_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverIsPrefixedBySelf.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_m_5F_do_5F_Instructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_m_5F_else_5F_Instructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readWriteAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverName, inAttribute_mReceiverIsPrefixedBySelf, inAttribute_mFieldList, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_m_5F_do_5F_Instructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_m_5F_else_5F_Instructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMPrefix (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mPrefix = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMReceiverIsPrefixedBySelf (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mReceiverIsPrefixedBySelf = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMFieldList (GALGAS_lstringlist inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mFieldList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOfReceiverExpression (GALGAS_location inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOfReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMKeyExpression (GALGAS_semanticExpressionAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOfKeyExpression (GALGAS_location inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOfKeyExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMSearchMethodNameForErrorSignaling (GALGAS_lstring inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setM_5F_do_5F_Instructions (GALGAS_semanticInstructionListAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_m_5F_do_5F_Instructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOf_5F_do_5F_instructions (GALGAS_location inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setM_5F_else_5F_Instructions (GALGAS_semanticInstructionListAST inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_m_5F_else_5F_Instructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOf_5F_else_5F_instructions (GALGAS_location inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_else_5F_instructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::readProperty_mPrefix (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_readWriteAccessWithInstructionAST::readProperty_mReceiverIsPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mReceiverIsPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_readWriteAccessWithInstructionAST::readProperty_mFieldList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mFieldList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_readWriteAccessWithInstructionAST::readProperty_mKeyExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mKeyExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOfKeyExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOfKeyExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::readProperty_m_5F_do_5F_Instructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_m_5F_do_5F_Instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOf_5F_do_5F_instructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::readProperty_m_5F_else_5F_Instructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_m_5F_else_5F_Instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOf_5F_else_5F_instructions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_else_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @readWriteAccessWithInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_readWriteAccessWithInstructionAST::cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstring & in_mPrefix,
                                                                                const GALGAS_lstring & in_mReceiverName,
                                                                                const GALGAS_bool & in_mReceiverIsPrefixedBySelf,
                                                                                const GALGAS_lstringlist & in_mFieldList,
                                                                                const GALGAS_location & in_mEndOfReceiverExpression,
                                                                                const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                                const GALGAS_location & in_mEndOfKeyExpression,
                                                                                const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverIsPrefixedBySelf (in_mReceiverIsPrefixedBySelf),
mProperty_mFieldList (in_mFieldList),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mEndOfKeyExpression (in_mEndOfKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_m_5F_do_5F_Instructions (in_m_5F_do_5F_Instructions),
mProperty_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mProperty_m_5F_else_5F_Instructions (in_m_5F_else_5F_Instructions),
mProperty_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readWriteAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

void cPtr_readWriteAccessWithInstructionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@readWriteAccessWithInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverIsPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_do_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_else_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readWriteAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readWriteAccessWithInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefix, mProperty_mReceiverName, mProperty_mReceiverIsPrefixedBySelf, mProperty_mFieldList, mProperty_mEndOfReceiverExpression, mProperty_mKeyExpression, mProperty_mEndOfKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_m_5F_do_5F_Instructions, mProperty_mEndOf_5F_do_5F_instructions, mProperty_m_5F_else_5F_Instructions, mProperty_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@readWriteAccessWithInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ("readWriteAccessWithInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readWriteAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readWriteAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  const GALGAS_readWriteAccessWithInstructionAST * p = (const GALGAS_readWriteAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readWriteAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_readWriteAccessWithInstructionAST_2D_weak::objectCompare (const GALGAS_readWriteAccessWithInstructionAST_2D_weak & inOperand) const {
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

GALGAS_readWriteAccessWithInstructionAST_2D_weak::GALGAS_readWriteAccessWithInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak & GALGAS_readWriteAccessWithInstructionAST_2D_weak::operator = (const GALGAS_readWriteAccessWithInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak::GALGAS_readWriteAccessWithInstructionAST_2D_weak (const GALGAS_readWriteAccessWithInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak GALGAS_readWriteAccessWithInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST_2D_weak::bang_readWriteAccessWithInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_readWriteAccessWithInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readWriteAccessWithInstructionAST) ;
      result = GALGAS_readWriteAccessWithInstructionAST ((cPtr_readWriteAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@readWriteAccessWithInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2D_weak ("readWriteAccessWithInstructionAST-weak",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readWriteAccessWithInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readWriteAccessWithInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteAccessWithInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak GALGAS_readWriteAccessWithInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST_2D_weak result ;
  const GALGAS_readWriteAccessWithInstructionAST_2D_weak * p = (const GALGAS_readWriteAccessWithInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readWriteAccessWithInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

