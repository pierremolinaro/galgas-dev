#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_openedSliceExpressionAST_2D_weak::objectCompare (const GALGAS_openedSliceExpressionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak::GALGAS_openedSliceExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak & GALGAS_openedSliceExpressionAST_2D_weak::operator = (const GALGAS_openedSliceExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak::GALGAS_openedSliceExpressionAST_2D_weak (const GALGAS_openedSliceExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak GALGAS_openedSliceExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST_2D_weak::bang_openedSliceExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_openedSliceExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_openedSliceExpressionAST) ;
      result = GALGAS_openedSliceExpressionAST ((cPtr_openedSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @openedSliceExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST_2D_weak ("openedSliceExpressionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedSliceExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak GALGAS_openedSliceExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST_2D_weak result ;
  const GALGAS_openedSliceExpressionAST_2D_weak * p = (const GALGAS_openedSliceExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_openedSliceExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_orShortExpressionForGeneration_2D_weak::objectCompare (const GALGAS_orShortExpressionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration_2D_weak::GALGAS_orShortExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration_2D_weak & GALGAS_orShortExpressionForGeneration_2D_weak::operator = (const GALGAS_orShortExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration_2D_weak::GALGAS_orShortExpressionForGeneration_2D_weak (const GALGAS_orShortExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration_2D_weak GALGAS_orShortExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_orShortExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration GALGAS_orShortExpressionForGeneration_2D_weak::bang_orShortExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orShortExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orShortExpressionForGeneration) ;
      result = GALGAS_orShortExpressionForGeneration ((cPtr_orShortExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @orShortExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2D_weak ("orShortExpressionForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orShortExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orShortExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration_2D_weak GALGAS_orShortExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionForGeneration_2D_weak result ;
  const GALGAS_orShortExpressionForGeneration_2D_weak * p = (const GALGAS_orShortExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orShortExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_openedSliceExpressionForGeneration_2D_weak::objectCompare (const GALGAS_openedSliceExpressionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration_2D_weak::GALGAS_openedSliceExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration_2D_weak & GALGAS_openedSliceExpressionForGeneration_2D_weak::operator = (const GALGAS_openedSliceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration_2D_weak::GALGAS_openedSliceExpressionForGeneration_2D_weak (const GALGAS_openedSliceExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration_2D_weak GALGAS_openedSliceExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_openedSliceExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration GALGAS_openedSliceExpressionForGeneration_2D_weak::bang_openedSliceExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_openedSliceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_openedSliceExpressionForGeneration) ;
      result = GALGAS_openedSliceExpressionForGeneration ((cPtr_openedSliceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @openedSliceExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2D_weak ("openedSliceExpressionForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedSliceExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration_2D_weak GALGAS_openedSliceExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionForGeneration_2D_weak result ;
  const GALGAS_openedSliceExpressionForGeneration_2D_weak * p = (const GALGAS_openedSliceExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_openedSliceExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_closedSliceExpressionForGeneration_2D_weak::objectCompare (const GALGAS_closedSliceExpressionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration_2D_weak::GALGAS_closedSliceExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration_2D_weak & GALGAS_closedSliceExpressionForGeneration_2D_weak::operator = (const GALGAS_closedSliceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration_2D_weak::GALGAS_closedSliceExpressionForGeneration_2D_weak (const GALGAS_closedSliceExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration_2D_weak GALGAS_closedSliceExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_closedSliceExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration GALGAS_closedSliceExpressionForGeneration_2D_weak::bang_closedSliceExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_closedSliceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_closedSliceExpressionForGeneration) ;
      result = GALGAS_closedSliceExpressionForGeneration ((cPtr_closedSliceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @closedSliceExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2D_weak ("closedSliceExpressionForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_closedSliceExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration_2D_weak GALGAS_closedSliceExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionForGeneration_2D_weak result ;
  const GALGAS_closedSliceExpressionForGeneration_2D_weak * p = (const GALGAS_closedSliceExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_closedSliceExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andShortExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andShortExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_andShortExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_andShortExpressionAST::objectCompare (const GALGAS_andShortExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::class_func_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                           const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                           const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andShortExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_andShortExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

void cPtr_andShortExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@andShortExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andShortExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @andShortExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST ("andShortExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  const GALGAS_andShortExpressionAST * p = (const GALGAS_andShortExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_andShortExpressionAST_2D_weak::objectCompare (const GALGAS_andShortExpressionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak::GALGAS_andShortExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak & GALGAS_andShortExpressionAST_2D_weak::operator = (const GALGAS_andShortExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak::GALGAS_andShortExpressionAST_2D_weak (const GALGAS_andShortExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak GALGAS_andShortExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_andShortExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST_2D_weak::bang_andShortExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andShortExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andShortExpressionAST) ;
      result = GALGAS_andShortExpressionAST ((cPtr_andShortExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andShortExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST_2D_weak ("andShortExpressionAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak GALGAS_andShortExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST_2D_weak result ;
  const GALGAS_andShortExpressionAST_2D_weak * p = (const GALGAS_andShortExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andShortExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_andExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_andExpressionAST::objectCompare (const GALGAS_andExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST::GALGAS_andExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST::GALGAS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST::class_func_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                 const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                 const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_andExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andExpressionAST::cPtr_andExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

void cPtr_andExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@andExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @andExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST ("andExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  const GALGAS_andExpressionAST * p = (const GALGAS_andExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_andExpressionAST_2D_weak::objectCompare (const GALGAS_andExpressionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak::GALGAS_andExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak & GALGAS_andExpressionAST_2D_weak::operator = (const GALGAS_andExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak::GALGAS_andExpressionAST_2D_weak (const GALGAS_andExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak GALGAS_andExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_andExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST_2D_weak::bang_andExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andExpressionAST) ;
      result = GALGAS_andExpressionAST ((cPtr_andExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST_2D_weak ("andExpressionAST-weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak GALGAS_andExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST_2D_weak result ;
  const GALGAS_andExpressionAST_2D_weak * p = (const GALGAS_andExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_andShortExpressionForGeneration_2D_weak::objectCompare (const GALGAS_andShortExpressionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration_2D_weak::GALGAS_andShortExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration_2D_weak & GALGAS_andShortExpressionForGeneration_2D_weak::operator = (const GALGAS_andShortExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration_2D_weak::GALGAS_andShortExpressionForGeneration_2D_weak (const GALGAS_andShortExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration_2D_weak GALGAS_andShortExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_andShortExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration GALGAS_andShortExpressionForGeneration_2D_weak::bang_andShortExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andShortExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andShortExpressionForGeneration) ;
      result = GALGAS_andShortExpressionForGeneration ((cPtr_andShortExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andShortExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2D_weak ("andShortExpressionForGeneration-weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration_2D_weak GALGAS_andShortExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionForGeneration_2D_weak result ;
  const GALGAS_andShortExpressionForGeneration_2D_weak * p = (const GALGAS_andShortExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andShortExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_selfAvailability_available::cEnumAssociatedValues_selfAvailability_available (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                                                                    const GALGAS_bool inAssociatedValue1,
                                                                                                    const GALGAS_bool inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_selfAvailability_available::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_selfAvailability_available::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_selfAvailability_available * ptr = dynamic_cast<const cEnumAssociatedValues_selfAvailability_available *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability::GALGAS_selfAvailability (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability GALGAS_selfAvailability::class_func_none (UNUSED_LOCATION_ARGS) {
  GALGAS_selfAvailability result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability GALGAS_selfAvailability::class_func_available (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                       const GALGAS_bool & inAssociatedValue1,
                                                                       const GALGAS_bool & inAssociatedValue2
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_selfAvailability result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_available ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_selfAvailability_available (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability::method_available (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                GALGAS_bool & outAssociatedValue1,
                                                GALGAS_bool & outAssociatedValue2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_available) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @selfAvailability available invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_selfAvailability_available * ptr = (const cEnumAssociatedValues_selfAvailability_available *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_selfAvailability::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_selfAvailability::optional_available (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                  GALGAS_bool & outAssociatedValue1,
                                                  GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_available ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_selfAvailability_available *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfAvailability [3] = {
  "(not built)",
  "none",
  "available"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_selfAvailability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_selfAvailability::getter_isAvailable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_available == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @selfAvailability: ") ;
  ioString.appendCString (gEnumNameArrayFor_selfAvailability [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfAvailability::objectCompare (const GALGAS_selfAvailability & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfAvailability generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability ("selfAvailability",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfAvailability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfAvailability::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfAvailability (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability GALGAS_selfAvailability::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfAvailability result ;
  const GALGAS_selfAvailability * p = (const GALGAS_selfAvailability *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfAvailability *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (cPtr_semanticExpressionAST * inObject,
                                                    const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                    GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GALGAS_unifiedTypeMapEntry constin_inType,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                    GALGAS_localVarManager & io_ioVariableMap,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    inObject->method_analyzeSemanticExpression (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inType, constin_inAnalysisContext, io_ioTypeMap, io_ioVariableMap, out_outExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assignmentInstructionAST_2D_weak::objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak & GALGAS_assignmentInstructionAST_2D_weak::operator = (const GALGAS_assignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (const GALGAS_assignmentInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST_2D_weak::bang_assignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionAST) ;
      result = GALGAS_assignmentInstructionAST ((cPtr_assignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ("assignmentInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  const GALGAS_assignmentInstructionAST_2D_weak * p = (const GALGAS_assignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::objectCompare (const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::operator = (const GALGAS_selfPropertyAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (const GALGAS_selfPropertyAssignmentInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfPropertyAssignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::bang_selfPropertyAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfPropertyAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPropertyAssignmentInstructionAST) ;
      result = GALGAS_selfPropertyAssignmentInstructionAST ((cPtr_selfPropertyAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfPropertyAssignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2D_weak ("selfPropertyAssignmentInstructionAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfPropertyAssignmentInstructionAST_2D_weak result ;
  const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak * p = (const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPropertyAssignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assignmentInstructionForGeneration_2D_weak::objectCompare (const GALGAS_assignmentInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration_2D_weak::GALGAS_assignmentInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration_2D_weak & GALGAS_assignmentInstructionForGeneration_2D_weak::operator = (const GALGAS_assignmentInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration_2D_weak::GALGAS_assignmentInstructionForGeneration_2D_weak (const GALGAS_assignmentInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration_2D_weak GALGAS_assignmentInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assignmentInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration GALGAS_assignmentInstructionForGeneration_2D_weak::bang_assignmentInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionForGeneration) ;
      result = GALGAS_assignmentInstructionForGeneration ((cPtr_assignmentInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2D_weak ("assignmentInstructionForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration_2D_weak GALGAS_assignmentInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionForGeneration_2D_weak result ;
  const GALGAS_assignmentInstructionForGeneration_2D_weak * p = (const GALGAS_assignmentInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@castInstructionBranchListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListAST : public cCollectionElement {
  public: GALGAS_castInstructionBranchListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                           const GALGAS_lstring & in_mConstantVarName,
                                                           const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                           const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                           const GALGAS_location & in_mEndOfInstructions
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                                                                  const GALGAS_lstring & in_mConstantVarName,
                                                                                                  const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                  const GALGAS_location & in_mEndOfInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mConstantVarName, in_mInstructionList, in_mTypeComparisonKind, in_mEndOfInstructions) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mConstantVarName, inElement.mProperty_mInstructionList, inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mEndOfInstructions) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListAST (mObject.mProperty_mTypeName, mObject.mProperty_mConstantVarName, mObject.mProperty_mInstructionList, mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mEndOfInstructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantVarName" ":") ;
  mObject.mProperty_mConstantVarName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeComparisonKind" ":") ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructions" ":") ;
  mObject.mProperty_mEndOfInstructions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_castInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListAST * operand = (cCollectionElement_castInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                   const GALGAS_lstring & inOperand1,
                                                                                                   const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                   const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                   const GALGAS_location & inOperand4
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_castInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mTypeName,
                                                                     const GALGAS_lstring & in_mConstantVarName,
                                                                     const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                     const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GALGAS_location & in_mEndOfInstructions
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListAST (in_mTypeName,
                                                                  in_mConstantVarName,
                                                                  in_mInstructionList,
                                                                  in_mTypeComparisonKind,
                                                                  in_mEndOfInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_semanticInstructionListAST & inOperand2,
                                                               const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                               const GALGAS_location & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_append (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_semanticInstructionListAST inOperand2,
                                                         const GALGAS_dynamicTypeComparisonKind inOperand3,
                                                         const GALGAS_location inOperand4,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_semanticInstructionListAST inOperand2,
                                                                const GALGAS_dynamicTypeComparisonKind inOperand3,
                                                                const GALGAS_location inOperand4,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_semanticInstructionListAST & outOperand2,
                                                                GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mTypeName ;
        outOperand1 = p->mObject.mProperty_mConstantVarName ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
        outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
        outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_semanticInstructionListAST & outOperand2,
                                                           GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                           GALGAS_location & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_semanticInstructionListAST & outOperand2,
                                                          GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                          GALGAS_location & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_semanticInstructionListAST & outOperand2,
                                                        GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                        GALGAS_location & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_semanticInstructionListAST & outOperand2,
                                                       GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                       GALGAS_location & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::add_operation (const GALGAS_castInstructionBranchListAST & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::plusAssign_operation (const GALGAS_castInstructionBranchListAST inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMConstantVarNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantVarName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mConstantVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mConstantVarName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMTypeComparisonKindAtIndex (GALGAS_dynamicTypeComparisonKind inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMEndOfInstructionsAtIndex (GALGAS_location inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_castInstructionBranchListAST::getter_mEndOfInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfInstructions ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_castInstructionBranchListAST::cEnumerator_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element cEnumerator_castInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mConstantVarName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mConstantVarName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_castInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListAST::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_castInstructionBranchListAST::current_mEndOfInstructions (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfInstructions ;
}




//--------------------------------------------------------------------------------------------------
//
//     @castInstructionBranchListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST ("castInstructionBranchListAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  const GALGAS_castInstructionBranchListAST * p = (const GALGAS_castInstructionBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structuredCastInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structuredCastInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCastExpression.printNonNullClassInstanceProperties ("mCastExpression") ;
    mProperty_mCastInstructionBranchList.printNonNullClassInstanceProperties ("mCastInstructionBranchList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfCastInstruction.printNonNullClassInstanceProperties ("mEndOfCastInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_structuredCastInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCastExpression.objectCompare (p->mProperty_mCastExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCastInstructionBranchList.objectCompare (p->mProperty_mCastInstructionBranchList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfCastInstruction.objectCompare (p->mProperty_mEndOfCastInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_structuredCastInstructionAST::objectCompare (const GALGAS_structuredCastInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (const cPtr_structuredCastInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_semanticExpressionAST & inAttribute_mCastExpression,
                                                                                         const GALGAS_castInstructionBranchListAST & inAttribute_mCastInstructionBranchList,
                                                                                         const GALGAS_semanticInstructionListAST & inAttribute_mElseInstructionList,
                                                                                         const GALGAS_location & inAttribute_mEndOfCastInstruction
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCastExpression.isValid () && inAttribute_mCastInstructionBranchList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfCastInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structuredCastInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCastExpression, inAttribute_mCastInstructionBranchList, inAttribute_mElseInstructionList, inAttribute_mEndOfCastInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_structuredCastInstructionAST::readProperty_mCastExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mCastExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_structuredCastInstructionAST::readProperty_mCastInstructionBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_castInstructionBranchListAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mCastInstructionBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_structuredCastInstructionAST::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_structuredCastInstructionAST::readProperty_mEndOfCastInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mEndOfCastInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structuredCastInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structuredCastInstructionAST::cPtr_structuredCastInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & in_mCastExpression,
                                                                      const GALGAS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                                                      const GALGAS_location & in_mEndOfCastInstruction
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCastExpression (in_mCastExpression),
mProperty_mCastInstructionBranchList (in_mCastInstructionBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfCastInstruction (in_mEndOfCastInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structuredCastInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

void cPtr_structuredCastInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@structuredCastInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfCastInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structuredCastInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structuredCastInstructionAST (mProperty_mInstructionLocation, mProperty_mCastExpression, mProperty_mCastInstructionBranchList, mProperty_mElseInstructionList, mProperty_mEndOfCastInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structuredCastInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST ("structuredCastInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  const GALGAS_structuredCastInstructionAST * p = (const GALGAS_structuredCastInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structuredCastInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structuredCastInstructionAST_2D_weak::objectCompare (const GALGAS_structuredCastInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak::GALGAS_structuredCastInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak & GALGAS_structuredCastInstructionAST_2D_weak::operator = (const GALGAS_structuredCastInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak::GALGAS_structuredCastInstructionAST_2D_weak (const GALGAS_structuredCastInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak GALGAS_structuredCastInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST_2D_weak::bang_structuredCastInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structuredCastInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structuredCastInstructionAST) ;
      result = GALGAS_structuredCastInstructionAST ((cPtr_structuredCastInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @structuredCastInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST_2D_weak ("structuredCastInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak GALGAS_structuredCastInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST_2D_weak result ;
  const GALGAS_structuredCastInstructionAST_2D_weak * p = (const GALGAS_structuredCastInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structuredCastInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@castInstructionBranchListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListForGeneration : public cCollectionElement {
  public: GALGAS_castInstructionBranchListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                     const GALGAS_string & in_mCastedVarCppName,
                                                                     const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                      const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                      const GALGAS_string & in_mCastedVarCppName,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeComparisonKind, in_mType, in_mCastedVarCppName, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mType, inElement.mProperty_mCastedVarCppName, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListForGeneration (mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mType, mObject.mProperty_mCastedVarCppName, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeComparisonKind" ":") ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCastedVarCppName" ":") ;
  mObject.mProperty_mCastedVarCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_castInstructionBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListForGeneration * operand = (cCollectionElement_castInstructionBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::class_func_listWithValue (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                       const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                                       const GALGAS_string & inOperand2,
                                                                                                                       const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                               const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                               const GALGAS_string & in_mCastedVarCppName,
                                                                               const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (in_mTypeComparisonKind,
                                                                            in_mType,
                                                                            in_mCastedVarCppName,
                                                                            in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::addAssign_operation (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                         const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                         const GALGAS_string & inOperand2,
                                                                         const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_append (const GALGAS_dynamicTypeComparisonKind inOperand0,
                                                                   const GALGAS_unifiedTypeMapEntry inOperand1,
                                                                   const GALGAS_string inOperand2,
                                                                   const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_insertAtIndex (const GALGAS_dynamicTypeComparisonKind inOperand0,
                                                                          const GALGAS_unifiedTypeMapEntry inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_removeAtIndex (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                          GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
        outOperand1 = p->mObject.mProperty_mType ;
        outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
        outOperand3 = p->mObject.mProperty_mInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_popFirst (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                     GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_popLast (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                    GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::method_first (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                  GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::method_last (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                 GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::add_operation (const GALGAS_castInstructionBranchListForGeneration & inOperand,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::plusAssign_operation (const GALGAS_castInstructionBranchListForGeneration inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMTypeComparisonKindAtIndex (GALGAS_dynamicTypeComparisonKind inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_castInstructionBranchListForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMCastedVarCppNameAtIndex (GALGAS_string inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCastedVarCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInstructionBranchListForGeneration::getter_mCastedVarCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mCastedVarCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListForGeneration inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_castInstructionBranchListForGeneration::cEnumerator_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element cEnumerator_castInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListForGeneration::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_castInstructionBranchListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_castInstructionBranchListForGeneration::current_mCastedVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mCastedVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cEnumerator_castInstructionBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @castInstructionBranchListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ("castInstructionBranchListForGeneration",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  const GALGAS_castInstructionBranchListForGeneration * p = (const GALGAS_castInstructionBranchListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structuredCastInstructionForGeneration_2D_weak::objectCompare (const GALGAS_structuredCastInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration_2D_weak::GALGAS_structuredCastInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration_2D_weak & GALGAS_structuredCastInstructionForGeneration_2D_weak::operator = (const GALGAS_structuredCastInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration_2D_weak::GALGAS_structuredCastInstructionForGeneration_2D_weak (const GALGAS_structuredCastInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration_2D_weak GALGAS_structuredCastInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_structuredCastInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration GALGAS_structuredCastInstructionForGeneration_2D_weak::bang_structuredCastInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structuredCastInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structuredCastInstructionForGeneration) ;
      result = GALGAS_structuredCastInstructionForGeneration ((cPtr_structuredCastInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @structuredCastInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration_2D_weak ("structuredCastInstructionForGeneration-weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration_2D_weak GALGAS_structuredCastInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionForGeneration_2D_weak result ;
  const GALGAS_structuredCastInstructionForGeneration_2D_weak * p = (const GALGAS_structuredCastInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structuredCastInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_plusEqualElementsInstructionAST_2D_weak::objectCompare (const GALGAS_plusEqualElementsInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak::GALGAS_plusEqualElementsInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak & GALGAS_plusEqualElementsInstructionAST_2D_weak::operator = (const GALGAS_plusEqualElementsInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak::GALGAS_plusEqualElementsInstructionAST_2D_weak (const GALGAS_plusEqualElementsInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak GALGAS_plusEqualElementsInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST_2D_weak::bang_plusEqualElementsInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_plusEqualElementsInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualElementsInstructionAST) ;
      result = GALGAS_plusEqualElementsInstructionAST ((cPtr_plusEqualElementsInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @plusEqualElementsInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2D_weak ("plusEqualElementsInstructionAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualElementsInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualElementsInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualElementsInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak GALGAS_plusEqualElementsInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST_2D_weak result ;
  const GALGAS_plusEqualElementsInstructionAST_2D_weak * p = (const GALGAS_plusEqualElementsInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_plusEqualElementsInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualElementsInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_plusEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_plusEqualExpressionInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak::GALGAS_plusEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak & GALGAS_plusEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_plusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak::GALGAS_plusEqualExpressionInstructionAST_2D_weak (const GALGAS_plusEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak GALGAS_plusEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST_2D_weak::bang_plusEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_plusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualExpressionInstructionAST) ;
      result = GALGAS_plusEqualExpressionInstructionAST ((cPtr_plusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @plusEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST_2D_weak ("plusEqualExpressionInstructionAST-weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak GALGAS_plusEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_plusEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_plusEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_plusEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_minusEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_minusEqualExpressionInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak::GALGAS_minusEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak & GALGAS_minusEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_minusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak::GALGAS_minusEqualExpressionInstructionAST_2D_weak (const GALGAS_minusEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak GALGAS_minusEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST_2D_weak::bang_minusEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_minusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_minusEqualExpressionInstructionAST) ;
      result = GALGAS_minusEqualExpressionInstructionAST ((cPtr_minusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @minusEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST_2D_weak ("minusEqualExpressionInstructionAST-weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_minusEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_minusEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_minusEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak GALGAS_minusEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_minusEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_minusEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_minusEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("minusEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_mulEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_mulEqualExpressionInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak::GALGAS_mulEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak & GALGAS_mulEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_mulEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak::GALGAS_mulEqualExpressionInstructionAST_2D_weak (const GALGAS_mulEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak GALGAS_mulEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST_2D_weak::bang_mulEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mulEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mulEqualExpressionInstructionAST) ;
      result = GALGAS_mulEqualExpressionInstructionAST ((cPtr_mulEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @mulEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST_2D_weak ("mulEqualExpressionInstructionAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mulEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mulEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mulEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak GALGAS_mulEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_mulEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_mulEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mulEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mulEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_divEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_divEqualExpressionInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak::GALGAS_divEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak & GALGAS_divEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_divEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak::GALGAS_divEqualExpressionInstructionAST_2D_weak (const GALGAS_divEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak GALGAS_divEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST_2D_weak::bang_divEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_divEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divEqualExpressionInstructionAST) ;
      result = GALGAS_divEqualExpressionInstructionAST ((cPtr_divEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @divEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST_2D_weak ("divEqualExpressionInstructionAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak GALGAS_divEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_divEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_divEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_divEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @plusEqualnstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_plusEqualnstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_plusEqualnstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_plusEqualnstructionForGeneration::objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (const cPtr_plusEqualnstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualnstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::class_func_new (const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                 const GALGAS_unifiedTypeMapEntry & inAttribute_mTargetType,
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

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_plusEqualnstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_plusEqualnstructionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_plusEqualnstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_plusEqualnstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_plusEqualnstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_plusEqualnstructionForGeneration::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @plusEqualnstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_plusEqualnstructionForGeneration::cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                                              const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                                              const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                              const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mTargetType (in_mTargetType),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpressionList (in_mExpressionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_plusEqualnstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

void cPtr_plusEqualnstructionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@plusEqualnstructionForGeneration:") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_plusEqualnstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_plusEqualnstructionForGeneration (mProperty_mReceiverCppName, mProperty_mTargetType, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mInstructionLocation, mProperty_mStructAttributeList, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @plusEqualnstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ("plusEqualnstructionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualnstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualnstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualnstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration result ;
  const GALGAS_plusEqualnstructionForGeneration * p = (const GALGAS_plusEqualnstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_plusEqualnstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_plusEqualnstructionForGeneration_2D_weak::objectCompare (const GALGAS_plusEqualnstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak::GALGAS_plusEqualnstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak & GALGAS_plusEqualnstructionForGeneration_2D_weak::operator = (const GALGAS_plusEqualnstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak::GALGAS_plusEqualnstructionForGeneration_2D_weak (const GALGAS_plusEqualnstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak GALGAS_plusEqualnstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration_2D_weak::bang_plusEqualnstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_plusEqualnstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualnstructionForGeneration) ;
      result = GALGAS_plusEqualnstructionForGeneration ((cPtr_plusEqualnstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @plusEqualnstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2D_weak ("plusEqualnstructionForGeneration-weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualnstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualnstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualnstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak GALGAS_plusEqualnstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration_2D_weak result ;
  const GALGAS_plusEqualnstructionForGeneration_2D_weak * p = (const GALGAS_plusEqualnstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_plusEqualnstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_opEqualInstructionForGeneration_2D_weak::objectCompare (const GALGAS_opEqualInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak::GALGAS_opEqualInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak & GALGAS_opEqualInstructionForGeneration_2D_weak::operator = (const GALGAS_opEqualInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak::GALGAS_opEqualInstructionForGeneration_2D_weak (const GALGAS_opEqualInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak GALGAS_opEqualInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration GALGAS_opEqualInstructionForGeneration_2D_weak::bang_opEqualInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_opEqualInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_opEqualInstructionForGeneration) ;
      result = GALGAS_opEqualInstructionForGeneration ((cPtr_opEqualInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @opEqualInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opEqualInstructionForGeneration_2D_weak ("opEqualInstructionForGeneration-weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_opEqualInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opEqualInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_opEqualInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_opEqualInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration_2D_weak GALGAS_opEqualInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration_2D_weak result ;
  const GALGAS_opEqualInstructionForGeneration_2D_weak * p = (const GALGAS_opEqualInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_opEqualInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opEqualInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dropInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDropList.printNonNullClassInstanceProperties ("mDropList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_dropInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_dropInstructionAST * p = (const cPtr_dropInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dropInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDropList.objectCompare (p->mProperty_mDropList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_dropInstructionAST::objectCompare (const GALGAS_dropInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST::GALGAS_dropInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST::GALGAS_dropInstructionAST (const cPtr_dropInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dropInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                     const GALGAS_lstringlist & inAttribute_mDropList
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDropList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dropInstructionAST (inAttribute_mInstructionLocation, inAttribute_mDropList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_dropInstructionAST::readProperty_mDropList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_dropInstructionAST * p = (cPtr_dropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionAST) ;
    return p->mProperty_mDropList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dropInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_dropInstructionAST::cPtr_dropInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstringlist & in_mDropList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mDropList (in_mDropList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

void cPtr_dropInstructionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@dropInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDropList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dropInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dropInstructionAST (mProperty_mInstructionLocation, mProperty_mDropList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dropInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST ("dropInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dropInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST result ;
  const GALGAS_dropInstructionAST * p = (const GALGAS_dropInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dropInstructionAST_2D_weak::objectCompare (const GALGAS_dropInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak::GALGAS_dropInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak & GALGAS_dropInstructionAST_2D_weak::operator = (const GALGAS_dropInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak::GALGAS_dropInstructionAST_2D_weak (const GALGAS_dropInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak GALGAS_dropInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_dropInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST GALGAS_dropInstructionAST_2D_weak::bang_dropInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dropInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dropInstructionAST) ;
      result = GALGAS_dropInstructionAST ((cPtr_dropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dropInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST_2D_weak ("dropInstructionAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dropInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dropInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dropInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak GALGAS_dropInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST_2D_weak result ;
  const GALGAS_dropInstructionAST_2D_weak * p = (const GALGAS_dropInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dropInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementAST_fixItReplace::cEnumAssociatedValues_fixitElementAST_fixItReplace (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                                                        const GALGAS_location inAssociatedValue1
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementAST_fixItReplace::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_fixitElementAST_fixItReplace::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItReplace * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItReplace *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                                                                const GALGAS_location inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                                                                  const GALGAS_location inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST::GALGAS_fixitElementAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  result.mEnum = kEnum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::class_func_fixItReplace (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                        const GALGAS_location & inAssociatedValue1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItReplace ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItReplace (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::class_func_fixItInsertAfter (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                            const GALGAS_location & inAssociatedValue1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItInsertAfter ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::class_func_fixItInsertBefore (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                             const GALGAS_location & inAssociatedValue1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItInsertBefore ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::method_fixItReplace (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                  GALGAS_location & outAssociatedValue1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItReplace) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::method_fixItInsertAfter (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                      GALGAS_location & outAssociatedValue1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertAfter) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::method_fixItInsertBefore (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertBefore) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItRemove () const {
  const bool ok = mEnum == kEnum_fixItRemove ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItReplace (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                    GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_fixItReplace ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItInsertAfter (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                        GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_fixItInsertAfter ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItInsertBefore (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                         GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_fixItInsertBefore ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementAST [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertAfter",
  "fixItInsertBefore"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_fixitElementAST::objectCompare (const GALGAS_fixitElementAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST ("fixitElementAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  const GALGAS_fixitElementAST * p = (const GALGAS_fixitElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@fixitListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_fixitListAST : public cCollectionElement {
  public: GALGAS_fixitListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_fixitListAST (const GALGAS_fixitElementAST & in_mElement
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fixitListAST (const GALGAS_fixitListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GALGAS_fixitElementAST & in_mElement
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GALGAS_fixitListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_fixitListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fixitListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_fixitListAST (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_fixitListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_fixitListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fixitListAST * operand = (cCollectionElement_fixitListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fixitListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST::GALGAS_fixitListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST::GALGAS_fixitListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fixitListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::class_func_listWithValue (const GALGAS_fixitElementAST & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fixitListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_fixitElementAST & in_mElement
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_fixitListAST (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::addAssign_operation (const GALGAS_fixitElementAST & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_append (const GALGAS_fixitElementAST inOperand0,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_insertAtIndex (const GALGAS_fixitElementAST inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_removeAtIndex (GALGAS_fixitElementAST & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
        outOperand0 = p->mObject.mProperty_mElement ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_popFirst (GALGAS_fixitElementAST & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_popLast (GALGAS_fixitElementAST & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::method_first (GALGAS_fixitElementAST & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::method_last (GALGAS_fixitElementAST & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::add_operation (const GALGAS_fixitListAST & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::plusAssign_operation (const GALGAS_fixitListAST inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_setMElementAtIndex (GALGAS_fixitElementAST inOperand,
                                                     GALGAS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitListAST::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  GALGAS_fixitElementAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_fixitListAST::cEnumerator_fixitListAST (const GALGAS_fixitListAST & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element cEnumerator_fixitListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST cEnumerator_fixitListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//
//     @fixitListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST ("fixitListAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST result ;
  const GALGAS_fixitListAST * p = (const GALGAS_fixitListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @errorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_errorInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocationExpression.printNonNullClassInstanceProperties ("mLocationExpression") ;
    mProperty_mMessageExpression.printNonNullClassInstanceProperties ("mMessageExpression") ;
    mProperty_mBuiltVariableList.printNonNullClassInstanceProperties ("mBuiltVariableList") ;
    mProperty_mFixitListAST.printNonNullClassInstanceProperties ("mFixitListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_errorInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_errorInstructionAST * p = (const cPtr_errorInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_errorInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocationExpression.objectCompare (p->mProperty_mLocationExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMessageExpression.objectCompare (p->mProperty_mMessageExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBuiltVariableList.objectCompare (p->mProperty_mBuiltVariableList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFixitListAST.objectCompare (p->mProperty_mFixitListAST) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_errorInstructionAST::objectCompare (const GALGAS_errorInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST::GALGAS_errorInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST::GALGAS_errorInstructionAST (const cPtr_errorInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST GALGAS_errorInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                       const GALGAS_semanticExpressionAST & inAttribute_mLocationExpression,
                                                                       const GALGAS_semanticExpressionAST & inAttribute_mMessageExpression,
                                                                       const GALGAS_lstringlist & inAttribute_mBuiltVariableList,
                                                                       const GALGAS_fixitListAST & inAttribute_mFixitListAST
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLocationExpression.isValid () && inAttribute_mMessageExpression.isValid () && inAttribute_mBuiltVariableList.isValid () && inAttribute_mFixitListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_errorInstructionAST (inAttribute_mInstructionLocation, inAttribute_mLocationExpression, inAttribute_mMessageExpression, inAttribute_mBuiltVariableList, inAttribute_mFixitListAST COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_errorInstructionAST::readProperty_mLocationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_errorInstructionAST::readProperty_mMessageExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_errorInstructionAST::readProperty_mBuiltVariableList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mBuiltVariableList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_errorInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_fixitListAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionAST::cPtr_errorInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                                    const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                                    const GALGAS_lstringlist & in_mBuiltVariableList,
                                                    const GALGAS_fixitListAST & in_mFixitListAST
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLocationExpression (in_mLocationExpression),
mProperty_mMessageExpression (in_mMessageExpression),
mProperty_mBuiltVariableList (in_mBuiltVariableList),
mProperty_mFixitListAST (in_mFixitListAST) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_errorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

void cPtr_errorInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@errorInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBuiltVariableList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_errorInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_errorInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mBuiltVariableList, mProperty_mFixitListAST COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @errorInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST ("errorInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST GALGAS_errorInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST result ;
  const GALGAS_errorInstructionAST * p = (const GALGAS_errorInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_errorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_errorInstructionAST_2D_weak::objectCompare (const GALGAS_errorInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak::GALGAS_errorInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak & GALGAS_errorInstructionAST_2D_weak::operator = (const GALGAS_errorInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak::GALGAS_errorInstructionAST_2D_weak (const GALGAS_errorInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak GALGAS_errorInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_errorInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST GALGAS_errorInstructionAST_2D_weak::bang_errorInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_errorInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionAST) ;
      result = GALGAS_errorInstructionAST ((cPtr_errorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @errorInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST_2D_weak ("errorInstructionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak GALGAS_errorInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST_2D_weak result ;
  const GALGAS_errorInstructionAST_2D_weak * p = (const GALGAS_errorInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_errorInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const GALGAS_fixitListAST inObject,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_fixitListAST temp_0 = inObject ;
  cEnumerator_fixitListAST enumerator_8055 (temp_0, EnumerationOrder::up) ;
  while (enumerator_8055.hasCurrentObject ()) {
    switch (enumerator_8055.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_8227 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_8055.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_8163_exp = extractPtr_8227->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8163_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 222)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_8344 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_8055.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_8280_exp = extractPtr_8344->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8280_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 224)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_8460 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_8055.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_8396_exp = extractPtr_8460->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8396_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 226)) ;
      }
      break ;
    }
    enumerator_8055.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration::GALGAS_fixitElementForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  result.mEnum = kEnum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::class_func_fixItReplace (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItReplace ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::class_func_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItInsertBefore ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::class_func_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItInsertAfter ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::method_fixItReplace (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItReplace) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::method_fixItInsertBefore (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertBefore) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::method_fixItInsertAfter (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertAfter) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItRemove () const {
  const bool ok = mEnum == kEnum_fixItRemove ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItReplace (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixItReplace ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItInsertBefore (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixItInsertBefore ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItInsertAfter (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixItInsertAfter ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementForGeneration [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertBefore",
  "fixItInsertAfter"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementForGeneration [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_fixitElementForGeneration::objectCompare (const GALGAS_fixitElementForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ("fixitElementForGeneration",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  const GALGAS_fixitElementForGeneration * p = (const GALGAS_fixitElementForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@fixitListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_fixitListForGeneration : public cCollectionElement {
  public: GALGAS_fixitListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_fixitListForGeneration (const GALGAS_fixitElementForGeneration & in_mElement
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fixitListForGeneration (const GALGAS_fixitListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GALGAS_fixitElementForGeneration & in_mElement
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GALGAS_fixitListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_fixitListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fixitListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_fixitListForGeneration (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_fixitListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_fixitListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fixitListForGeneration * operand = (cCollectionElement_fixitListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fixitListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration::GALGAS_fixitListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration::GALGAS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fixitListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::class_func_listWithValue (const GALGAS_fixitElementForGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fixitListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_fixitElementForGeneration & in_mElement
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_fixitListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::addAssign_operation (const GALGAS_fixitElementForGeneration & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::setter_append (const GALGAS_fixitElementForGeneration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::setter_insertAtIndex (const GALGAS_fixitElementForGeneration inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::setter_removeAtIndex (GALGAS_fixitElementForGeneration & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mElement ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::setter_popFirst (GALGAS_fixitElementForGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::setter_popLast (GALGAS_fixitElementForGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::method_first (GALGAS_fixitElementForGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::method_last (GALGAS_fixitElementForGeneration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::add_operation (const GALGAS_fixitListForGeneration & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::plusAssign_operation (const GALGAS_fixitListForGeneration inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::setter_setMElementAtIndex (GALGAS_fixitElementForGeneration inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitListForGeneration::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  GALGAS_fixitElementForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_fixitListForGeneration::cEnumerator_fixitListForGeneration (const GALGAS_fixitListForGeneration & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element cEnumerator_fixitListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration cEnumerator_fixitListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//
//     @fixitListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration ("fixitListForGeneration",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration result ;
  const GALGAS_fixitListForGeneration * p = (const GALGAS_fixitListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const GALGAS_fixitListForGeneration inObject,
                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                    GALGAS_string & outArgument_outFixItArrayCppName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFixItArrayCppName.drop () ; // Release 'out' argument
  outArgument_outFixItArrayCppName = GALGAS_string ("fixItArray").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-error.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 416)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 417)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("TC_Array <FixItDescription> ").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  const GALGAS_fixitListForGeneration temp_0 = inObject ;
  cEnumerator_fixitListForGeneration enumerator_16209 (temp_0, EnumerationOrder::up) ;
  while (enumerator_16209.hasCurrentObject ()) {
    switch (enumerator_16209.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementForGeneration::kNotBuilt:
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItRemove:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outFixItArrayCppName.add_operation (GALGAS_string (".appendObject (FixItDescription (kFixItRemove, \"\")) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 422)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * extractPtr_16753 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) (enumerator_16209.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_16437_exp = extractPtr_16753->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_16610 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16437_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16610, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 424)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GALGAS_string (", kFixItReplace, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (var_receiverCppVarName_16610, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 431)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * extractPtr_17143 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) (enumerator_16209.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_16822_exp = extractPtr_17143->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_16995 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16822_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16995, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 433)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GALGAS_string (", kFixItInsertBefore, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (var_receiverCppVarName_16995, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 440)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * extractPtr_17531 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) (enumerator_16209.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_17211_exp = extractPtr_17531->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_17384 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_17211_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17384, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 442)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GALGAS_string (", kFixItInsertAfter, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (var_receiverCppVarName_17384, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 449)) ;
      }
      break ;
    }
    enumerator_16209.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_errorInstructionForGeneration_2D_weak::objectCompare (const GALGAS_errorInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak::GALGAS_errorInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak & GALGAS_errorInstructionForGeneration_2D_weak::operator = (const GALGAS_errorInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak::GALGAS_errorInstructionForGeneration_2D_weak (const GALGAS_errorInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak GALGAS_errorInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration GALGAS_errorInstructionForGeneration_2D_weak::bang_errorInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_errorInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionForGeneration) ;
      result = GALGAS_errorInstructionForGeneration ((cPtr_errorInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @errorInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2D_weak ("errorInstructionForGeneration-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration_2D_weak GALGAS_errorInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration_2D_weak result ;
  const GALGAS_errorInstructionForGeneration_2D_weak * p = (const GALGAS_errorInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_errorInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@forInstructionEnumeratedObjectElementListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectElementListAST : public cCollectionElement {
  public: GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                           const GALGAS_bool & in_mDeclaredAsUnused,
                                                                           const GALGAS_lstring & in_mOptionalConstantName
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                                  const GALGAS_bool & in_mDeclaredAsUnused,
                                                                                                                                  const GALGAS_lstring & in_mOptionalConstantName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mDeclaredAsUnused, in_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionalTypeName, inElement.mProperty_mDeclaredAsUnused, inElement.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectElementListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectElementListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectElementListAST (mObject.mProperty_mOptionalTypeName, mObject.mProperty_mDeclaredAsUnused, mObject.mProperty_mOptionalConstantName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectElementListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionalTypeName" ":") ;
  mObject.mProperty_mOptionalTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaredAsUnused" ":") ;
  mObject.mProperty_mDeclaredAsUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionalConstantName" ":") ;
  mObject.mProperty_mOptionalConstantName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_forInstructionEnumeratedObjectElementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * operand = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                   const GALGAS_bool & inOperand1,
                                                                                                                                   const GALGAS_lstring & inOperand2
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mOptionalTypeName,
                                                                                     const GALGAS_bool & in_mDeclaredAsUnused,
                                                                                     const GALGAS_lstring & in_mOptionalConstantName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (in_mOptionalTypeName,
                                                                                  in_mDeclaredAsUnused,
                                                                                  in_mOptionalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_bool & inOperand1,
                                                                               const GALGAS_lstring & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_append (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_bool inOperand1,
                                                                         const GALGAS_lstring inOperand2,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_bool inOperand1,
                                                                                const GALGAS_lstring inOperand2,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_bool & outOperand1,
                                                                                GALGAS_lstring & outOperand2,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
        outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
        outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
        outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_bool & outOperand1,
                                                                           GALGAS_lstring & outOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_bool & outOperand1,
                                                                          GALGAS_lstring & outOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_bool & outOperand1,
                                                                        GALGAS_lstring & outOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::add_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_setMDeclaredAsUnusedAtIndex (GALGAS_bool inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaredAsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forInstructionEnumeratedObjectElementListAST::getter_mDeclaredAsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mDeclaredAsUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalConstantNameAtIndex (GALGAS_lstring inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalConstantName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalConstantName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_forInstructionEnumeratedObjectElementListAST::cEnumerator_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject,
                                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element cEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mDeclaredAsUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalConstantName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectElementListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ("forInstructionEnumeratedObjectElementListAST",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectElementListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  const GALGAS_forInstructionEnumeratedObjectElementListAST * p = (const GALGAS_forInstructionEnumeratedObjectElementListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractEnumeratedCollectionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_abstractEnumeratedCollectionAST::objectCompare (const GALGAS_abstractEnumeratedCollectionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST::GALGAS_abstractEnumeratedCollectionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST::GALGAS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractEnumeratedCollectionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractEnumeratedCollectionAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractEnumeratedCollectionAST::cPtr_abstractEnumeratedCollectionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractEnumeratedCollectionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ("abstractEnumeratedCollectionAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractEnumeratedCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractEnumeratedCollectionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractEnumeratedCollectionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST GALGAS_abstractEnumeratedCollectionAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractEnumeratedCollectionAST result ;
  const GALGAS_abstractEnumeratedCollectionAST * p = (const GALGAS_abstractEnumeratedCollectionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractEnumeratedCollectionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractEnumeratedCollectionAST_2D_weak::objectCompare (const GALGAS_abstractEnumeratedCollectionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST_2D_weak::GALGAS_abstractEnumeratedCollectionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST_2D_weak & GALGAS_abstractEnumeratedCollectionAST_2D_weak::operator = (const GALGAS_abstractEnumeratedCollectionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST_2D_weak::GALGAS_abstractEnumeratedCollectionAST_2D_weak (const GALGAS_abstractEnumeratedCollectionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST_2D_weak GALGAS_abstractEnumeratedCollectionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractEnumeratedCollectionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST GALGAS_abstractEnumeratedCollectionAST_2D_weak::bang_abstractEnumeratedCollectionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractEnumeratedCollectionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractEnumeratedCollectionAST) ;
      result = GALGAS_abstractEnumeratedCollectionAST ((cPtr_abstractEnumeratedCollectionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractEnumeratedCollectionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak ("abstractEnumeratedCollectionAST-weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractEnumeratedCollectionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractEnumeratedCollectionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractEnumeratedCollectionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST_2D_weak GALGAS_abstractEnumeratedCollectionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractEnumeratedCollectionAST_2D_weak result ;
  const GALGAS_abstractEnumeratedCollectionAST_2D_weak * p = (const GALGAS_abstractEnumeratedCollectionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractEnumeratedCollectionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (void) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::operator = (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::bang_enumeratedCollectionImplicitVarInExpAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
      result = GALGAS_enumeratedCollectionImplicitVarInExpAST ((cPtr_enumeratedCollectionImplicitVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumeratedCollectionImplicitVarInExpAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ("enumeratedCollectionImplicitVarInExpAST-weak",
                                                                                                       & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumeratedCollectionVarInExpAST_2D_weak::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak::GALGAS_enumeratedCollectionVarInExpAST_2D_weak (void) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak & GALGAS_enumeratedCollectionVarInExpAST_2D_weak::operator = (const GALGAS_enumeratedCollectionVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak::GALGAS_enumeratedCollectionVarInExpAST_2D_weak (const GALGAS_enumeratedCollectionVarInExpAST & inSource) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak GALGAS_enumeratedCollectionVarInExpAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST_2D_weak::bang_enumeratedCollectionVarInExpAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionVarInExpAST) ;
      result = GALGAS_enumeratedCollectionVarInExpAST ((cPtr_enumeratedCollectionVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumeratedCollectionVarInExpAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ("enumeratedCollectionVarInExpAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak GALGAS_enumeratedCollectionVarInExpAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST_2D_weak result ;
  const GALGAS_enumeratedCollectionVarInExpAST_2D_weak * p = (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionCstListInExpAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionCstListInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mElementList.printNonNullClassInstanceProperties ("mElementList") ;
    mProperty_mEndsWithEllipsis.printNonNullClassInstanceProperties ("mEndsWithEllipsis") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfEnumerationExpression.printNonNullClassInstanceProperties ("mEndOfEnumerationExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_enumeratedCollectionCstListInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementList.objectCompare (p->mProperty_mElementList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndsWithEllipsis.objectCompare (p->mProperty_mEndsWithEllipsis) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfEnumerationExpression.objectCompare (p->mProperty_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_enumeratedCollectionCstListInExpAST::objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST::GALGAS_enumeratedCollectionCstListInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST::GALGAS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionCstListInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST GALGAS_enumeratedCollectionCstListInExpAST::class_func_new (const GALGAS_forInstructionEnumeratedObjectElementListAST & inAttribute_mElementList,
                                                                                                       const GALGAS_bool & inAttribute_mEndsWithEllipsis,
                                                                                                       const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                       const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST result ;
  if (inAttribute_mElementList.isValid () && inAttribute_mEndsWithEllipsis.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionCstListInExpAST (inAttribute_mElementList, inAttribute_mEndsWithEllipsis, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_enumeratedCollectionCstListInExpAST::readProperty_mElementList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_forInstructionEnumeratedObjectElementListAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mElementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_enumeratedCollectionCstListInExpAST::readProperty_mEndsWithEllipsis (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndsWithEllipsis ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionCstListInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_enumeratedCollectionCstListInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionCstListInExpAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                    const GALGAS_bool & in_mEndsWithEllipsis,
                                                                                    const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                    const GALGAS_location & in_mEndOfEnumerationExpression
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mElementList (in_mElementList),
mProperty_mEndsWithEllipsis (in_mEndsWithEllipsis),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionCstListInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

void cPtr_enumeratedCollectionCstListInExpAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@enumeratedCollectionCstListInExpAST:") ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndsWithEllipsis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionCstListInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionCstListInExpAST (mProperty_mElementList, mProperty_mEndsWithEllipsis, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumeratedCollectionCstListInExpAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ("enumeratedCollectionCstListInExpAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionCstListInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionCstListInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionCstListInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST GALGAS_enumeratedCollectionCstListInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST result ;
  const GALGAS_enumeratedCollectionCstListInExpAST * p = (const GALGAS_enumeratedCollectionCstListInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumeratedCollectionCstListInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::GALGAS_enumeratedCollectionCstListInExpAST_2D_weak (void) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST_2D_weak & GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::operator = (const GALGAS_enumeratedCollectionCstListInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::GALGAS_enumeratedCollectionCstListInExpAST_2D_weak (const GALGAS_enumeratedCollectionCstListInExpAST & inSource) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST_2D_weak GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::bang_enumeratedCollectionCstListInExpAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumeratedCollectionCstListInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionCstListInExpAST) ;
      result = GALGAS_enumeratedCollectionCstListInExpAST ((cPtr_enumeratedCollectionCstListInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumeratedCollectionCstListInExpAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2D_weak ("enumeratedCollectionCstListInExpAST-weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionCstListInExpAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionCstListInExpAST_2D_weak GALGAS_enumeratedCollectionCstListInExpAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST_2D_weak result ;
  const GALGAS_enumeratedCollectionCstListInExpAST_2D_weak * p = (const GALGAS_enumeratedCollectionCstListInExpAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumeratedCollectionCstListInExpAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@forInstructionEnumeratedObjectListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectListAST : public cCollectionElement {
  public: GALGAS_forInstructionEnumeratedObjectListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_bool & in_mAscending,
                                                                    const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_bool & in_mAscending,
                                                                                                                    const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAscending, in_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAscending, inElement.mProperty_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListAST (mObject.mProperty_mAscending, mObject.mProperty_mEnumeratedCollection COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAscending" ":") ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratedCollection" ":") ;
  mObject.mProperty_mEnumeratedCollection.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_forInstructionEnumeratedObjectListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectListAST * operand = (cCollectionElement_forInstructionEnumeratedObjectListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST::GALGAS_forInstructionEnumeratedObjectListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST::GALGAS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::class_func_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                     const GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_bool & in_mAscending,
                                                                              const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (in_mAscending,
                                                                           in_mEnumeratedCollection COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                        const GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::setter_append (const GALGAS_bool inOperand0,
                                                                  const GALGAS_abstractEnumeratedCollectionAST inOperand1,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                         const GALGAS_abstractEnumeratedCollectionAST inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                         GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
        outOperand0 = p->mObject.mProperty_mAscending ;
        outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                                    GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::setter_popLast (GALGAS_bool & outOperand0,
                                                                   GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::method_first (GALGAS_bool & outOperand0,
                                                                 GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::method_last (GALGAS_bool & outOperand0,
                                                                GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::add_operation (const GALGAS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListAST inOperand,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::setter_setMAscendingAtIndex (GALGAS_bool inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscending = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forInstructionEnumeratedObjectListAST::getter_mAscendingAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST::setter_setMEnumeratedCollectionAtIndex (GALGAS_abstractEnumeratedCollectionAST inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedCollection = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST GALGAS_forInstructionEnumeratedObjectListAST::getter_mEnumeratedCollectionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GALGAS_abstractEnumeratedCollectionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mEnumeratedCollection ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_forInstructionEnumeratedObjectListAST::cEnumerator_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST & inEnumeratedObject,
                                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element cEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mAscending ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractEnumeratedCollectionAST cEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mEnumeratedCollection ;
}




//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ("forInstructionEnumeratedObjectListAST",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  const GALGAS_forInstructionEnumeratedObjectListAST * p = (const GALGAS_forInstructionEnumeratedObjectListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionAST_2D_weak::objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak & GALGAS_forInstructionAST_2D_weak::operator = (const GALGAS_forInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (const GALGAS_forInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST_2D_weak::bang_forInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GALGAS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ("forInstructionAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  const GALGAS_forInstructionAST_2D_weak * p = (const GALGAS_forInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_enterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constin_inAnalysisContext,
                                             GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             GALGAS_localVarManager & io_ioVariableMap,
                                             GALGAS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             GALGAS_string & out_outEnumeratorCppName,
                                             GALGAS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnumeratorCppName.drop () ;
  out_outEnumerationExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_analyzeEnumeration (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioVariableMap, io_ioLocalConstantListForDoBranch, out_outEnumeratorCppName, out_outEnumerationExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@forInstructionEnumeratedObjectListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectListForGeneration : public cCollectionElement {
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_string & in_mEnumerationOrder,
                                                                              const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                              const GALGAS_string & in_mEnumeratorCppName
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_string & in_mEnumerationOrder,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                        const GALGAS_string & in_mEnumeratorCppName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumerationOrder, in_mEnumeratedExpression, in_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumerationOrder, inElement.mProperty_mEnumeratedExpression, inElement.mProperty_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (mObject.mProperty_mEnumerationOrder, mObject.mProperty_mEnumeratedExpression, mObject.mProperty_mEnumeratorCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumerationOrder" ":") ;
  mObject.mProperty_mEnumerationOrder.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratedExpression" ":") ;
  mObject.mProperty_mEnumeratedExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratorCppName" ":") ;
  mObject.mProperty_mEnumeratorCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_forInstructionEnumeratedObjectListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * operand = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration::GALGAS_forInstructionEnumeratedObjectListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration::GALGAS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                         const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                         const GALGAS_string & inOperand2
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_string & in_mEnumerationOrder,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                        const GALGAS_string & in_mEnumeratorCppName
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (in_mEnumerationOrder,
                                                                                     in_mEnumeratedExpression,
                                                                                     in_mEnumeratorCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                  const GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_append (const GALGAS_string inOperand0,
                                                                            const GALGAS_semanticExpressionForGeneration inOperand1,
                                                                            const GALGAS_string inOperand2,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                   const GALGAS_semanticExpressionForGeneration inOperand1,
                                                                                   const GALGAS_string inOperand2,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                   GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                                   GALGAS_string & outOperand2,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
        outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
        outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                              GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                              GALGAS_string & outOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                             GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                           GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                          GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::add_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                                                              Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumerationOrderAtIndex (GALGAS_string inOperand,
                                                                                                 GALGAS_uint inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumerationOrder = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumerationOrderAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumerationOrder ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumeratedExpressionAtIndex (GALGAS_semanticExpressionForGeneration inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratedExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratedExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumeratorCppNameAtIndex (GALGAS_string inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratorCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratorCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratorCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_forInstructionEnumeratedObjectListForGeneration::cEnumerator_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject,
                                                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element cEnumerator_forInstructionEnumeratedObjectListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumerationOrder (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumerationOrder ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratedExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratorCppName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratorCppName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ("forInstructionEnumeratedObjectListForGeneration",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  const GALGAS_forInstructionEnumeratedObjectListForGeneration * p = (const GALGAS_forInstructionEnumeratedObjectListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionForGeneration_2D_weak::objectCompare (const GALGAS_forInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak::GALGAS_forInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak & GALGAS_forInstructionForGeneration_2D_weak::operator = (const GALGAS_forInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak::GALGAS_forInstructionForGeneration_2D_weak (const GALGAS_forInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak GALGAS_forInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration GALGAS_forInstructionForGeneration_2D_weak::bang_forInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionForGeneration) ;
      result = GALGAS_forInstructionForGeneration ((cPtr_forInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2D_weak ("forInstructionForGeneration-weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration_2D_weak GALGAS_forInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration_2D_weak result ;
  const GALGAS_forInstructionForGeneration_2D_weak * p = (const GALGAS_forInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak & GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::operator = (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
      result = GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak ("abstractGrammarInstructionSyntaxDirectedTranslationResult-weak",
                                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak result ;
  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak * p = (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return ComparisonResult::operandEqual ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::description (String & ioString,
                                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultNone]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultNone generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ("grammarInstructionSyntaxDirectedTranslationResultNone",
                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ((cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultNone-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultNone-weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::class_func_new (const GALGAS_location & inAttribute_mLocation
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GALGAS_location & in_mLocation
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mLocation (in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationDropResult:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationDropResult generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ("grammarInstructionSyntaxDirectedTranslationDropResult",
                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ((cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationDropResult-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak ("grammarInstructionSyntaxDirectedTranslationDropResult-weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultInVar-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInVar-weak",
                                                                                                                      & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak",
                                                                                                                              & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak",
                                                                                                                                & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInFileInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInFileInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak & GALGAS_grammarInFileInstructionAST_2D_weak::operator = (const GALGAS_grammarInFileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (const GALGAS_grammarInFileInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST_2D_weak::bang_grammarInFileInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInFileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInFileInstructionAST) ;
      result = GALGAS_grammarInFileInstructionAST ((cPtr_grammarInFileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInFileInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ("grammarInFileInstructionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  const GALGAS_grammarInFileInstructionAST_2D_weak * p = (const GALGAS_grammarInFileInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInFileInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInStringInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInStringInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak & GALGAS_grammarInStringInstructionAST_2D_weak::operator = (const GALGAS_grammarInStringInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (const GALGAS_grammarInStringInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST_2D_weak::bang_grammarInStringInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInStringInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInStringInstructionAST) ;
      result = GALGAS_grammarInStringInstructionAST ((cPtr_grammarInStringInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInStringInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ("grammarInStringInstructionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  const GALGAS_grammarInStringInstructionAST_2D_weak * p = (const GALGAS_grammarInStringInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInStringInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::operator = (const GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (const GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::bang_grammarInstructionWithSourceFileForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionWithSourceFileForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
      result = GALGAS_grammarInstructionWithSourceFileForGeneration ((cPtr_grammarInstructionWithSourceFileForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionWithSourceFileForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ("grammarInstructionWithSourceFileForGeneration-weak",
                                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak result ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak * p = (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::objectCompare (const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::operator = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::bang_grammarInstructionWithSourceExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
      result = GALGAS_grammarInstructionWithSourceExpressionForGeneration ((cPtr_grammarInstructionWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionWithSourceExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak ("grammarInstructionWithSourceExpressionForGeneration-weak",
                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak result ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak * p = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind::GALGAS_incDecKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecKind::class_func_increment (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_increment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecKind::class_func_decrement (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_decrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_incDecKind::optional_increment () const {
  const bool ok = mEnum == kEnum_increment ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_incDecKind::optional_decrement () const {
  const bool ok = mEnum == kEnum_decrement ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_incDecKind [3] = {
  "(not built)",
  "increment",
  "decrement"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecKind::getter_isIncrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_increment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecKind::getter_isDecrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_decrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_incDecKind::description (String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @incDecKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_incDecKind [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecKind::objectCompare (const GALGAS_incDecKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecKind ("incDecKind",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecKind::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  const GALGAS_incDecKind * p = (const GALGAS_incDecKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecInstructionAST_2D_weak::objectCompare (const GALGAS_incDecInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak & GALGAS_incDecInstructionAST_2D_weak::operator = (const GALGAS_incDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (const GALGAS_incDecInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST_2D_weak::bang_incDecInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionAST) ;
      result = GALGAS_incDecInstructionAST ((cPtr_incDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ("incDecInstructionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  const GALGAS_incDecInstructionAST_2D_weak * p = (const GALGAS_incDecInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecNoOVFInstructionAST_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak & GALGAS_incDecNoOVFInstructionAST_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (const GALGAS_incDecNoOVFInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST_2D_weak::bang_incDecNoOVFInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionAST) ;
      result = GALGAS_incDecNoOVFInstructionAST ((cPtr_incDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecNoOVFInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ("incDecNoOVFInstructionAST-weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionAST_2D_weak * p = (const GALGAS_incDecNoOVFInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_selfIncDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_selfIncDecInstructionAST * p = (const cPtr_selfIncDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_selfIncDecInstructionAST::objectCompare (const GALGAS_selfIncDecInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                 const GALGAS_incDecKind & inAttribute_mKind
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfIncDecInstructionAST (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_selfIncDecInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_incDecKind & in_mKind
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfIncDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

void cPtr_selfIncDecInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecInstructionAST (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ("selfIncDecInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST result ;
  const GALGAS_selfIncDecInstructionAST * p = (const GALGAS_selfIncDecInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfIncDecInstructionAST_2D_weak::objectCompare (const GALGAS_selfIncDecInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak::GALGAS_selfIncDecInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak & GALGAS_selfIncDecInstructionAST_2D_weak::operator = (const GALGAS_selfIncDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak::GALGAS_selfIncDecInstructionAST_2D_weak (const GALGAS_selfIncDecInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak GALGAS_selfIncDecInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST_2D_weak::bang_selfIncDecInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfIncDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecInstructionAST) ;
      result = GALGAS_selfIncDecInstructionAST ((cPtr_selfIncDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2D_weak ("selfIncDecInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak GALGAS_selfIncDecInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST_2D_weak result ;
  const GALGAS_selfIncDecInstructionAST_2D_weak * p = (const GALGAS_selfIncDecInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecNoOVFInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_selfIncDecNoOVFInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_selfIncDecNoOVFInstructionAST * p = (const cPtr_selfIncDecNoOVFInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_selfIncDecNoOVFInstructionAST::objectCompare (const GALGAS_selfIncDecNoOVFInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (const cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecNoOVFInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                           const GALGAS_incDecKind & inAttribute_mKind
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfIncDecNoOVFInstructionAST (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_selfIncDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_incDecKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfIncDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

void cPtr_selfIncDecNoOVFInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecNoOVFInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecNoOVFInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ("selfIncDecNoOVFInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  const GALGAS_selfIncDecNoOVFInstructionAST * p = (const GALGAS_selfIncDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::objectCompare (const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak & GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::operator = (const GALGAS_selfIncDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (const GALGAS_selfIncDecNoOVFInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::bang_selfIncDecNoOVFInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecNoOVFInstructionAST) ;
      result = GALGAS_selfIncDecNoOVFInstructionAST ((cPtr_selfIncDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecNoOVFInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2D_weak ("selfIncDecNoOVFInstructionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST_2D_weak result ;
  const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak * p = (const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_incDecInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_incDecInstructionForGeneration::objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                             const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                             const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                             const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                             const GALGAS_incDecKind & inAttribute_mKind
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_incDecInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mReceiverCppName,
                                                                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

void cPtr_incDecInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @incDecInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  const GALGAS_incDecInstructionForGeneration * p = (const GALGAS_incDecInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak & GALGAS_incDecInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (const GALGAS_incDecInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration_2D_weak::bang_incDecInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionForGeneration) ;
      result = GALGAS_incDecInstructionForGeneration ((cPtr_incDecInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ("incDecInstructionForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecInstructionForGeneration_2D_weak * p = (const GALGAS_incDecInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecNoOVFInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_incDecNoOVFInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_incDecNoOVFInstructionForGeneration::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                       const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                       const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                       const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                       const GALGAS_incDecKind & inAttribute_mKind
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mReceiverCppName,
                                                                                    const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

void cPtr_incDecNoOVFInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecNoOVFInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @incDecNoOVFInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  const GALGAS_incDecNoOVFInstructionForGeneration * p = (const GALGAS_incDecNoOVFInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::bang_incDecNoOVFInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionForGeneration) ;
      result = GALGAS_incDecNoOVFInstructionForGeneration ((cPtr_incDecNoOVFInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecNoOVFInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ("incDecNoOVFInstructionForGeneration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak * p = (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_ifExpressionKind_regularExp::cEnumAssociatedValues_ifExpressionKind_regularExp (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                                                      const GALGAS_location inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_ifExpressionKind_regularExp::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_ifExpressionKind_regularExp::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifExpressionKind_regularExp * ptr = dynamic_cast<const cEnumAssociatedValues_ifExpressionKind_regularExp *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_ifExpressionKind_letExp::cEnumAssociatedValues_ifExpressionKind_letExp (const GALGAS_lstring inAssociatedValue0,
                                                                                              const GALGAS_semanticExpressionAST inAssociatedValue1,
                                                                                              const GALGAS_location inAssociatedValue2,
                                                                                              const GALGAS_lstring inAssociatedValue3
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_ifExpressionKind_letExp::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_ifExpressionKind_letExp::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifExpressionKind_letExp * ptr = dynamic_cast<const cEnumAssociatedValues_ifExpressionKind_letExp *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_ifExpressionKind_optionalMethodCall::cEnumAssociatedValues_ifExpressionKind_optionalMethodCall (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                                                                      const GALGAS_lstring inAssociatedValue1,
                                                                                                                      const GALGAS_optionalMethodActualArgumentList inAssociatedValue2
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_ifExpressionKind_optionalMethodCall::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_ifExpressionKind_optionalMethodCall::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * ptr = dynamic_cast<const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind::GALGAS_ifExpressionKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::class_func_regularExp (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                        const GALGAS_location & inAssociatedValue1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_regularExp ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_ifExpressionKind_regularExp (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::class_func_letExp (const GALGAS_lstring & inAssociatedValue0,
                                                                    const GALGAS_semanticExpressionAST & inAssociatedValue1,
                                                                    const GALGAS_location & inAssociatedValue2,
                                                                    const GALGAS_lstring & inAssociatedValue3
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_letExp ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_ifExpressionKind_letExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::class_func_optionalMethodCall (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                const GALGAS_lstring & inAssociatedValue1,
                                                                                const GALGAS_optionalMethodActualArgumentList & inAssociatedValue2
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_optionalMethodCall ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_ifExpressionKind_optionalMethodCall (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::method_regularExp (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                 GALGAS_location & outAssociatedValue1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_regularExp) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind regularExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifExpressionKind_regularExp * ptr = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::method_letExp (GALGAS_lstring & outAssociatedValue0,
                                             GALGAS_semanticExpressionAST & outAssociatedValue1,
                                             GALGAS_location & outAssociatedValue2,
                                             GALGAS_lstring & outAssociatedValue3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_letExp) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind letExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifExpressionKind_letExp * ptr = (const cEnumAssociatedValues_ifExpressionKind_letExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::method_optionalMethodCall (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                         GALGAS_lstring & outAssociatedValue1,
                                                         GALGAS_optionalMethodActualArgumentList & outAssociatedValue2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_optionalMethodCall) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind optionalMethodCall invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * ptr = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifExpressionKind::optional_regularExp (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                   GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_regularExp ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifExpressionKind::optional_letExp (GALGAS_lstring & outAssociatedValue0,
                                               GALGAS_semanticExpressionAST & outAssociatedValue1,
                                               GALGAS_location & outAssociatedValue2,
                                               GALGAS_lstring & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_letExp ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_ifExpressionKind_letExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifExpressionKind::optional_optionalMethodCall (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                           GALGAS_lstring & outAssociatedValue1,
                                                           GALGAS_optionalMethodActualArgumentList & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_optionalMethodCall ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifExpressionKind [4] = {
  "(not built)",
  "regularExp",
  "letExp",
  "optionalMethodCall"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifExpressionKind::getter_isRegularExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regularExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifExpressionKind::getter_isLetExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_letExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifExpressionKind::getter_isOptionalMethodCall (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_optionalMethodCall == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifExpressionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifExpressionKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifExpressionKind::objectCompare (const GALGAS_ifExpressionKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind ("ifExpressionKind",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  const GALGAS_ifExpressionKind * p = (const GALGAS_ifExpressionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalMethodActualArgument_actualOutput::cEnumAssociatedValues_optionalMethodActualArgument_actualOutput (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                                                                                  const GALGAS_location inAssociatedValue1
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalMethodActualArgument_actualOutput::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalMethodActualArgument_actualOutput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * ptr = dynamic_cast<const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput::cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                      const GALGAS_lstring inAssociatedValue1
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * ptr = dynamic_cast<const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput::cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                      const GALGAS_lstring inAssociatedValue1
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * ptr = dynamic_cast<const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker::cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker (const GALGAS_bool inAssociatedValue0,
                                                                                                                                          const GALGAS_location inAssociatedValue1,
                                                                                                                                          const GALGAS_uint inAssociatedValue2
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker::description (String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * ptr = dynamic_cast<const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument::GALGAS_optionalMethodActualArgument (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument GALGAS_optionalMethodActualArgument::class_func_actualOutput (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgument result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_actualOutput ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalMethodActualArgument_actualOutput (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument GALGAS_optionalMethodActualArgument::class_func_actualLetInput (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgument result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_actualLetInput ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument GALGAS_optionalMethodActualArgument::class_func_actualVarInput (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgument result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_actualVarInput ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument GALGAS_optionalMethodActualArgument::class_func_actualInputJoker (const GALGAS_bool & inAssociatedValue0,
                                                                                                      const GALGAS_location & inAssociatedValue1,
                                                                                                      const GALGAS_uint & inAssociatedValue2
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgument result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_actualInputJoker ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgument::method_actualOutput (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                               GALGAS_location & outAssociatedValue1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_actualOutput) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @optionalMethodActualArgument actualOutput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgument::method_actualLetInput (GALGAS_lstring & outAssociatedValue0,
                                                                 GALGAS_lstring & outAssociatedValue1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_actualLetInput) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @optionalMethodActualArgument actualLetInput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgument::method_actualVarInput (GALGAS_lstring & outAssociatedValue0,
                                                                 GALGAS_lstring & outAssociatedValue1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_actualVarInput) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @optionalMethodActualArgument actualVarInput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgument::method_actualInputJoker (GALGAS_bool & outAssociatedValue0,
                                                                   GALGAS_location & outAssociatedValue1,
                                                                   GALGAS_uint & outAssociatedValue2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_actualInputJoker) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @optionalMethodActualArgument actualInputJoker invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgument::optional_actualOutput (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                                 GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_actualOutput ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgument::optional_actualLetInput (GALGAS_lstring & outAssociatedValue0,
                                                                   GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_actualLetInput ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgument::optional_actualVarInput (GALGAS_lstring & outAssociatedValue0,
                                                                   GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_actualVarInput ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgument::optional_actualInputJoker (GALGAS_bool & outAssociatedValue0,
                                                                     GALGAS_location & outAssociatedValue1,
                                                                     GALGAS_uint & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_actualInputJoker ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionalMethodActualArgument [5] = {
  "(not built)",
  "actualOutput",
  "actualLetInput",
  "actualVarInput",
  "actualInputJoker"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodActualArgument::getter_isActualOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_actualOutput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodActualArgument::getter_isActualLetInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_actualLetInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodActualArgument::getter_isActualVarInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_actualVarInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodActualArgument::getter_isActualInputJoker (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_actualInputJoker == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgument::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @optionalMethodActualArgument: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionalMethodActualArgument [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionalMethodActualArgument::objectCompare (const GALGAS_optionalMethodActualArgument & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionalMethodActualArgument generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgument ("optionalMethodActualArgument",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodActualArgument::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodActualArgument ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodActualArgument::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodActualArgument (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument GALGAS_optionalMethodActualArgument::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgument result ;
  const GALGAS_optionalMethodActualArgument * p = (const GALGAS_optionalMethodActualArgument *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalMethodActualArgument *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodActualArgument", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@optionalMethodActualArgumentList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_optionalMethodActualArgumentList : public cCollectionElement {
  public: GALGAS_optionalMethodActualArgumentList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_optionalMethodActualArgumentList (const GALGAS_lstring & in_mSelector,
                                                               const GALGAS_optionalMethodActualArgument & in_mActualArgument
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_optionalMethodActualArgumentList (const GALGAS_optionalMethodActualArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_optionalMethodActualArgumentList::cCollectionElement_optionalMethodActualArgumentList (const GALGAS_lstring & in_mSelector,
                                                                                                          const GALGAS_optionalMethodActualArgument & in_mActualArgument
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mActualArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_optionalMethodActualArgumentList::cCollectionElement_optionalMethodActualArgumentList (const GALGAS_optionalMethodActualArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mActualArgument) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_optionalMethodActualArgumentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_optionalMethodActualArgumentList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_optionalMethodActualArgumentList (mObject.mProperty_mSelector, mObject.mProperty_mActualArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_optionalMethodActualArgumentList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualArgument" ":") ;
  mObject.mProperty_mActualArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_optionalMethodActualArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_optionalMethodActualArgumentList * operand = (cCollectionElement_optionalMethodActualArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_optionalMethodActualArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList::GALGAS_optionalMethodActualArgumentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList::GALGAS_optionalMethodActualArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList GALGAS_optionalMethodActualArgumentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionalMethodActualArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList GALGAS_optionalMethodActualArgumentList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                           const GALGAS_optionalMethodActualArgument & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_optionalMethodActualArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_optionalMethodActualArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mSelector,
                                                                         const GALGAS_optionalMethodActualArgument & in_mActualArgument
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodActualArgumentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_optionalMethodActualArgumentList (in_mSelector,
                                                                      in_mActualArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_optionalMethodActualArgument & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_optionalMethodActualArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_optionalMethodActualArgument inOperand1,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_optionalMethodActualArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_optionalMethodActualArgument inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_optionalMethodActualArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_optionalMethodActualArgument & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
        outOperand0 = p->mObject.mProperty_mSelector ;
        outOperand1 = p->mObject.mProperty_mActualArgument ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_optionalMethodActualArgument & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_optionalMethodActualArgument & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_optionalMethodActualArgument & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_optionalMethodActualArgument & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList GALGAS_optionalMethodActualArgumentList::add_operation (const GALGAS_optionalMethodActualArgumentList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_optionalMethodActualArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList GALGAS_optionalMethodActualArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodActualArgumentList result = GALGAS_optionalMethodActualArgumentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList GALGAS_optionalMethodActualArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodActualArgumentList result = GALGAS_optionalMethodActualArgumentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList GALGAS_optionalMethodActualArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodActualArgumentList result = GALGAS_optionalMethodActualArgumentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::plusAssign_operation (const GALGAS_optionalMethodActualArgumentList inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionalMethodActualArgumentList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList::setter_setMActualArgumentAtIndex (GALGAS_optionalMethodActualArgument inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualArgument = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument GALGAS_optionalMethodActualArgumentList::getter_mActualArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodActualArgumentList * p = (cCollectionElement_optionalMethodActualArgumentList *) attributes.ptr () ;
  GALGAS_optionalMethodActualArgument result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
    result = p->mObject.mProperty_mActualArgument ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_optionalMethodActualArgumentList::cEnumerator_optionalMethodActualArgumentList (const GALGAS_optionalMethodActualArgumentList & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element cEnumerator_optionalMethodActualArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodActualArgumentList * p = (const cCollectionElement_optionalMethodActualArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_optionalMethodActualArgumentList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodActualArgumentList * p = (const cCollectionElement_optionalMethodActualArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument cEnumerator_optionalMethodActualArgumentList::current_mActualArgument (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodActualArgumentList * p = (const cCollectionElement_optionalMethodActualArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodActualArgumentList) ;
  return p->mObject.mProperty_mActualArgument ;
}




//--------------------------------------------------------------------------------------------------
//
//     @optionalMethodActualArgumentList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentList ("optionalMethodActualArgumentList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodActualArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodActualArgumentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodActualArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodActualArgumentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList GALGAS_optionalMethodActualArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList result ;
  const GALGAS_optionalMethodActualArgumentList * p = (const GALGAS_optionalMethodActualArgumentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalMethodActualArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodActualArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ifExpressionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ifExpressionList : public cCollectionElement {
  public: GALGAS_ifExpressionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ifExpressionList (const GALGAS_ifExpressionKind & in_mExpression
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ifExpressionList (const GALGAS_ifExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifExpressionList::cCollectionElement_ifExpressionList (const GALGAS_ifExpressionKind & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifExpressionList::cCollectionElement_ifExpressionList (const GALGAS_ifExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ifExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ifExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ifExpressionList (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ifExpressionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_ifExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ifExpressionList * operand = (cCollectionElement_ifExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ifExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList::GALGAS_ifExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList::GALGAS_ifExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ifExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::class_func_listWithValue (const GALGAS_ifExpressionKind & inOperand0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ifExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ifExpressionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_ifExpressionKind & in_mExpression
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ifExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifExpressionList (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::addAssign_operation (const GALGAS_ifExpressionKind & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_append (const GALGAS_ifExpressionKind inOperand0,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_insertAtIndex (const GALGAS_ifExpressionKind inOperand0,
                                                    const GALGAS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_removeAtIndex (GALGAS_ifExpressionKind & outOperand0,
                                                    const GALGAS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_popFirst (GALGAS_ifExpressionKind & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_popLast (GALGAS_ifExpressionKind & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::method_first (GALGAS_ifExpressionKind & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::method_last (GALGAS_ifExpressionKind & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::add_operation (const GALGAS_ifExpressionList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::plusAssign_operation (const GALGAS_ifExpressionList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_setMExpressionAtIndex (GALGAS_ifExpressionKind inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  GALGAS_ifExpressionKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ifExpressionList::cEnumerator_ifExpressionList (const GALGAS_ifExpressionList & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element cEnumerator_ifExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ifExpressionList * p = (const cCollectionElement_ifExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind cEnumerator_ifExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifExpressionList * p = (const cCollectionElement_ifExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList ("ifExpressionList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList result ;
  const GALGAS_ifExpressionList * p = (const GALGAS_ifExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_mEndOf_5F_then_5F_branch.printNonNullClassInstanceProperties ("mEndOf_then_branch") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
    mProperty_mEndOf_5F_if_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_if_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ifInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_then_5F_instructionList.objectCompare (p->mProperty_m_5F_then_5F_instructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_then_5F_branch.objectCompare (p->mProperty_mEndOf_5F_then_5F_branch) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_else_5F_instructionList.objectCompare (p->mProperty_m_5F_else_5F_instructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_if_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_if_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ifInstructionAST::objectCompare (const GALGAS_ifInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                 const GALGAS_ifExpressionList & inAttribute_mExpressions,
                                                                 const GALGAS_semanticInstructionListAST & inAttribute_m_5F_then_5F_instructionList,
                                                                 const GALGAS_location & inAttribute_mEndOf_5F_then_5F_branch,
                                                                 const GALGAS_semanticInstructionListAST & inAttribute_m_5F_else_5F_instructionList,
                                                                 const GALGAS_location & inAttribute_mEndOf_5F_if_5F_instruction
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpressions.isValid () && inAttribute_m_5F_then_5F_instructionList.isValid () && inAttribute_mEndOf_5F_then_5F_branch.isValid () && inAttribute_m_5F_else_5F_instructionList.isValid () && inAttribute_mEndOf_5F_if_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpressions, inAttribute_m_5F_then_5F_instructionList, inAttribute_mEndOf_5F_then_5F_branch, inAttribute_m_5F_else_5F_instructionList, inAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ifExpressionList () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_ifInstructionAST::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOf_5F_then_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_then_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_ifInstructionAST::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_ifExpressionList & in_mExpressions,
                                              const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                              const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                                              const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpressions (in_mExpressions),
mProperty_m_5F_then_5F_instructionList (in_m_5F_then_5F_instructionList),
mProperty_mEndOf_5F_then_5F_branch (in_mEndOf_5F_then_5F_branch),
mProperty_m_5F_else_5F_instructionList (in_m_5F_else_5F_instructionList),
mProperty_mEndOf_5F_if_5F_instruction (in_mEndOf_5F_if_5F_instruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_then_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_mEndOf_5F_then_5F_branch, mProperty_m_5F_else_5F_instructionList, mProperty_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  const GALGAS_ifInstructionAST * p = (const GALGAS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionAST_2D_weak::objectCompare (const GALGAS_ifInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak & GALGAS_ifInstructionAST_2D_weak::operator = (const GALGAS_ifInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (const GALGAS_ifInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST_2D_weak::bang_ifInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GALGAS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ("ifInstructionAST-weak",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  const GALGAS_ifInstructionAST_2D_weak * p = (const GALGAS_ifInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_ifTestForGeneration_regular::cEnumAssociatedValues_ifTestForGeneration_regular (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_ifTestForGeneration_regular::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_ifTestForGeneration_regular::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifTestForGeneration_regular * ptr = dynamic_cast<const cEnumAssociatedValues_ifTestForGeneration_regular *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_ifTestForGeneration_letExp::cEnumAssociatedValues_ifTestForGeneration_letExp (const GALGAS_string inAssociatedValue0,
                                                                                                    const GALGAS_semanticExpressionForGeneration inAssociatedValue1,
                                                                                                    const GALGAS_unifiedTypeMapEntry inAssociatedValue2,
                                                                                                    const GALGAS_unifiedTypeMapEntry inAssociatedValue3
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_ifTestForGeneration_letExp::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_ifTestForGeneration_letExp::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifTestForGeneration_letExp * ptr = dynamic_cast<const cEnumAssociatedValues_ifTestForGeneration_letExp *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall::cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall (const GALGAS_semanticExpressionForGeneration inAssociatedValue0,
                                                                                                                            const GALGAS_lstring inAssociatedValue1,
                                                                                                                            const GALGAS_optionalMethodActualArgumentListForGeneration inAssociatedValue2
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * ptr = dynamic_cast<const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration::GALGAS_ifTestForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::class_func_regular (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_regular ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_ifTestForGeneration_regular (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::class_func_letExp (const GALGAS_string & inAssociatedValue0,
                                                                          const GALGAS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                          const GALGAS_unifiedTypeMapEntry & inAssociatedValue2,
                                                                          const GALGAS_unifiedTypeMapEntry & inAssociatedValue3
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_letExp ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_ifTestForGeneration_letExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::class_func_optionalMethodCall (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0,
                                                                                      const GALGAS_lstring & inAssociatedValue1,
                                                                                      const GALGAS_optionalMethodActualArgumentListForGeneration & inAssociatedValue2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_optionalMethodCall ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::method_regular (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_regular) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration regular invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifTestForGeneration_regular * ptr = (const cEnumAssociatedValues_ifTestForGeneration_regular *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::method_letExp (GALGAS_string & outAssociatedValue0,
                                                GALGAS_semanticExpressionForGeneration & outAssociatedValue1,
                                                GALGAS_unifiedTypeMapEntry & outAssociatedValue2,
                                                GALGAS_unifiedTypeMapEntry & outAssociatedValue3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_letExp) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration letExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifTestForGeneration_letExp * ptr = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::method_optionalMethodCall (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                            GALGAS_lstring & outAssociatedValue1,
                                                            GALGAS_optionalMethodActualArgumentListForGeneration & outAssociatedValue2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_optionalMethodCall) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration optionalMethodCall invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * ptr = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifTestForGeneration::optional_regular (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_regular ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_ifTestForGeneration_regular *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifTestForGeneration::optional_letExp (GALGAS_string & outAssociatedValue0,
                                                  GALGAS_semanticExpressionForGeneration & outAssociatedValue1,
                                                  GALGAS_unifiedTypeMapEntry & outAssociatedValue2,
                                                  GALGAS_unifiedTypeMapEntry & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_letExp ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifTestForGeneration::optional_optionalMethodCall (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                              GALGAS_lstring & outAssociatedValue1,
                                                              GALGAS_optionalMethodActualArgumentListForGeneration & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_optionalMethodCall ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifTestForGeneration [4] = {
  "(not built)",
  "regular",
  "letExp",
  "optionalMethodCall"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifTestForGeneration::getter_isRegular (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regular == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifTestForGeneration::getter_isLetExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_letExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifTestForGeneration::getter_isOptionalMethodCall (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_optionalMethodCall == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifTestForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifTestForGeneration [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifTestForGeneration::objectCompare (const GALGAS_ifTestForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifTestForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration ("ifTestForGeneration",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifTestForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifTestForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifTestForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  const GALGAS_ifTestForGeneration * p = (const GALGAS_ifTestForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifTestForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput::cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput::description (String & ioString,
                                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * ptr = dynamic_cast<const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput::cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput (const GALGAS_string inAssociatedValue0,
                                                                                                                                                                const GALGAS_string inAssociatedValue1
                                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput::description (String & ioString,
                                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * ptr = dynamic_cast<const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput::cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput (const GALGAS_string inAssociatedValue0,
                                                                                                                                                                const GALGAS_string inAssociatedValue1
                                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput::description (String & ioString,
                                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * ptr = dynamic_cast<const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentForGeneration::GALGAS_optionalMethodActualArgumentForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentForGeneration GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualOutput (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_actualOutput ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentForGeneration GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualLetInput (const GALGAS_string & inAssociatedValue0,
                                                                                                                              const GALGAS_string & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentForGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_actualLetInput ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentForGeneration GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (const GALGAS_string & inAssociatedValue0,
                                                                                                                              const GALGAS_string & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentForGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_actualVarInput ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentForGeneration::method_actualOutput (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_actualOutput) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @optionalMethodActualArgumentForGeneration actualOutput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * ptr = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentForGeneration::method_actualLetInput (GALGAS_string & outAssociatedValue0,
                                                                              GALGAS_string & outAssociatedValue1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_actualLetInput) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @optionalMethodActualArgumentForGeneration actualLetInput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * ptr = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentForGeneration::method_actualVarInput (GALGAS_string & outAssociatedValue0,
                                                                              GALGAS_string & outAssociatedValue1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_actualVarInput) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @optionalMethodActualArgumentForGeneration actualVarInput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * ptr = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgumentForGeneration::optional_actualOutput (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_actualOutput ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgumentForGeneration::optional_actualLetInput (GALGAS_string & outAssociatedValue0,
                                                                                GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_actualLetInput ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgumentForGeneration::optional_actualVarInput (GALGAS_string & outAssociatedValue0,
                                                                                GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_actualVarInput ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionalMethodActualArgumentForGeneration [4] = {
  "(not built)",
  "actualOutput",
  "actualLetInput",
  "actualVarInput"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodActualArgumentForGeneration::getter_isActualOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_actualOutput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodActualArgumentForGeneration::getter_isActualLetInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_actualLetInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodActualArgumentForGeneration::getter_isActualVarInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_actualVarInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentForGeneration::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @optionalMethodActualArgumentForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionalMethodActualArgumentForGeneration [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionalMethodActualArgumentForGeneration::objectCompare (const GALGAS_optionalMethodActualArgumentForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionalMethodActualArgumentForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentForGeneration ("optionalMethodActualArgumentForGeneration",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodActualArgumentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodActualArgumentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodActualArgumentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodActualArgumentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentForGeneration GALGAS_optionalMethodActualArgumentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentForGeneration result ;
  const GALGAS_optionalMethodActualArgumentForGeneration * p = (const GALGAS_optionalMethodActualArgumentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalMethodActualArgumentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodActualArgumentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

