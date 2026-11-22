#include "all-declarations-11.h"
//--------------------------------------------------------------------------------------------------
// @templateMultiplyOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateMultiplyOperationAST::objectCompare (const GGS_templateMultiplyOperationAST & inOperand) const {
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

GGS_templateMultiplyOperationAST::GGS_templateMultiplyOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateMultiplyOperationAST GGS_templateMultiplyOperationAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateMultiplyOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateMultiplyOperationAST (inCompiler COMMA_THERE)) ;
  object->templateMultiplyOperationAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateMultiplyOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::
templateMultiplyOperationAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                               const GGS_templateExpressionAST & in_mLeftExpression,
                                               const GGS_templateExpressionAST & in_mRightExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateMultiplyOperationAST::GGS_templateMultiplyOperationAST (const cPtr_templateMultiplyOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateMultiplyOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateMultiplyOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateMultiplyOperationAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateMultiplyOperationAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateMultiplyOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateMultiplyOperationAST::cPtr_templateMultiplyOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateMultiplyOperationAST::cPtr_templateMultiplyOperationAST (const GGS_location & in_mOperatorLocation,
                                                                      const GGS_templateExpressionAST & in_mLeftExpression,
                                                                      const GGS_templateExpressionAST & in_mRightExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateMultiplyOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;
}

void cPtr_templateMultiplyOperationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@templateMultiplyOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateMultiplyOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateMultiplyOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateMultiplyOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateMultiplyOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST ("templateMultiplyOperationAST",
                                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateMultiplyOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateMultiplyOperationAST_2E_weak::objectCompare (const GGS_templateMultiplyOperationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateMultiplyOperationAST_2E_weak::GGS_templateMultiplyOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateMultiplyOperationAST_2E_weak & GGS_templateMultiplyOperationAST_2E_weak::operator = (const GGS_templateMultiplyOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateMultiplyOperationAST_2E_weak::GGS_templateMultiplyOperationAST_2E_weak (const GGS_templateMultiplyOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateMultiplyOperationAST_2E_weak GGS_templateMultiplyOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateMultiplyOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateMultiplyOperationAST GGS_templateMultiplyOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateMultiplyOperationAST result ;
  if (isValid ()) {
    const cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateMultiplyOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateMultiplyOperationAST GGS_templateMultiplyOperationAST_2E_weak::bang_templateMultiplyOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateMultiplyOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateMultiplyOperationAST) ;
      result = GGS_templateMultiplyOperationAST ((cPtr_templateMultiplyOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateMultiplyOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST_2E_weak ("templateMultiplyOperationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateMultiplyOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateDivideOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateDivideOperationAST::objectCompare (const GGS_templateDivideOperationAST & inOperand) const {
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

GGS_templateDivideOperationAST::GGS_templateDivideOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateDivideOperationAST GGS_templateDivideOperationAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateDivideOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateDivideOperationAST (inCompiler COMMA_THERE)) ;
  object->templateDivideOperationAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateDivideOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::
templateDivideOperationAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_templateExpressionAST & in_mLeftExpression,
                                             const GGS_templateExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDivideOperationAST::GGS_templateDivideOperationAST (const cPtr_templateDivideOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateDivideOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateDivideOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateDivideOperationAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateDivideOperationAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateDivideOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateDivideOperationAST::cPtr_templateDivideOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateDivideOperationAST::cPtr_templateDivideOperationAST (const GGS_location & in_mOperatorLocation,
                                                                  const GGS_templateExpressionAST & in_mLeftExpression,
                                                                  const GGS_templateExpressionAST & in_mRightExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateDivideOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST ;
}

void cPtr_templateDivideOperationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateDivideOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateDivideOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateDivideOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateDivideOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateDivideOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDivideOperationAST ("templateDivideOperationAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDivideOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateDivideOperationAST_2E_weak::objectCompare (const GGS_templateDivideOperationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateDivideOperationAST_2E_weak::GGS_templateDivideOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDivideOperationAST_2E_weak & GGS_templateDivideOperationAST_2E_weak::operator = (const GGS_templateDivideOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDivideOperationAST_2E_weak::GGS_templateDivideOperationAST_2E_weak (const GGS_templateDivideOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateDivideOperationAST_2E_weak GGS_templateDivideOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateDivideOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDivideOperationAST GGS_templateDivideOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateDivideOperationAST result ;
  if (isValid ()) {
    const cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateDivideOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDivideOperationAST GGS_templateDivideOperationAST_2E_weak::bang_templateDivideOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateDivideOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateDivideOperationAST) ;
      result = GGS_templateDivideOperationAST ((cPtr_templateDivideOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateDivideOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDivideOperationAST_2E_weak ("templateDivideOperationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDivideOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateModuloOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateModuloOperationAST::objectCompare (const GGS_templateModuloOperationAST & inOperand) const {
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

GGS_templateModuloOperationAST::GGS_templateModuloOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateModuloOperationAST GGS_templateModuloOperationAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateModuloOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateModuloOperationAST (inCompiler COMMA_THERE)) ;
  object->templateModuloOperationAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateModuloOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::
templateModuloOperationAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_templateExpressionAST & in_mLeftExpression,
                                             const GGS_templateExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateModuloOperationAST::GGS_templateModuloOperationAST (const cPtr_templateModuloOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateModuloOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateModuloOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateModuloOperationAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateModuloOperationAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateModuloOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateModuloOperationAST::cPtr_templateModuloOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateModuloOperationAST::cPtr_templateModuloOperationAST (const GGS_location & in_mOperatorLocation,
                                                                  const GGS_templateExpressionAST & in_mLeftExpression,
                                                                  const GGS_templateExpressionAST & in_mRightExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateModuloOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST ;
}

void cPtr_templateModuloOperationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateModuloOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateModuloOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateModuloOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateModuloOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateModuloOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateModuloOperationAST ("templateModuloOperationAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateModuloOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateModuloOperationAST_2E_weak::objectCompare (const GGS_templateModuloOperationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateModuloOperationAST_2E_weak::GGS_templateModuloOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateModuloOperationAST_2E_weak & GGS_templateModuloOperationAST_2E_weak::operator = (const GGS_templateModuloOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateModuloOperationAST_2E_weak::GGS_templateModuloOperationAST_2E_weak (const GGS_templateModuloOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateModuloOperationAST_2E_weak GGS_templateModuloOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateModuloOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateModuloOperationAST GGS_templateModuloOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateModuloOperationAST result ;
  if (isValid ()) {
    const cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateModuloOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateModuloOperationAST GGS_templateModuloOperationAST_2E_weak::bang_templateModuloOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateModuloOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateModuloOperationAST) ;
      result = GGS_templateModuloOperationAST ((cPtr_templateModuloOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateModuloOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateModuloOperationAST_2E_weak ("templateModuloOperationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateModuloOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateUnaryMinusOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateUnaryMinusOperationAST::objectCompare (const GGS_templateUnaryMinusOperationAST & inOperand) const {
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

GGS_templateUnaryMinusOperationAST::GGS_templateUnaryMinusOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateUnaryMinusOperationAST GGS_templateUnaryMinusOperationAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_templateExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateUnaryMinusOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateUnaryMinusOperationAST (inCompiler COMMA_THERE)) ;
  object->templateUnaryMinusOperationAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_templateUnaryMinusOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::
templateUnaryMinusOperationAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_templateExpressionAST & in_mExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateUnaryMinusOperationAST::GGS_templateUnaryMinusOperationAST (const cPtr_templateUnaryMinusOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateUnaryMinusOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateUnaryMinusOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateUnaryMinusOperationAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateUnaryMinusOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateUnaryMinusOperationAST::cPtr_templateUnaryMinusOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateUnaryMinusOperationAST::cPtr_templateUnaryMinusOperationAST (const GGS_location & in_mOperatorLocation,
                                                                          const GGS_templateExpressionAST & in_mExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateUnaryMinusOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;
}

void cPtr_templateUnaryMinusOperationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@templateUnaryMinusOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateUnaryMinusOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateUnaryMinusOperationAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateUnaryMinusOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateUnaryMinusOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ("templateUnaryMinusOperationAST",
                                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateUnaryMinusOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateUnaryMinusOperationAST_2E_weak::objectCompare (const GGS_templateUnaryMinusOperationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateUnaryMinusOperationAST_2E_weak::GGS_templateUnaryMinusOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateUnaryMinusOperationAST_2E_weak & GGS_templateUnaryMinusOperationAST_2E_weak::operator = (const GGS_templateUnaryMinusOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateUnaryMinusOperationAST_2E_weak::GGS_templateUnaryMinusOperationAST_2E_weak (const GGS_templateUnaryMinusOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateUnaryMinusOperationAST_2E_weak GGS_templateUnaryMinusOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateUnaryMinusOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateUnaryMinusOperationAST GGS_templateUnaryMinusOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateUnaryMinusOperationAST result ;
  if (isValid ()) {
    const cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateUnaryMinusOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateUnaryMinusOperationAST GGS_templateUnaryMinusOperationAST_2E_weak::bang_templateUnaryMinusOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateUnaryMinusOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateUnaryMinusOperationAST) ;
      result = GGS_templateUnaryMinusOperationAST ((cPtr_templateUnaryMinusOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateUnaryMinusOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST_2E_weak ("templateUnaryMinusOperationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateUnaryMinusOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateEqualTestAST::objectCompare (const GGS_templateEqualTestAST & inOperand) const {
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

GGS_templateEqualTestAST::GGS_templateEqualTestAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateEqualTestAST GGS_templateEqualTestAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateEqualTestAST * object = nullptr ;
  macroMyNew (object, cPtr_templateEqualTestAST (inCompiler COMMA_THERE)) ;
  object->templateEqualTestAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateEqualTestAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::
templateEqualTestAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                       const GGS_templateExpressionAST & in_mLeftExpression,
                                       const GGS_templateExpressionAST & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateEqualTestAST::GGS_templateEqualTestAST (const cPtr_templateEqualTestAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateEqualTestAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateEqualTestAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateEqualTestAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateEqualTestAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateEqualTestAST::cPtr_templateEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateEqualTestAST::cPtr_templateEqualTestAST (const GGS_location & in_mOperatorLocation,
                                                      const GGS_templateExpressionAST & in_mLeftExpression,
                                                      const GGS_templateExpressionAST & in_mRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST ;
}

void cPtr_templateEqualTestAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@templateEqualTestAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateEqualTestAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateEqualTestAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateEqualTestAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateEqualTestAST ("templateEqualTestAST",
                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateEqualTestAST_2E_weak::objectCompare (const GGS_templateEqualTestAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateEqualTestAST_2E_weak::GGS_templateEqualTestAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateEqualTestAST_2E_weak & GGS_templateEqualTestAST_2E_weak::operator = (const GGS_templateEqualTestAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateEqualTestAST_2E_weak::GGS_templateEqualTestAST_2E_weak (const GGS_templateEqualTestAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateEqualTestAST_2E_weak GGS_templateEqualTestAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateEqualTestAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateEqualTestAST GGS_templateEqualTestAST_2E_weak::unwrappedValue (void) const {
  GGS_templateEqualTestAST result ;
  if (isValid ()) {
    const cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateEqualTestAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateEqualTestAST GGS_templateEqualTestAST_2E_weak::bang_templateEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateEqualTestAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateEqualTestAST) ;
      result = GGS_templateEqualTestAST ((cPtr_templateEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateEqualTestAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateEqualTestAST_2E_weak ("templateEqualTestAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateEqualTestAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateNonEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateNonEqualTestAST::objectCompare (const GGS_templateNonEqualTestAST & inOperand) const {
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

GGS_templateNonEqualTestAST::GGS_templateNonEqualTestAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateNonEqualTestAST GGS_templateNonEqualTestAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateNonEqualTestAST * object = nullptr ;
  macroMyNew (object, cPtr_templateNonEqualTestAST (inCompiler COMMA_THERE)) ;
  object->templateNonEqualTestAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateNonEqualTestAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::
templateNonEqualTestAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression,
                                          Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNonEqualTestAST::GGS_templateNonEqualTestAST (const cPtr_templateNonEqualTestAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateNonEqualTestAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateNonEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateNonEqualTestAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateNonEqualTestAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateNonEqualTestAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateNonEqualTestAST::cPtr_templateNonEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateNonEqualTestAST::cPtr_templateNonEqualTestAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_templateExpressionAST & in_mLeftExpression,
                                                            const GGS_templateExpressionAST & in_mRightExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateNonEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST ;
}

void cPtr_templateNonEqualTestAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateNonEqualTestAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateNonEqualTestAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateNonEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateNonEqualTestAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateNonEqualTestAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST ("templateNonEqualTestAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateNonEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateNonEqualTestAST_2E_weak::objectCompare (const GGS_templateNonEqualTestAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateNonEqualTestAST_2E_weak::GGS_templateNonEqualTestAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateNonEqualTestAST_2E_weak & GGS_templateNonEqualTestAST_2E_weak::operator = (const GGS_templateNonEqualTestAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNonEqualTestAST_2E_weak::GGS_templateNonEqualTestAST_2E_weak (const GGS_templateNonEqualTestAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateNonEqualTestAST_2E_weak GGS_templateNonEqualTestAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateNonEqualTestAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNonEqualTestAST GGS_templateNonEqualTestAST_2E_weak::unwrappedValue (void) const {
  GGS_templateNonEqualTestAST result ;
  if (isValid ()) {
    const cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateNonEqualTestAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNonEqualTestAST GGS_templateNonEqualTestAST_2E_weak::bang_templateNonEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateNonEqualTestAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateNonEqualTestAST) ;
      result = GGS_templateNonEqualTestAST ((cPtr_templateNonEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateNonEqualTestAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST_2E_weak ("templateNonEqualTestAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateNonEqualTestAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateStrictInfTestAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateStrictInfTestAST::objectCompare (const GGS_templateStrictInfTestAST & inOperand) const {
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

GGS_templateStrictInfTestAST::GGS_templateStrictInfTestAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateStrictInfTestAST GGS_templateStrictInfTestAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateStrictInfTestAST * object = nullptr ;
  macroMyNew (object, cPtr_templateStrictInfTestAST (inCompiler COMMA_THERE)) ;
  object->templateStrictInfTestAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateStrictInfTestAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::
templateStrictInfTestAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictInfTestAST::GGS_templateStrictInfTestAST (const cPtr_templateStrictInfTestAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateStrictInfTestAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateStrictInfTestAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateStrictInfTestAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateStrictInfTestAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateStrictInfTestAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateStrictInfTestAST::cPtr_templateStrictInfTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateStrictInfTestAST::cPtr_templateStrictInfTestAST (const GGS_location & in_mOperatorLocation,
                                                              const GGS_templateExpressionAST & in_mLeftExpression,
                                                              const GGS_templateExpressionAST & in_mRightExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateStrictInfTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST ;
}

void cPtr_templateStrictInfTestAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateStrictInfTestAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateStrictInfTestAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateStrictInfTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateStrictInfTestAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateStrictInfTestAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST ("templateStrictInfTestAST",
                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateStrictInfTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateStrictInfTestAST_2E_weak::objectCompare (const GGS_templateStrictInfTestAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateStrictInfTestAST_2E_weak::GGS_templateStrictInfTestAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictInfTestAST_2E_weak & GGS_templateStrictInfTestAST_2E_weak::operator = (const GGS_templateStrictInfTestAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictInfTestAST_2E_weak::GGS_templateStrictInfTestAST_2E_weak (const GGS_templateStrictInfTestAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateStrictInfTestAST_2E_weak GGS_templateStrictInfTestAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateStrictInfTestAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictInfTestAST GGS_templateStrictInfTestAST_2E_weak::unwrappedValue (void) const {
  GGS_templateStrictInfTestAST result ;
  if (isValid ()) {
    const cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateStrictInfTestAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictInfTestAST GGS_templateStrictInfTestAST_2E_weak::bang_templateStrictInfTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateStrictInfTestAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateStrictInfTestAST) ;
      result = GGS_templateStrictInfTestAST ((cPtr_templateStrictInfTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateStrictInfTestAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST_2E_weak ("templateStrictInfTestAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateStrictInfTestAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInfOrEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInfOrEqualTestAST::objectCompare (const GGS_templateInfOrEqualTestAST & inOperand) const {
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

GGS_templateInfOrEqualTestAST::GGS_templateInfOrEqualTestAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInfOrEqualTestAST GGS_templateInfOrEqualTestAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateInfOrEqualTestAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInfOrEqualTestAST (inCompiler COMMA_THERE)) ;
  object->templateInfOrEqualTestAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateInfOrEqualTestAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::
templateInfOrEqualTestAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                            const GGS_templateExpressionAST & in_mLeftExpression,
                                            const GGS_templateExpressionAST & in_mRightExpression,
                                            Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInfOrEqualTestAST::GGS_templateInfOrEqualTestAST (const cPtr_templateInfOrEqualTestAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInfOrEqualTestAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateInfOrEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInfOrEqualTestAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInfOrEqualTestAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInfOrEqualTestAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInfOrEqualTestAST::cPtr_templateInfOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInfOrEqualTestAST::cPtr_templateInfOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                                                const GGS_templateExpressionAST & in_mLeftExpression,
                                                                const GGS_templateExpressionAST & in_mRightExpression,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInfOrEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;
}

void cPtr_templateInfOrEqualTestAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInfOrEqualTestAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInfOrEqualTestAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInfOrEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInfOrEqualTestAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInfOrEqualTestAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ("templateInfOrEqualTestAST",
                                                                              & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInfOrEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInfOrEqualTestAST_2E_weak::objectCompare (const GGS_templateInfOrEqualTestAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInfOrEqualTestAST_2E_weak::GGS_templateInfOrEqualTestAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInfOrEqualTestAST_2E_weak & GGS_templateInfOrEqualTestAST_2E_weak::operator = (const GGS_templateInfOrEqualTestAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInfOrEqualTestAST_2E_weak::GGS_templateInfOrEqualTestAST_2E_weak (const GGS_templateInfOrEqualTestAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInfOrEqualTestAST_2E_weak GGS_templateInfOrEqualTestAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInfOrEqualTestAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInfOrEqualTestAST GGS_templateInfOrEqualTestAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInfOrEqualTestAST result ;
  if (isValid ()) {
    const cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInfOrEqualTestAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInfOrEqualTestAST GGS_templateInfOrEqualTestAST_2E_weak::bang_templateInfOrEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInfOrEqualTestAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInfOrEqualTestAST) ;
      result = GGS_templateInfOrEqualTestAST ((cPtr_templateInfOrEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInfOrEqualTestAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST_2E_weak ("templateInfOrEqualTestAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInfOrEqualTestAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateStrictSupTestAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateStrictSupTestAST::objectCompare (const GGS_templateStrictSupTestAST & inOperand) const {
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

GGS_templateStrictSupTestAST::GGS_templateStrictSupTestAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateStrictSupTestAST GGS_templateStrictSupTestAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateStrictSupTestAST * object = nullptr ;
  macroMyNew (object, cPtr_templateStrictSupTestAST (inCompiler COMMA_THERE)) ;
  object->templateStrictSupTestAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateStrictSupTestAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::
templateStrictSupTestAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictSupTestAST::GGS_templateStrictSupTestAST (const cPtr_templateStrictSupTestAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateStrictSupTestAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateStrictSupTestAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateStrictSupTestAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateStrictSupTestAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateStrictSupTestAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateStrictSupTestAST::cPtr_templateStrictSupTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateStrictSupTestAST::cPtr_templateStrictSupTestAST (const GGS_location & in_mOperatorLocation,
                                                              const GGS_templateExpressionAST & in_mLeftExpression,
                                                              const GGS_templateExpressionAST & in_mRightExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateStrictSupTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST ;
}

void cPtr_templateStrictSupTestAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateStrictSupTestAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateStrictSupTestAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateStrictSupTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateStrictSupTestAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateStrictSupTestAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST ("templateStrictSupTestAST",
                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateStrictSupTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateStrictSupTestAST_2E_weak::objectCompare (const GGS_templateStrictSupTestAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateStrictSupTestAST_2E_weak::GGS_templateStrictSupTestAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictSupTestAST_2E_weak & GGS_templateStrictSupTestAST_2E_weak::operator = (const GGS_templateStrictSupTestAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictSupTestAST_2E_weak::GGS_templateStrictSupTestAST_2E_weak (const GGS_templateStrictSupTestAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateStrictSupTestAST_2E_weak GGS_templateStrictSupTestAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateStrictSupTestAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictSupTestAST GGS_templateStrictSupTestAST_2E_weak::unwrappedValue (void) const {
  GGS_templateStrictSupTestAST result ;
  if (isValid ()) {
    const cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateStrictSupTestAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateStrictSupTestAST GGS_templateStrictSupTestAST_2E_weak::bang_templateStrictSupTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateStrictSupTestAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateStrictSupTestAST) ;
      result = GGS_templateStrictSupTestAST ((cPtr_templateStrictSupTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateStrictSupTestAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST_2E_weak ("templateStrictSupTestAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateStrictSupTestAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateSupOrEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateSupOrEqualTestAST::objectCompare (const GGS_templateSupOrEqualTestAST & inOperand) const {
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

GGS_templateSupOrEqualTestAST::GGS_templateSupOrEqualTestAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateSupOrEqualTestAST GGS_templateSupOrEqualTestAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateSupOrEqualTestAST * object = nullptr ;
  macroMyNew (object, cPtr_templateSupOrEqualTestAST (inCompiler COMMA_THERE)) ;
  object->templateSupOrEqualTestAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateSupOrEqualTestAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::
templateSupOrEqualTestAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                            const GGS_templateExpressionAST & in_mLeftExpression,
                                            const GGS_templateExpressionAST & in_mRightExpression,
                                            Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSupOrEqualTestAST::GGS_templateSupOrEqualTestAST (const cPtr_templateSupOrEqualTestAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateSupOrEqualTestAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateSupOrEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateSupOrEqualTestAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateSupOrEqualTestAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateSupOrEqualTestAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateSupOrEqualTestAST::cPtr_templateSupOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateSupOrEqualTestAST::cPtr_templateSupOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                                                const GGS_templateExpressionAST & in_mLeftExpression,
                                                                const GGS_templateExpressionAST & in_mRightExpression,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateSupOrEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;
}

void cPtr_templateSupOrEqualTestAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@templateSupOrEqualTestAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateSupOrEqualTestAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateSupOrEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateSupOrEqualTestAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateSupOrEqualTestAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ("templateSupOrEqualTestAST",
                                                                              & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateSupOrEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateSupOrEqualTestAST_2E_weak::objectCompare (const GGS_templateSupOrEqualTestAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateSupOrEqualTestAST_2E_weak::GGS_templateSupOrEqualTestAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateSupOrEqualTestAST_2E_weak & GGS_templateSupOrEqualTestAST_2E_weak::operator = (const GGS_templateSupOrEqualTestAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSupOrEqualTestAST_2E_weak::GGS_templateSupOrEqualTestAST_2E_weak (const GGS_templateSupOrEqualTestAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateSupOrEqualTestAST_2E_weak GGS_templateSupOrEqualTestAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateSupOrEqualTestAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSupOrEqualTestAST GGS_templateSupOrEqualTestAST_2E_weak::unwrappedValue (void) const {
  GGS_templateSupOrEqualTestAST result ;
  if (isValid ()) {
    const cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateSupOrEqualTestAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSupOrEqualTestAST GGS_templateSupOrEqualTestAST_2E_weak::bang_templateSupOrEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateSupOrEqualTestAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateSupOrEqualTestAST) ;
      result = GGS_templateSupOrEqualTestAST ((cPtr_templateSupOrEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateSupOrEqualTestAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST_2E_weak ("templateSupOrEqualTestAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateSupOrEqualTestAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateLeftShiftOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLeftShiftOperationAST::objectCompare (const GGS_templateLeftShiftOperationAST & inOperand) const {
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

GGS_templateLeftShiftOperationAST::GGS_templateLeftShiftOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLeftShiftOperationAST GGS_templateLeftShiftOperationAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateLeftShiftOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLeftShiftOperationAST (inCompiler COMMA_THERE)) ;
  object->templateLeftShiftOperationAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateLeftShiftOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::
templateLeftShiftOperationAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                const GGS_templateExpressionAST & in_mLeftExpression,
                                                const GGS_templateExpressionAST & in_mRightExpression,
                                                Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLeftShiftOperationAST::GGS_templateLeftShiftOperationAST (const cPtr_templateLeftShiftOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLeftShiftOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateLeftShiftOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateLeftShiftOperationAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateLeftShiftOperationAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLeftShiftOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLeftShiftOperationAST::cPtr_templateLeftShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLeftShiftOperationAST::cPtr_templateLeftShiftOperationAST (const GGS_location & in_mOperatorLocation,
                                                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                                                        const GGS_templateExpressionAST & in_mRightExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLeftShiftOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;
}

void cPtr_templateLeftShiftOperationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLeftShiftOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLeftShiftOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLeftShiftOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLeftShiftOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLeftShiftOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ("templateLeftShiftOperationAST",
                                                                                  & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLeftShiftOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLeftShiftOperationAST_2E_weak::objectCompare (const GGS_templateLeftShiftOperationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateLeftShiftOperationAST_2E_weak::GGS_templateLeftShiftOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLeftShiftOperationAST_2E_weak & GGS_templateLeftShiftOperationAST_2E_weak::operator = (const GGS_templateLeftShiftOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLeftShiftOperationAST_2E_weak::GGS_templateLeftShiftOperationAST_2E_weak (const GGS_templateLeftShiftOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLeftShiftOperationAST_2E_weak GGS_templateLeftShiftOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLeftShiftOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLeftShiftOperationAST GGS_templateLeftShiftOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLeftShiftOperationAST result ;
  if (isValid ()) {
    const cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLeftShiftOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLeftShiftOperationAST GGS_templateLeftShiftOperationAST_2E_weak::bang_templateLeftShiftOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLeftShiftOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLeftShiftOperationAST) ;
      result = GGS_templateLeftShiftOperationAST ((cPtr_templateLeftShiftOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLeftShiftOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST_2E_weak ("templateLeftShiftOperationAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLeftShiftOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateRightShiftOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateRightShiftOperationAST::objectCompare (const GGS_templateRightShiftOperationAST & inOperand) const {
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

GGS_templateRightShiftOperationAST::GGS_templateRightShiftOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateRightShiftOperationAST GGS_templateRightShiftOperationAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateRightShiftOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateRightShiftOperationAST (inCompiler COMMA_THERE)) ;
  object->templateRightShiftOperationAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateRightShiftOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::
templateRightShiftOperationAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                 const GGS_templateExpressionAST & in_mLeftExpression,
                                                 const GGS_templateExpressionAST & in_mRightExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateRightShiftOperationAST::GGS_templateRightShiftOperationAST (const cPtr_templateRightShiftOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateRightShiftOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateRightShiftOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateRightShiftOperationAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateRightShiftOperationAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateRightShiftOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateRightShiftOperationAST::cPtr_templateRightShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateRightShiftOperationAST::cPtr_templateRightShiftOperationAST (const GGS_location & in_mOperatorLocation,
                                                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                                                          const GGS_templateExpressionAST & in_mRightExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateRightShiftOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;
}

void cPtr_templateRightShiftOperationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@templateRightShiftOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateRightShiftOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateRightShiftOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateRightShiftOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateRightShiftOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST ("templateRightShiftOperationAST",
                                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateRightShiftOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateRightShiftOperationAST_2E_weak::objectCompare (const GGS_templateRightShiftOperationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateRightShiftOperationAST_2E_weak::GGS_templateRightShiftOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateRightShiftOperationAST_2E_weak & GGS_templateRightShiftOperationAST_2E_weak::operator = (const GGS_templateRightShiftOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateRightShiftOperationAST_2E_weak::GGS_templateRightShiftOperationAST_2E_weak (const GGS_templateRightShiftOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateRightShiftOperationAST_2E_weak GGS_templateRightShiftOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateRightShiftOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateRightShiftOperationAST GGS_templateRightShiftOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateRightShiftOperationAST result ;
  if (isValid ()) {
    const cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateRightShiftOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateRightShiftOperationAST GGS_templateRightShiftOperationAST_2E_weak::bang_templateRightShiftOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateRightShiftOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateRightShiftOperationAST) ;
      result = GGS_templateRightShiftOperationAST ((cPtr_templateRightShiftOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateRightShiftOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST_2E_weak ("templateRightShiftOperationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateRightShiftOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionStringAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionStringAST::objectCompare (const GGS_templateInstructionStringAST & inOperand) const {
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

GGS_templateInstructionStringAST::GGS_templateInstructionStringAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionStringAST GGS_templateInstructionStringAST::
init_21_ (const GGS_string & in_mTemplateString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionStringAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionStringAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionStringAST_init_21_ (in_mTemplateString, inCompiler) ;
  const GGS_templateInstructionStringAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::
templateInstructionStringAST_init_21_ (const GGS_string & in_mTemplateString,
                                       Compiler * /* inCompiler */) {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST::GGS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionStringAST::readProperty_mTemplateString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionStringAST * p = (cPtr_templateInstructionStringAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
    return p->mProperty_mTemplateString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (const GGS_string & in_mTemplateString,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionStringAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

void cPtr_templateInstructionStringAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionStringAST:") ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionStringAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionStringAST (mProperty_mTemplateString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionStringAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateString.printNonNullClassInstanceProperties ("mTemplateString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionStringAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ("templateInstructionStringAST",
                                                                                 & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionStringAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionStringAST_2E_weak::objectCompare (const GGS_templateInstructionStringAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionStringAST_2E_weak::GGS_templateInstructionStringAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST_2E_weak & GGS_templateInstructionStringAST_2E_weak::operator = (const GGS_templateInstructionStringAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST_2E_weak::GGS_templateInstructionStringAST_2E_weak (const GGS_templateInstructionStringAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST_2E_weak GGS_templateInstructionStringAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionStringAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST GGS_templateInstructionStringAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionStringAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionStringAST * p = (cPtr_templateInstructionStringAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionStringAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST GGS_templateInstructionStringAST_2E_weak::bang_templateInstructionStringAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionStringAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionStringAST) ;
      result = GGS_templateInstructionStringAST ((cPtr_templateInstructionStringAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionStringAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringAST_2E_weak ("templateInstructionStringAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionStringAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionExpressionAST::objectCompare (const GGS_templateInstructionExpressionAST & inOperand) const {
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

GGS_templateInstructionExpressionAST::GGS_templateInstructionExpressionAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionExpressionAST GGS_templateInstructionExpressionAST::
init_21__21_ (const GGS_templateExpressionAST & in_mExpression,
              const GGS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionExpressionAST_init_21__21_ (in_mExpression, in_mLocation, inCompiler) ;
  const GGS_templateInstructionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::
templateInstructionExpressionAST_init_21__21_ (const GGS_templateExpressionAST & in_mExpression,
                                               const GGS_location & in_mLocation,
                                               Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionAST::GGS_templateInstructionExpressionAST (const cPtr_templateInstructionExpressionAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInstructionExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateInstructionExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionAST::cPtr_templateInstructionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionAST::cPtr_templateInstructionExpressionAST (const GGS_templateExpressionAST & in_mExpression,
                                                                              const GGS_location & in_mLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;
}

void cPtr_templateInstructionExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionAST (mProperty_mExpression, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST ("templateInstructionExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionExpressionAST_2E_weak::objectCompare (const GGS_templateInstructionExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionExpressionAST_2E_weak::GGS_templateInstructionExpressionAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionAST_2E_weak & GGS_templateInstructionExpressionAST_2E_weak::operator = (const GGS_templateInstructionExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionAST_2E_weak::GGS_templateInstructionExpressionAST_2E_weak (const GGS_templateInstructionExpressionAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionAST_2E_weak GGS_templateInstructionExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionAST GGS_templateInstructionExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionAST GGS_templateInstructionExpressionAST_2E_weak::bang_templateInstructionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionExpressionAST) ;
      result = GGS_templateInstructionExpressionAST ((cPtr_templateInstructionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST_2E_weak ("templateInstructionExpressionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateBlockInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionAST::objectCompare (const GGS_templateBlockInstructionAST & inOperand) const {
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

GGS_templateBlockInstructionAST::GGS_templateBlockInstructionAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateBlockInstructionAST GGS_templateBlockInstructionAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mExpression,
                  const GGS_location & in_mLocation,
                  const GGS__5B_templateInstructionAST_5D_ & in_mBlockInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateBlockInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateBlockInstructionAST (inCompiler COMMA_THERE)) ;
  object->templateBlockInstructionAST_init_21__21__21_ (in_mExpression, in_mLocation, in_mBlockInstructionList, inCompiler) ;
  const GGS_templateBlockInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::
templateBlockInstructionAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mExpression,
                                              const GGS_location & in_mLocation,
                                              const GGS__5B_templateInstructionAST_5D_ & in_mBlockInstructionList,
                                              Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionAST::GGS_templateBlockInstructionAST (const cPtr_templateBlockInstructionAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateBlockInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateBlockInstructionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateInstructionAST_5D_ GGS_templateBlockInstructionAST::readProperty_mBlockInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_templateInstructionAST_5D_ () ;
  }else{
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    return p->mProperty_mBlockInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionAST::cPtr_templateBlockInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionAST::cPtr_templateBlockInstructionAST (const GGS_templateExpressionAST & in_mExpression,
                                                                    const GGS_location & in_mLocation,
                                                                    const GGS__5B_templateInstructionAST_5D_ & in_mBlockInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateBlockInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST ;
}

void cPtr_templateBlockInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateBlockInstructionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateBlockInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateBlockInstructionAST (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateBlockInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mBlockInstructionList.printNonNullClassInstanceProperties ("mBlockInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateBlockInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST ("templateBlockInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateBlockInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionAST_2E_weak::objectCompare (const GGS_templateBlockInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateBlockInstructionAST_2E_weak::GGS_templateBlockInstructionAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionAST_2E_weak & GGS_templateBlockInstructionAST_2E_weak::operator = (const GGS_templateBlockInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionAST_2E_weak::GGS_templateBlockInstructionAST_2E_weak (const GGS_templateBlockInstructionAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionAST_2E_weak GGS_templateBlockInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateBlockInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionAST GGS_templateBlockInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateBlockInstructionAST result ;
  if (isValid ()) {
    const cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateBlockInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionAST GGS_templateBlockInstructionAST_2E_weak::bang_templateBlockInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateBlockInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateBlockInstructionAST) ;
      result = GGS_templateBlockInstructionAST ((cPtr_templateBlockInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateBlockInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST_2E_weak ("templateBlockInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateBlockInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionGetColumnLocationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGetColumnLocationAST::objectCompare (const GGS_templateInstructionGetColumnLocationAST & inOperand) const {
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

GGS_templateInstructionGetColumnLocationAST::GGS_templateInstructionGetColumnLocationAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationAST GGS_templateInstructionGetColumnLocationAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionGetColumnLocationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionGetColumnLocationAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionGetColumnLocationAST_init (inCompiler) ;
  const GGS_templateInstructionGetColumnLocationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::
templateInstructionGetColumnLocationAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationAST::GGS_templateInstructionGetColumnLocationAST (const cPtr_templateInstructionGetColumnLocationAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGetColumnLocationAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionGetColumnLocationAST::cPtr_templateInstructionGetColumnLocationAST (Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionGetColumnLocationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;
}

void cPtr_templateInstructionGetColumnLocationAST::description (String & ioString,
                                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@templateInstructionGetColumnLocationAST]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionGetColumnLocationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionGetColumnLocationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGetColumnLocationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ("templateInstructionGetColumnLocationAST",
                                                                                            & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGetColumnLocationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGetColumnLocationAST_2E_weak::objectCompare (const GGS_templateInstructionGetColumnLocationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionGetColumnLocationAST_2E_weak::GGS_templateInstructionGetColumnLocationAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationAST_2E_weak & GGS_templateInstructionGetColumnLocationAST_2E_weak::operator = (const GGS_templateInstructionGetColumnLocationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationAST_2E_weak::GGS_templateInstructionGetColumnLocationAST_2E_weak (const GGS_templateInstructionGetColumnLocationAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationAST_2E_weak GGS_templateInstructionGetColumnLocationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationAST GGS_templateInstructionGetColumnLocationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionGetColumnLocationAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionGetColumnLocationAST * p = (cPtr_templateInstructionGetColumnLocationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionGetColumnLocationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationAST GGS_templateInstructionGetColumnLocationAST_2E_weak::bang_templateInstructionGetColumnLocationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionGetColumnLocationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGetColumnLocationAST) ;
      result = GGS_templateInstructionGetColumnLocationAST ((cPtr_templateInstructionGetColumnLocationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGetColumnLocationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST_2E_weak ("templateInstructionGetColumnLocationAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGetColumnLocationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionGotoColumnLocationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGotoColumnLocationAST::objectCompare (const GGS_templateInstructionGotoColumnLocationAST & inOperand) const {
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

GGS_templateInstructionGotoColumnLocationAST::GGS_templateInstructionGotoColumnLocationAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationAST GGS_templateInstructionGotoColumnLocationAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionGotoColumnLocationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionGotoColumnLocationAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionGotoColumnLocationAST_init (inCompiler) ;
  const GGS_templateInstructionGotoColumnLocationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::
templateInstructionGotoColumnLocationAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationAST::GGS_templateInstructionGotoColumnLocationAST (const cPtr_templateInstructionGotoColumnLocationAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGotoColumnLocationAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionGotoColumnLocationAST::cPtr_templateInstructionGotoColumnLocationAST (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionGotoColumnLocationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;
}

void cPtr_templateInstructionGotoColumnLocationAST::description (String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@templateInstructionGotoColumnLocationAST]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionGotoColumnLocationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionGotoColumnLocationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGotoColumnLocationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ("templateInstructionGotoColumnLocationAST",
                                                                                             & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGotoColumnLocationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGotoColumnLocationAST_2E_weak::objectCompare (const GGS_templateInstructionGotoColumnLocationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionGotoColumnLocationAST_2E_weak::GGS_templateInstructionGotoColumnLocationAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationAST_2E_weak & GGS_templateInstructionGotoColumnLocationAST_2E_weak::operator = (const GGS_templateInstructionGotoColumnLocationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationAST_2E_weak::GGS_templateInstructionGotoColumnLocationAST_2E_weak (const GGS_templateInstructionGotoColumnLocationAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationAST_2E_weak GGS_templateInstructionGotoColumnLocationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationAST GGS_templateInstructionGotoColumnLocationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionGotoColumnLocationAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionGotoColumnLocationAST * p = (cPtr_templateInstructionGotoColumnLocationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionGotoColumnLocationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationAST GGS_templateInstructionGotoColumnLocationAST_2E_weak::bang_templateInstructionGotoColumnLocationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionGotoColumnLocationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGotoColumnLocationAST) ;
      result = GGS_templateInstructionGotoColumnLocationAST ((cPtr_templateInstructionGotoColumnLocationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGotoColumnLocationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST_2E_weak ("templateInstructionGotoColumnLocationAST.weak",
                                                                                                     & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGotoColumnLocationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionIfAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionIfAST::objectCompare (const GGS_templateInstructionIfAST & inOperand) const {
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

GGS_templateInstructionIfAST::GGS_templateInstructionIfAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionIfAST GGS_templateInstructionIfAST::
init_21__21_ (const GGS__5B_templateInstructionIfBranchAST_5D_ & in_mTemplateInstructionIfBranchList,
              const GGS__5B_templateInstructionAST_5D_ & in_mElseInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionIfAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionIfAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionIfAST_init_21__21_ (in_mTemplateInstructionIfBranchList, in_mElseInstructionList, inCompiler) ;
  const GGS_templateInstructionIfAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::
templateInstructionIfAST_init_21__21_ (const GGS__5B_templateInstructionIfBranchAST_5D_ & in_mTemplateInstructionIfBranchList,
                                       const GGS__5B_templateInstructionAST_5D_ & in_mElseInstructionList,
                                       Compiler * /* inCompiler */) {
  mProperty_mTemplateInstructionIfBranchList = in_mTemplateInstructionIfBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST::GGS_templateInstructionIfAST (const cPtr_templateInstructionIfAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_templateInstructionIfBranchAST_5D_ GGS_templateInstructionIfAST::readProperty_mTemplateInstructionIfBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_templateInstructionIfBranchAST_5D_ () ;
  }else{
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    return p->mProperty_mTemplateInstructionIfBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateInstructionAST_5D_ GGS_templateInstructionIfAST::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_templateInstructionAST_5D_ () ;
  }else{
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionIfAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfAST::cPtr_templateInstructionIfAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mTemplateInstructionIfBranchList (),
mProperty_mElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfAST::cPtr_templateInstructionIfAST (const GGS__5B_templateInstructionIfBranchAST_5D_ & in_mTemplateInstructionIfBranchList,
                                                              const GGS__5B_templateInstructionAST_5D_ & in_mElseInstructionList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mTemplateInstructionIfBranchList (),
mProperty_mElseInstructionList () {
  mProperty_mTemplateInstructionIfBranchList = in_mTemplateInstructionIfBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionIfAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

void cPtr_templateInstructionIfAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionIfAST:") ;
  mProperty_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionIfAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionIfAST (mProperty_mTemplateInstructionIfBranchList, mProperty_mElseInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionIfAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateInstructionIfBranchList.printNonNullClassInstanceProperties ("mTemplateInstructionIfBranchList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfAST ("templateInstructionIfAST",
                                                                             & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionIfAST_2E_weak::objectCompare (const GGS_templateInstructionIfAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionIfAST_2E_weak::GGS_templateInstructionIfAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST_2E_weak & GGS_templateInstructionIfAST_2E_weak::operator = (const GGS_templateInstructionIfAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST_2E_weak::GGS_templateInstructionIfAST_2E_weak (const GGS_templateInstructionIfAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST_2E_weak GGS_templateInstructionIfAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionIfAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST GGS_templateInstructionIfAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionIfAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionIfAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST GGS_templateInstructionIfAST_2E_weak::bang_templateInstructionIfAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionIfAST) ;
      result = GGS_templateInstructionIfAST ((cPtr_templateInstructionIfAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfAST_2E_weak ("templateInstructionIfAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @procDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procDeclarationAST::objectCompare (const GGS_procDeclarationAST & inOperand) const {
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

GGS_procDeclarationAST::GGS_procDeclarationAST (void) :
GGS_externProcedureDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_bool & in_isFilePrivate,
                                                                           const GGS_lstring & in_mRoutineName,
                                                                           const GGS__5B_formalParameterAST_5D_ & in_mFormalArgumentListAST,
                                                                           const GGS_bool & in_usefullProcedure,
                                                                           const GGS__5B_semanticInstructionAST_5D_ & in_mRoutineInstructionList,
                                                                           const GGS_location & in_mEndOfRoutineInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cPtr_procDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_procDeclarationAST (inCompiler COMMA_THERE)) ;
  object->procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, in_mRoutineInstructionList, in_mEndOfRoutineInstructionList, inCompiler) ;
  const GGS_procDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::
procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                                              const GGS_bool & in_isFilePrivate,
                                                                                              const GGS_lstring & in_mRoutineName,
                                                                                              const GGS__5B_formalParameterAST_5D_ & in_mFormalArgumentListAST,
                                                                                              const GGS_bool & in_usefullProcedure,
                                                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mRoutineInstructionList,
                                                                                              const GGS_location & in_mEndOfRoutineInstructionList,
                                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST::GGS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GGS_externProcedureDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_procDeclarationAST::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_procDeclarationAST::readProperty_mEndOfRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mEndOfRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_isFilePrivate,
                                                  const GGS_lstring & in_mRoutineName,
                                                  const GGS__5B_formalParameterAST_5D_ & in_mFormalArgumentListAST,
                                                  const GGS_bool & in_usefullProcedure,
                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mRoutineInstructionList,
                                                  const GGS_location & in_mEndOfRoutineInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

void cPtr_procDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@procDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_procDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, mProperty_mRoutineInstructionList, mProperty_mEndOfRoutineInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
    mProperty_mEndOfRoutineInstructionList.printNonNullClassInstanceProperties ("mEndOfRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @procDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_externProcedureDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procDeclarationAST_2E_weak::objectCompare (const GGS_procDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_procDeclarationAST_2E_weak::GGS_procDeclarationAST_2E_weak (void) :
GGS_externProcedureDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST_2E_weak & GGS_procDeclarationAST_2E_weak::operator = (const GGS_procDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST_2E_weak::GGS_procDeclarationAST_2E_weak (const GGS_procDeclarationAST & inSource) :
GGS_externProcedureDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST_2E_weak GGS_procDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_procDeclarationAST result ;
  if (isValid ()) {
    const cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_procDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST_2E_weak::bang_procDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procDeclarationAST) ;
      result = GGS_procDeclarationAST ((cPtr_procDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @procDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procDeclarationAST_2E_weak ("procDeclarationAST.weak",
                                                                               & kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @routineImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineImplementationForGeneration::objectCompare (const GGS_routineImplementationForGeneration & inOperand) const {
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

GGS_routineImplementationForGeneration::GGS_routineImplementationForGeneration (void) :
GGS_routinePrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration::
init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                      const GGS_bool & in_generateHeader,
                                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                                      const GGS_string & in_routineMangledName,
                                                                                                      const GGS__5B_formalParameterForGeneration_5D_ & in_mFormalArgumentList,
                                                                                                      const GGS_bool & in_mGenerateStatic,
                                                                                                      const GGS__5B_semanticInstructionForGeneration_5D_ & in_mRoutineInstructionList,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_routineImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routineImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->routineImplementationForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (in_infoMessage, in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, in_mGenerateStatic, in_mRoutineInstructionList, inCompiler) ;
  const GGS_routineImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::
routineImplementationForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                                                         const GGS_bool & in_generateHeader,
                                                                                                                                         const GGS_string & in_implementationCppFileName,
                                                                                                                                         const GGS_string & in_routineMangledName,
                                                                                                                                         const GGS__5B_formalParameterForGeneration_5D_ & in_mFormalArgumentList,
                                                                                                                                         const GGS_bool & in_mGenerateStatic,
                                                                                                                                         const GGS__5B_semanticInstructionForGeneration_5D_ & in_mRoutineInstructionList,
                                                                                                                                         Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration::GGS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) :
GGS_routinePrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineImplementationForGeneration::readProperty_mGenerateStatic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mGenerateStatic ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionForGeneration_5D_ GGS_routineImplementationForGeneration::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionForGeneration_5D_ () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routineImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (const GGS_string & in_infoMessage,
                                                                                  const GGS_bool & in_generateHeader,
                                                                                  const GGS_string & in_implementationCppFileName,
                                                                                  const GGS_string & in_routineMangledName,
                                                                                  const GGS__5B_formalParameterForGeneration_5D_ & in_mFormalArgumentList,
                                                                                  const GGS_bool & in_mGenerateStatic,
                                                                                  const GGS__5B_semanticInstructionForGeneration_5D_ & in_mRoutineInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (in_infoMessage, in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_routineImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

void cPtr_routineImplementationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@routineImplementationForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateStatic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_routineImplementationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routineImplementationForGeneration (mProperty_infoMessage, mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, mProperty_mGenerateStatic, mProperty_mRoutineInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routineImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateStatic.printNonNullClassInstanceProperties ("mGenerateStatic") ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @routineImplementationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ("routineImplementationForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       GGS__5B_row_5D_ & io_ioRowList,
                                                       const GGS_uint constin_inRow,
                                                       GGS_uint & io_ioColumn,
                                                       GGS_string & io_ioCurrentNode,
                                                       GGS_string & io_ioArrowShape,
                                                       GGS_string & io_ioArrows,
                                                       GGS_uint & io_ioMaxUsedRowIndex,
                                                       const GGS_bool constin_inDebug,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    inObject->method_tikzNodeForSyntaxInstruction (io_ioRowList, constin_inRow, io_ioColumn, io_ioCurrentNode, io_ioArrowShape, io_ioArrows, io_ioMaxUsedRowIndex, constin_inDebug, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::~ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_contains (const GGS_string & inKey
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                                 const GGS_uint & inLevel
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_keyList (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::performInsert (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>
GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>>
GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mNonTerminalIndex = info->mProperty_mNonTerminalIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                         GGS_uint inArgument0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared as unused in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GGS_string & inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mNonTerminalIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GGS_uint inValue,
                                                                                          GGS_string inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mNonTerminalIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mNonTerminalIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mNonTerminalIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @unusedNonTerminalSymbolMapForGrammarAnalysis") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonTerminalIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @unusedNonTerminalSymbolMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ("unusedNonTerminalSymbolMapForGrammarAnalysis",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::~ GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis & GGS_nonterminalSymbolLabelMapForGrammarAnalysis::operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_contains (const GGS_string & inKey
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                                const GGS_uint & inLevel
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_keyList (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::performInsert (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>
GGS_nonterminalSymbolLabelMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalSymbolLabelMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>
GGS_nonterminalSymbolLabelMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFormalParametersList = info->mProperty_mFormalParametersList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMapToOverride
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                        GGS__5B_signatureElementForGrammarAnalysis_5D_ inArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the rule label '%K' has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                        GGS__5B_signatureElementForGrammarAnalysis_5D_ & outArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the rule label '%K' is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mFormalParametersList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS__5B_signatureElementForGrammarAnalysis_5D_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_mFormalParametersListForKey (const GGS_string & inKey,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS__5B_signatureElementForGrammarAnalysis_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFormalParametersList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_setMFormalParametersListForKey (GGS__5B_signatureElementForGrammarAnalysis_5D_ inValue,
                                                                                             GGS_string inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFormalParametersList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFormalParametersList:") ;
    inArray (i COMMA_HERE)->mProperty_mFormalParametersList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @nonterminalSymbolLabelMapForGrammarAnalysis") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_signatureElementForGrammarAnalysis_5D_ DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParametersList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_signatureElementForGrammarAnalysis_5D_ UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParametersList ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalSymbolLabelMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ("nonterminalSymbolLabelMapForGrammarAnalysis",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------
// @nonTerminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonTerminalInstructionForGrammarAnalysis::objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const {
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

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_lstring & in_mNonterminalSymbolName,
                  const GGS_uint & in_mNonterminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_nonTerminalInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_nonTerminalInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mNonterminalSymbolName, in_mNonterminalSymbolIndex, inCompiler) ;
  const GGS_nonTerminalInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                           const GGS_lstring & in_mNonterminalSymbolName,
                                                           const GGS_uint & in_mNonterminalSymbolIndex,
                                                           Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (const cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonTerminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                              const GGS_lstring & in_mNonterminalSymbolName,
                                                                                              const GGS_uint & in_mNonterminalSymbolIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nonTerminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

void cPtr_nonTerminalInstructionForGrammarAnalysis::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@nonTerminalInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nonTerminalInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonTerminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mNonterminalSymbolName, mProperty_mNonterminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonTerminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalSymbolName.printNonNullClassInstanceProperties ("mNonterminalSymbolName") ;
    mProperty_mNonterminalSymbolIndex.printNonNullClassInstanceProperties ("mNonterminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nonTerminalInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ("nonTerminalInstructionForGrammarAnalysis",
                                                                                             & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_nonTerminalInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (const GGS_nonTerminalInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_nonTerminalInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::bang_nonTerminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
      result = GGS_nonTerminalInstructionForGrammarAnalysis ((cPtr_nonTerminalInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ("nonTerminalInstructionForGrammarAnalysis.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGrammarAnalysis::objectCompare (const GGS_selectInstructionForGrammarAnalysis & inOperand) const {
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

GGS_selectInstructionForGrammarAnalysis::GGS_selectInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & in_mSelectBranchList,
                  const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->selectInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mSelectBranchList, in_mAddedNonTerminalSymbolIndex, inCompiler) ;
  const GGS_selectInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::
selectInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                      const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & in_mSelectBranchList,
                                                      const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis::GGS_selectInstructionForGrammarAnalysis (const cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ GGS_selectInstructionForGrammarAnalysis::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_selectInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                    const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & in_mSelectBranchList,
                                                                                    const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

void cPtr_selectInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selectInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mSelectBranchList, mProperty_mAddedNonTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ("selectInstructionForGrammarAnalysis",
                                                                                        & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_selectInstructionForGrammarAnalysis_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_selectInstructionForGrammarAnalysis_2E_weak::GGS_selectInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak & GGS_selectInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_selectInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak::GGS_selectInstructionForGrammarAnalysis_2E_weak (const GGS_selectInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak GGS_selectInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis_2E_weak::bang_selectInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGrammarAnalysis) ;
      result = GGS_selectInstructionForGrammarAnalysis ((cPtr_selectInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ("selectInstructionForGrammarAnalysis.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGrammarAnalysis::objectCompare (const GGS_repeatInstructionForGrammarAnalysis & inOperand) const {
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

GGS_repeatInstructionForGrammarAnalysis::GGS_repeatInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & in_mRepeatBranchList,
                  const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_repeatInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->repeatInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mRepeatBranchList, in_mAddedNonTerminalSymbolIndex, inCompiler) ;
  const GGS_repeatInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::
repeatInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                      const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & in_mRepeatBranchList,
                                                      const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis::GGS_repeatInstructionForGrammarAnalysis (const cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ GGS_repeatInstructionForGrammarAnalysis::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_repeatInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mRepeatBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                    const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & in_mRepeatBranchList,
                                                                                    const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mRepeatBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_repeatInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

void cPtr_repeatInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_repeatInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mRepeatBranchList, mProperty_mAddedNonTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ("repeatInstructionForGrammarAnalysis",
                                                                                        & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_repeatInstructionForGrammarAnalysis_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_repeatInstructionForGrammarAnalysis_2E_weak::GGS_repeatInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak & GGS_repeatInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_repeatInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak::GGS_repeatInstructionForGrammarAnalysis_2E_weak (const GGS_repeatInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak GGS_repeatInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_repeatInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_repeatInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis_2E_weak::bang_repeatInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGrammarAnalysis) ;
      result = GGS_repeatInstructionForGrammarAnalysis ((cPtr_repeatInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ("repeatInstructionForGrammarAnalysis.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::GGS_terminalSymbolsMapForGrammarAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::~ GGS_terminalSymbolsMapForGrammarAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis & GGS_terminalSymbolsMapForGrammarAnalysis::operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalSymbolsMapForGrammarAnalysis::getter_contains (const GGS_string & inKey
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalSymbolsMapForGrammarAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                         const GGS_uint & inLevel
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalSymbolsMapForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalSymbolsMapForGrammarAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_terminalSymbolsMapForGrammarAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_terminalSymbolsMapForGrammarAnalysis::getter_keyList (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalSymbolsMapForGrammarAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::performInsert (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>
GGS_terminalSymbolsMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_terminalSymbolsMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>>
GGS_terminalSymbolsMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_terminalSymbolsMapForGrammarAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ GGS_terminalSymbolsMapForGrammarAnalysis
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_terminalSymbolsMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mTerminalIndex = info->mProperty_mTerminalIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_terminalSymbolsMapForGrammarAnalysis & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                 GGS_uint inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the terminal symbol '$%K$' is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                 GGS_uint & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the terminal symbol '$%K$' is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mTerminalIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalSymbolsMapForGrammarAnalysis::getter_mTerminalIndexForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTerminalIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::setter_setMTerminalIndexForKey (GGS_uint inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTerminalIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_terminalSymbolsMapForGrammarAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTerminalIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mTerminalIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @terminalSymbolsMapForGrammarAnalysis") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_terminalSymbolsMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_terminalSymbolsMapForGrammarAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalSymbolsMapForGrammarAnalysis::DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalSymbolsMapForGrammarAnalysis::UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @terminalSymbolsMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ("terminalSymbolsMapForGrammarAnalysis",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalSymbolsMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionAST::objectCompare (const GGS_classFuncExpressionAST & inOperand) const {
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

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::
init_21__21__21_ (const GGS_lstring & in_typeName,
                  const GGS_lstring & in_classFuncName,
                  const GGS__5B_actualOutputArgumentAST_5D_ & in_expressions,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionAST (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionAST_init_21__21__21_ (in_typeName, in_classFuncName, in_expressions, inCompiler) ;
  const GGS_classFuncExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::
classFuncExpressionAST_init_21__21__21_ (const GGS_lstring & in_typeName,
                                         const GGS_lstring & in_classFuncName,
                                         const GGS__5B_actualOutputArgumentAST_5D_ & in_expressions,
                                         Compiler * /* inCompiler */) {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (const cPtr_classFuncExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_typeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualOutputArgumentAST_5D_ GGS_classFuncExpressionAST::readProperty_expressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualOutputArgumentAST_5D_ () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_expressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (const GGS_lstring & in_typeName,
                                                          const GGS_lstring & in_classFuncName,
                                                          const GGS__5B_actualOutputArgumentAST_5D_ & in_expressions,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions () {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classFuncExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

void cPtr_classFuncExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionAST:") ;
  mProperty_typeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionAST (mProperty_typeName, mProperty_classFuncName, mProperty_expressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_typeName.printNonNullClassInstanceProperties ("typeName") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_expressions.printNonNullClassInstanceProperties ("expressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST ("classFuncExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionAST_2E_weak::objectCompare (const GGS_classFuncExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_classFuncExpressionAST_2E_weak::GGS_classFuncExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak & GGS_classFuncExpressionAST_2E_weak::operator = (const GGS_classFuncExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak::GGS_classFuncExpressionAST_2E_weak (const GGS_classFuncExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak GGS_classFuncExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classFuncExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_classFuncExpressionAST result ;
  if (isValid ()) {
    const cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_classFuncExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST_2E_weak::bang_classFuncExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classFuncExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classFuncExpressionAST) ;
      result = GGS_classFuncExpressionAST ((cPtr_classFuncExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ("classFuncExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration::objectCompare (const GGS_classFuncExpressionForGeneration & inOperand) const {
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

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                  const GGS_location & in_mLocation,
                                  const GGS_unifiedTypeMapEntry & in_classFuncType,
                                  const GGS_string & in_classFuncName,
                                  const GGS__5B_semanticExpressionForGeneration_5D_ & in_mEffectiveParameterList,
                                  const GGS_bool & in_mHasCompilerArgument,
                                  const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_classFuncType, in_classFuncName, in_mEffectiveParameterList, in_mHasCompilerArgument, in_requiredTypes, inCompiler) ;
  const GGS_classFuncExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::
classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                   const GGS_location & in_mLocation,
                                                                   const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                   const GGS_string & in_classFuncName,
                                                                   const GGS__5B_semanticExpressionForGeneration_5D_ & in_mEffectiveParameterList,
                                                                   const GGS_bool & in_mHasCompilerArgument,
                                                                   const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (const cPtr_classFuncExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_classFuncExpressionForGeneration::readProperty_classFuncType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_classFuncExpressionForGeneration::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticExpressionForGeneration_5D_ GGS_classFuncExpressionForGeneration::readProperty_mEffectiveParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticExpressionForGeneration_5D_ () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFuncExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS_classFuncExpressionForGeneration::readProperty_requiredTypes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_unifiedTypeMapEntry_5D_ () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_requiredTypes ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                              const GGS_location & in_mLocation,
                                                                              const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                              const GGS_string & in_classFuncName,
                                                                              const GGS__5B_semanticExpressionForGeneration_5D_ & in_mEffectiveParameterList,
                                                                              const GGS_bool & in_mHasCompilerArgument,
                                                                              const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classFuncExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

void cPtr_classFuncExpressionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiredTypes.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_classFuncType, mProperty_classFuncName, mProperty_mEffectiveParameterList, mProperty_mHasCompilerArgument, mProperty_requiredTypes, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_classFuncType.printNonNullClassInstanceProperties ("classFuncType") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_mEffectiveParameterList.printNonNullClassInstanceProperties ("mEffectiveParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_requiredTypes.printNonNullClassInstanceProperties ("requiredTypes") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ("classFuncExpressionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionForGeneration_2E_weak::objectCompare (const GGS_semanticExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_semanticExpressionForGeneration_2E_weak::GGS_semanticExpressionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak & GGS_semanticExpressionForGeneration_2E_weak::operator = (const GGS_semanticExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak::GGS_semanticExpressionForGeneration_2E_weak (const GGS_semanticExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak GGS_semanticExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_semanticExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionForGeneration_2E_weak::bang_semanticExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionForGeneration) ;
      result = GGS_semanticExpressionForGeneration ((cPtr_semanticExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ("semanticExpressionForGeneration.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_collectionValueElementAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_::GGS__5B_collectionValueElementAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_::GGS__5B_collectionValueElementAST_5D_ (const GGS__5B_collectionValueElementAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_ & GGS__5B_collectionValueElementAST_5D_::operator = (const GGS__5B_collectionValueElementAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_ GGS__5B_collectionValueElementAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_collectionValueElementAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::plusPlusAssignOperation (const GGS_collectionValueElementAST & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_collectionValueElementAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_ GGS__5B_collectionValueElementAST_5D_::add_operation (const GGS__5B_collectionValueElementAST_5D_ & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_collectionValueElementAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@collectionValueElementAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::plusAssignOperation (const GGS__5B_collectionValueElementAST_5D_ inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::setter_append (const GGS_collectionValueElementAST inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::setter_set (const GGS_collectionValueElementAST inValue,
                                                        const GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::setter_insert (const GGS_collectionValueElementAST inValue,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::setter_remove (GGS_collectionValueElementAST & outValue,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::setter_removeFirst (GGS_collectionValueElementAST & outValue,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_collectionValueElementAST_5D_::setter_removeLast (GGS_collectionValueElementAST & outValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_ GGS__5B_collectionValueElementAST_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_collectionValueElementAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_collectionValueElementAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_ GGS__5B_collectionValueElementAST_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                             const GGS_uint & inLength,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_collectionValueElementAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_collectionValueElementAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_collectionValueElementAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST GGS__5B_collectionValueElementAST_5D_::getter_first (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST GGS__5B_collectionValueElementAST_5D_::getter_last (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST GGS__5B_collectionValueElementAST_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_collectionValueElementAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_collectionValueElementAST_5D_::DownEnumerator__5B_collectionValueElementAST_5D_ (const GGS__5B_collectionValueElementAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST DownEnumerator__5B_collectionValueElementAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST DownEnumerator__5B_collectionValueElementAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_collectionValueElementAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_collectionValueElementAST_5D_::UpEnumerator__5B_collectionValueElementAST_5D_ (const GGS__5B_collectionValueElementAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST UpEnumerator__5B_collectionValueElementAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST UpEnumerator__5B_collectionValueElementAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[collectionValueElementAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_collectionValueElementAST_5D_ ("[collectionValueElementAST]",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_collectionValueElementAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_collectionValueElementAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST::GGS_collectionValueElementAST (void) :
mProperty_mExpression (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST::GGS_collectionValueElementAST (const GGS_collectionValueElementAST & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST & GGS_collectionValueElementAST::operator = (const GGS_collectionValueElementAST & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_collectionValueElementAST GGS_collectionValueElementAST::init_21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                                                                           const GGS_location & in_location,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementAST::GGS_collectionValueElementAST (const GGS_semanticExpressionAST & inOperand0,
                                                              const GGS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_collectionValueElementAST::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementAST::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @collectionValueElementAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @collectionValueElementAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementAST ("collectionValueElementAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementAST ;
}

//--------------------------------------------------------------------------------------------------
// @collectionValueAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_collectionValueAST::objectCompare (const GGS_collectionValueAST & inOperand) const {
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

GGS_collectionValueAST::GGS_collectionValueAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS__5B_collectionValueElementAST_5D_ & in_mExpressionList,
                  const GGS_location & in_mEndOfCollectionValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_collectionValueAST * object = nullptr ;
  macroMyNew (object, cPtr_collectionValueAST (inCompiler COMMA_THERE)) ;
  object->collectionValueAST_init_21__21__21_ (in_mTypeName, in_mExpressionList, in_mEndOfCollectionValue, inCompiler) ;
  const GGS_collectionValueAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::
collectionValueAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS__5B_collectionValueElementAST_5D_ & in_mExpressionList,
                                     const GGS_location & in_mEndOfCollectionValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mEndOfCollectionValue = in_mEndOfCollectionValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST::GGS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_collectionValueAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_collectionValueAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementAST_5D_ GGS_collectionValueAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_collectionValueElementAST_5D_ () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_collectionValueAST::readProperty_mEndOfCollectionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mEndOfCollectionValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @collectionValueAST class
//--------------------------------------------------------------------------------------------------

cPtr_collectionValueAST::cPtr_collectionValueAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressionList (),
mProperty_mEndOfCollectionValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_collectionValueAST::cPtr_collectionValueAST (const GGS_lstring & in_mTypeName,
                                                  const GGS__5B_collectionValueElementAST_5D_ & in_mExpressionList,
                                                  const GGS_location & in_mEndOfCollectionValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressionList (),
mProperty_mEndOfCollectionValue () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mEndOfCollectionValue = in_mEndOfCollectionValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_collectionValueAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

void cPtr_collectionValueAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@collectionValueAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfCollectionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_collectionValueAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_collectionValueAST (mProperty_mTypeName, mProperty_mExpressionList, mProperty_mEndOfCollectionValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_collectionValueAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
    mProperty_mEndOfCollectionValue.printNonNullClassInstanceProperties ("mEndOfCollectionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @collectionValueAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueAST ("collectionValueAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_collectionValueAST_2E_weak::objectCompare (const GGS_collectionValueAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_collectionValueAST_2E_weak::GGS_collectionValueAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST_2E_weak & GGS_collectionValueAST_2E_weak::operator = (const GGS_collectionValueAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST_2E_weak::GGS_collectionValueAST_2E_weak (const GGS_collectionValueAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST_2E_weak GGS_collectionValueAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_collectionValueAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST_2E_weak::unwrappedValue (void) const {
  GGS_collectionValueAST result ;
  if (isValid ()) {
    const cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_collectionValueAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST_2E_weak::bang_collectionValueAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_collectionValueAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_collectionValueAST) ;
      result = GGS_collectionValueAST ((cPtr_collectionValueAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @collectionValueAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueAST_2E_weak ("collectionValueAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @expressionCollectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionCollectionForGeneration::objectCompare (const GGS_expressionCollectionForGeneration & inOperand) const {
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

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS__5B_collectionValueElementForGeneration_5D_ & in_expressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_expressionCollectionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_expressionCollectionForGeneration (inCompiler COMMA_THERE)) ;
  object->expressionCollectionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_expressionList, inCompiler) ;
  const GGS_expressionCollectionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::
expressionCollectionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS__5B_collectionValueElementForGeneration_5D_ & in_expressionList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (const cPtr_expressionCollectionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_collectionValueElementForGeneration_5D_ GGS_expressionCollectionForGeneration::readProperty_expressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_collectionValueElementForGeneration_5D_ () ;
  }else{
    cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    return p->mProperty_expressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS__5B_collectionValueElementForGeneration_5D_ & in_expressionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expressionList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_expressionCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

void cPtr_expressionCollectionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@expressionCollectionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_expressionCollectionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_expressionCollectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionCollectionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expressionList.printNonNullClassInstanceProperties ("expressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @expressionCollectionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration ("expressionCollectionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionCollectionForGeneration_2E_weak::objectCompare (const GGS_expressionCollectionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_expressionCollectionForGeneration_2E_weak::GGS_expressionCollectionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration_2E_weak & GGS_expressionCollectionForGeneration_2E_weak::operator = (const GGS_expressionCollectionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration_2E_weak::GGS_expressionCollectionForGeneration_2E_weak (const GGS_expressionCollectionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration_2E_weak GGS_expressionCollectionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_expressionCollectionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_expressionCollectionForGeneration result ;
  if (isValid ()) {
    const cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_expressionCollectionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration_2E_weak::bang_expressionCollectionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_expressionCollectionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionCollectionForGeneration) ;
      result = GGS_expressionCollectionForGeneration ((cPtr_expressionCollectionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @expressionCollectionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration_2E_weak ("expressionCollectionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionCollectionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionAST::objectCompare (const GGS_varInExpressionAST & inOperand) const {
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

GGS_varInExpressionAST::GGS_varInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionAST (inCompiler COMMA_THERE)) ;
  object->varInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_varInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::
varInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                             Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST::GGS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GGS_lstring & in_mVarName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_varInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @varInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionAST_2E_weak::objectCompare (const GGS_varInExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_varInExpressionAST_2E_weak::GGS_varInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST_2E_weak & GGS_varInExpressionAST_2E_weak::operator = (const GGS_varInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST_2E_weak::GGS_varInExpressionAST_2E_weak (const GGS_varInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST_2E_weak GGS_varInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_varInExpressionAST result ;
  if (isValid ()) {
    const cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_varInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST_2E_weak::bang_varInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpressionAST) ;
      result = GGS_varInExpressionAST ((cPtr_varInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @varInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionAST_2E_weak ("varInExpressionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionForGeneration::objectCompare (const GGS_varInExpressionForGeneration & inOperand) const {
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

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mCppVarName,
                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->varInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mCppVarName, in_mNameForCheckingFormalParameterUsing, inCompiler) ;
  const GGS_varInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::
varInExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_string & in_mCppVarName,
                                                   const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mCppVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mCppVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_string & in_mCppVarName,
                                                                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

void cPtr_varInExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_varInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCppVarName, mProperty_mNameForCheckingFormalParameterUsing, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCppVarName.printNonNullClassInstanceProperties ("mCppVarName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @varInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionForGeneration_2E_weak::objectCompare (const GGS_varInExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_varInExpressionForGeneration_2E_weak::GGS_varInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration_2E_weak & GGS_varInExpressionForGeneration_2E_weak::operator = (const GGS_varInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration_2E_weak::GGS_varInExpressionForGeneration_2E_weak (const GGS_varInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration_2E_weak GGS_varInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_varInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_varInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration_2E_weak::bang_varInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpressionForGeneration) ;
      result = GGS_varInExpressionForGeneration ((cPtr_varInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @varInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration_2E_weak ("varInExpressionForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @globalConstantInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_globalConstantInExpressionForGeneration::objectCompare (const GGS_globalConstantInExpressionForGeneration & inOperand) const {
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

GGS_globalConstantInExpressionForGeneration::GGS_globalConstantInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_globalConstantInExpressionForGeneration GGS_globalConstantInExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_string & in_mGlobalConstantName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_globalConstantInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_globalConstantInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->globalConstantInExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mGlobalConstantName, inCompiler) ;
  const GGS_globalConstantInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantInExpressionForGeneration::
globalConstantInExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                          const GGS_location & in_mLocation,
                                                          const GGS_string & in_mGlobalConstantName,
                                                          Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mGlobalConstantName = in_mGlobalConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantInExpressionForGeneration::GGS_globalConstantInExpressionForGeneration (const cPtr_globalConstantInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_globalConstantInExpressionForGeneration::readProperty_mGlobalConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_globalConstantInExpressionForGeneration * p = (cPtr_globalConstantInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantInExpressionForGeneration) ;
    return p->mProperty_mGlobalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @globalConstantInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_globalConstantInExpressionForGeneration::cPtr_globalConstantInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mGlobalConstantName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_globalConstantInExpressionForGeneration::cPtr_globalConstantInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                            const GGS_location & in_mLocation,
                                                                                            const GGS_string & in_mGlobalConstantName,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mGlobalConstantName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mGlobalConstantName = in_mGlobalConstantName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_globalConstantInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantInExpressionForGeneration ;
}

void cPtr_globalConstantInExpressionForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@globalConstantInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGlobalConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_globalConstantInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_globalConstantInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mGlobalConstantName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_globalConstantInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGlobalConstantName.printNonNullClassInstanceProperties ("mGlobalConstantName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @globalConstantInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantInExpressionForGeneration ("globalConstantInExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalConstantInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_globalConstantInExpressionForGeneration_2E_weak::objectCompare (const GGS_globalConstantInExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_globalConstantInExpressionForGeneration_2E_weak::GGS_globalConstantInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantInExpressionForGeneration_2E_weak & GGS_globalConstantInExpressionForGeneration_2E_weak::operator = (const GGS_globalConstantInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantInExpressionForGeneration_2E_weak::GGS_globalConstantInExpressionForGeneration_2E_weak (const GGS_globalConstantInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_globalConstantInExpressionForGeneration_2E_weak GGS_globalConstantInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_globalConstantInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantInExpressionForGeneration GGS_globalConstantInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_globalConstantInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_globalConstantInExpressionForGeneration * p = (cPtr_globalConstantInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_globalConstantInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantInExpressionForGeneration GGS_globalConstantInExpressionForGeneration_2E_weak::bang_globalConstantInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_globalConstantInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_globalConstantInExpressionForGeneration) ;
      result = GGS_globalConstantInExpressionForGeneration ((cPtr_globalConstantInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @globalConstantInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantInExpressionForGeneration_2E_weak ("globalConstantInExpressionForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalConstantInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@[actualOutputArgumentAST] initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS__5B_actualOutputArgumentAST_5D_ & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("init") ;
  const GGS__5B_actualOutputArgumentAST_5D_ temp_0 = inObject ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_1686 (temp_0) ;
  while (enumerator_1686.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_1686.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 33)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 33)) ;
    enumerator_1686.gotoNextObject () ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@[actualOutputArgumentAST] subcriptSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_subcriptSignature (const GGS__5B_actualOutputArgumentAST_5D_ & inObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  const GGS__5B_actualOutputArgumentAST_5D_ temp_0 = inObject ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_1968 (temp_0) ;
  while (enumerator_1968.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("\?").add_operation (enumerator_1968.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 42)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 42)) ;
    enumerator_1968.gotoNextObject () ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[actualOutputArgumentAST] enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const GGS__5B_actualOutputArgumentAST_5D_ inObject,
                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS__5B_actualOutputArgumentAST_5D_ temp_0 = inObject ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_2243 (temp_0) ;
  while (enumerator_2243.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2243.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 50)) ;
    enumerator_2243.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
// @literalCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionAST::objectCompare (const GGS_literalCharExpressionAST & inOperand) const {
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

GGS_literalCharExpressionAST::GGS_literalCharExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalCharExpressionAST GGS_literalCharExpressionAST::
init_21_ (const GGS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionAST_init_21_ (in_mCharacter, inCompiler) ;
  const GGS_literalCharExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::
literalCharExpressionAST_init_21_ (const GGS_lchar & in_mCharacter,
                                   Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST::GGS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_literalCharExpressionAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_literalCharExpressionAST * p = (cPtr_literalCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (const GGS_lchar & in_mCharacter,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

void cPtr_literalCharExpressionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@literalCharExpressionAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalCharExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionAST (mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ("literalCharExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionAST_2E_weak::objectCompare (const GGS_literalCharExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalCharExpressionAST_2E_weak::GGS_literalCharExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST_2E_weak & GGS_literalCharExpressionAST_2E_weak::operator = (const GGS_literalCharExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST_2E_weak::GGS_literalCharExpressionAST_2E_weak (const GGS_literalCharExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST_2E_weak GGS_literalCharExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalCharExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST GGS_literalCharExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalCharExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalCharExpressionAST * p = (cPtr_literalCharExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalCharExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST GGS_literalCharExpressionAST_2E_weak::bang_literalCharExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalCharExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalCharExpressionAST) ;
      result = GGS_literalCharExpressionAST ((cPtr_literalCharExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionAST_2E_weak ("literalCharExpressionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionForGeneration::objectCompare (const GGS_literalCharExpressionForGeneration & inOperand) const {
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

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_char & in_mCharacter,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mCharacter, inCompiler) ;
  const GGS_literalCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::
literalCharExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_char & in_mCharacter,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_char GGS_literalCharExpressionForGeneration::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_char () ;
  }else{
    cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_char & in_mCharacter,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

void cPtr_literalCharExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalCharExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalCharExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ("literalCharExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionForGeneration_2E_weak::objectCompare (const GGS_literalCharExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalCharExpressionForGeneration_2E_weak::GGS_literalCharExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration_2E_weak & GGS_literalCharExpressionForGeneration_2E_weak::operator = (const GGS_literalCharExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration_2E_weak::GGS_literalCharExpressionForGeneration_2E_weak (const GGS_literalCharExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration_2E_weak GGS_literalCharExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalCharExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalCharExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalCharExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration_2E_weak::bang_literalCharExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalCharExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalCharExpressionForGeneration) ;
      result = GGS_literalCharExpressionForGeneration ((cPtr_literalCharExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2E_weak ("literalCharExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionAST::objectCompare (const GGS_literalBigIntExpressionAST & inOperand) const {
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

GGS_literalBigIntExpressionAST::GGS_literalBigIntExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST::
init_21_ (const GGS_lbigint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalBigIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::
literalBigIntExpressionAST_init_21_ (const GGS_lbigint & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST::GGS_literalBigIntExpressionAST (const cPtr_literalBigIntExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_literalBigIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (const GGS_lbigint & in_mValue,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBigIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

void cPtr_literalBigIntExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalBigIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ("literalBigIntExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionAST_2E_weak::objectCompare (const GGS_literalBigIntExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalBigIntExpressionAST_2E_weak::GGS_literalBigIntExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST_2E_weak & GGS_literalBigIntExpressionAST_2E_weak::operator = (const GGS_literalBigIntExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST_2E_weak::GGS_literalBigIntExpressionAST_2E_weak (const GGS_literalBigIntExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST_2E_weak GGS_literalBigIntExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalBigIntExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalBigIntExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalBigIntExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST_2E_weak::bang_literalBigIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalBigIntExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBigIntExpressionAST) ;
      result = GGS_literalBigIntExpressionAST ((cPtr_literalBigIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2E_weak ("literalBigIntExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalUIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUIntExpressionForGeneration::objectCompare (const GGS_literalUIntExpressionForGeneration & inOperand) const {
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

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_uint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::
literalUIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_uint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_literalUIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_uint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

void cPtr_literalUIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalUIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ("literalUIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUIntExpressionForGeneration_2E_weak::objectCompare (const GGS_literalUIntExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalUIntExpressionForGeneration_2E_weak::GGS_literalUIntExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration_2E_weak & GGS_literalUIntExpressionForGeneration_2E_weak::operator = (const GGS_literalUIntExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration_2E_weak::GGS_literalUIntExpressionForGeneration_2E_weak (const GGS_literalUIntExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration_2E_weak GGS_literalUIntExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalUIntExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalUIntExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalUIntExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration_2E_weak::bang_literalUIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalUIntExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUIntExpressionForGeneration) ;
      result = GGS_literalUIntExpressionForGeneration ((cPtr_literalUIntExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalUIntExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2E_weak ("literalUIntExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUIntExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalUInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_u_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::
literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_u_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_literalUInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_u_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_u_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalUInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalUInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ("literalUInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak & GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::operator = (const GGS_literalUInt_36__34_ExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak (const GGS_literalUInt_36__34_ExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalUInt_36__34_ExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalUInt_36__34_ExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::bang_literalUInt_36__34_ExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalUInt_36__34_ExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
      result = GGS_literalUInt_36__34_ExpressionForGeneration ((cPtr_literalUInt_36__34_ExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalUInt64ExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2E_weak ("literalUInt64ExpressionForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalU_38_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalU_38_ExpressionForGeneration::objectCompare (const GGS_literalU_38_ExpressionForGeneration & inOperand) const {
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

GGS_literalU_38_ExpressionForGeneration::GGS_literalU_38_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalU_38_ExpressionForGeneration GGS_literalU_38_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_u_38_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalU_38_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalU_38_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalU_38_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalU_38_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalU_38_ExpressionForGeneration::
literalU_38_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                      const GGS_location & in_mLocation,
                                                      const GGS_u_38_ & in_mValue,
                                                      Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalU_38_ExpressionForGeneration::GGS_literalU_38_ExpressionForGeneration (const cPtr_literalU_38_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalU_38_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_literalU_38_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_u_38_ () ;
  }else{
    cPtr_literalU_38_ExpressionForGeneration * p = (cPtr_literalU_38_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalU_38_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalU8ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalU_38_ExpressionForGeneration::cPtr_literalU_38_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalU_38_ExpressionForGeneration::cPtr_literalU_38_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GGS_location & in_mLocation,
                                                                                    const GGS_u_38_ & in_mValue,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalU_38_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalU_38_ExpressionForGeneration ;
}

void cPtr_literalU_38_ExpressionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@literalU8ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalU_38_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalU_38_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalU_38_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalU8ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalU_38_ExpressionForGeneration ("literalU8ExpressionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalU_38_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalU_38_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalU_38_ExpressionForGeneration_2E_weak::objectCompare (const GGS_literalU_38_ExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalU_38_ExpressionForGeneration_2E_weak::GGS_literalU_38_ExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalU_38_ExpressionForGeneration_2E_weak & GGS_literalU_38_ExpressionForGeneration_2E_weak::operator = (const GGS_literalU_38_ExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalU_38_ExpressionForGeneration_2E_weak::GGS_literalU_38_ExpressionForGeneration_2E_weak (const GGS_literalU_38_ExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalU_38_ExpressionForGeneration_2E_weak GGS_literalU_38_ExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalU_38_ExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalU_38_ExpressionForGeneration GGS_literalU_38_ExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalU_38_ExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalU_38_ExpressionForGeneration * p = (cPtr_literalU_38_ExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalU_38_ExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalU_38_ExpressionForGeneration GGS_literalU_38_ExpressionForGeneration_2E_weak::bang_literalU_38_ExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalU_38_ExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalU_38_ExpressionForGeneration) ;
      result = GGS_literalU_38_ExpressionForGeneration ((cPtr_literalU_38_ExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalU8ExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalU_38_ExpressionForGeneration_2E_weak ("literalU8ExpressionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalU_38_ExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalU_38_ExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalSIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSIntExpressionForGeneration::objectCompare (const GGS_literalSIntExpressionForGeneration & inOperand) const {
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

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_sint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::
literalSIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_sint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sint GGS_literalSIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sint () ;
  }else{
    cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_sint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

void cPtr_literalSIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalSIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ("literalSIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSIntExpressionForGeneration_2E_weak::objectCompare (const GGS_literalSIntExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalSIntExpressionForGeneration_2E_weak::GGS_literalSIntExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration_2E_weak & GGS_literalSIntExpressionForGeneration_2E_weak::operator = (const GGS_literalSIntExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration_2E_weak::GGS_literalSIntExpressionForGeneration_2E_weak (const GGS_literalSIntExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration_2E_weak GGS_literalSIntExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalSIntExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalSIntExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalSIntExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration_2E_weak::bang_literalSIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalSIntExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalSIntExpressionForGeneration) ;
      result = GGS_literalSIntExpressionForGeneration ((cPtr_literalSIntExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalSIntExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration_2E_weak ("literalSIntExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSIntExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalSInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_s_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::
literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_s_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (const cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_literalSInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_s_36__34_ () ;
  }else{
    cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_s_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalSInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalSInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ("literalSInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak & GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::operator = (const GGS_literalSInt_36__34_ExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak (const GGS_literalSInt_36__34_ExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalSInt_36__34_ExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalSInt_36__34_ExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::bang_literalSInt_36__34_ExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalSInt_36__34_ExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
      result = GGS_literalSInt_36__34_ExpressionForGeneration ((cPtr_literalSInt_36__34_ExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalSInt64ExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration_2E_weak ("literalSInt64ExpressionForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionForGeneration::objectCompare (const GGS_literalBigIntExpressionForGeneration & inOperand) const {
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

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_bigint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalBigIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::
literalBigIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_bigint & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (const cPtr_literalBigIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_literalBigIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_bigint & in_mValue,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBigIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

void cPtr_literalBigIntExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalBigIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ("literalBigIntExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionForGeneration_2E_weak::objectCompare (const GGS_literalBigIntExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalBigIntExpressionForGeneration_2E_weak::GGS_literalBigIntExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration_2E_weak & GGS_literalBigIntExpressionForGeneration_2E_weak::operator = (const GGS_literalBigIntExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration_2E_weak::GGS_literalBigIntExpressionForGeneration_2E_weak (const GGS_literalBigIntExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration_2E_weak GGS_literalBigIntExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalBigIntExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalBigIntExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalBigIntExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration_2E_weak::bang_literalBigIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalBigIntExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBigIntExpressionForGeneration) ;
      result = GGS_literalBigIntExpressionForGeneration ((cPtr_literalBigIntExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration_2E_weak ("literalBigIntExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionAST::objectCompare (const GGS_literalStringExpressionAST & inOperand) const {
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

GGS_literalStringExpressionAST::GGS_literalStringExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringExpressionAST GGS_literalStringExpressionAST::
init_21__21_ (const GGS_location & in_mLocation,
              const GGS__5B_string_5D_ & in_mStringSequence,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_literalStringExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalStringExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalStringExpressionAST_init_21__21_ (in_mLocation, in_mStringSequence, inCompiler) ;
  const GGS_literalStringExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::
literalStringExpressionAST_init_21__21_ (const GGS_location & in_mLocation,
                                         const GGS__5B_string_5D_ & in_mStringSequence,
                                         Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringSequence = in_mStringSequence ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST::GGS_literalStringExpressionAST (const cPtr_literalStringExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_literalStringExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_literalStringExpressionAST::readProperty_mStringSequence (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_string_5D_ () ;
  }else{
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    return p->mProperty_mStringSequence ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionAST::cPtr_literalStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation (),
mProperty_mStringSequence () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionAST::cPtr_literalStringExpressionAST (const GGS_location & in_mLocation,
                                                                  const GGS__5B_string_5D_ & in_mStringSequence,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation (),
mProperty_mStringSequence () {
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringSequence = in_mStringSequence ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

void cPtr_literalStringExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringExpressionAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringSequence.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalStringExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringExpressionAST (mProperty_mLocation, mProperty_mStringSequence, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mStringSequence.printNonNullClassInstanceProperties ("mStringSequence") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ("literalStringExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionAST_2E_weak::objectCompare (const GGS_literalStringExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalStringExpressionAST_2E_weak::GGS_literalStringExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST_2E_weak & GGS_literalStringExpressionAST_2E_weak::operator = (const GGS_literalStringExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST_2E_weak::GGS_literalStringExpressionAST_2E_weak (const GGS_literalStringExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST_2E_weak GGS_literalStringExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST GGS_literalStringExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalStringExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST GGS_literalStringExpressionAST_2E_weak::bang_literalStringExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringExpressionAST) ;
      result = GGS_literalStringExpressionAST ((cPtr_literalStringExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionAST_2E_weak ("literalStringExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionForGeneration::objectCompare (const GGS_literalStringExpressionForGeneration & inOperand) const {
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

GGS_literalStringExpressionForGeneration::GGS_literalStringExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_string & in_mString,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalStringExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mString, inCompiler) ;
  const GGS_literalStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::
literalStringExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_string & in_mString,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration::GGS_literalStringExpressionForGeneration (const cPtr_literalStringExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_literalStringExpressionForGeneration::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_string & in_mString,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mString () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

void cPtr_literalStringExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalStringExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ("literalStringExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionForGeneration_2E_weak::objectCompare (const GGS_literalStringExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_literalStringExpressionForGeneration_2E_weak::GGS_literalStringExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration_2E_weak & GGS_literalStringExpressionForGeneration_2E_weak::operator = (const GGS_literalStringExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration_2E_weak::GGS_literalStringExpressionForGeneration_2E_weak (const GGS_literalStringExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration_2E_weak GGS_literalStringExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalStringExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration_2E_weak::bang_literalStringExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringExpressionForGeneration) ;
      result = GGS_literalStringExpressionForGeneration ((cPtr_literalStringExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2E_weak ("literalStringExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionAST::objectCompare (const GGS_unaryMinusExpressionAST & inOperand) const {
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

GGS_unaryMinusExpressionAST::GGS_unaryMinusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryMinusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryMinusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryMinusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryMinusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::
unaryMinusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                      const GGS_semanticExpressionAST & in_mExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST::GGS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryMinusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_semanticExpressionAST & in_mExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unaryMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

void cPtr_unaryMinusExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryMinusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryMinusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ("unaryMinusExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionAST_2E_weak::objectCompare (const GGS_unaryMinusExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_unaryMinusExpressionAST_2E_weak::GGS_unaryMinusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak & GGS_unaryMinusExpressionAST_2E_weak::operator = (const GGS_unaryMinusExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak::GGS_unaryMinusExpressionAST_2E_weak (const GGS_unaryMinusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak GGS_unaryMinusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryMinusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryMinusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST_2E_weak::bang_unaryMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryMinusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryMinusExpressionAST) ;
      result = GGS_unaryMinusExpressionAST ((cPtr_unaryMinusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ("unaryMinusExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionForGeneration::objectCompare (const GGS_unaryMinusExpressionForGeneration & inOperand) const {
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

GGS_unaryMinusExpressionForGeneration::GGS_unaryMinusExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_unaryMinusExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_unaryMinusExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->unaryMinusExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_unaryMinusExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::
unaryMinusExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_semanticExpressionForGeneration & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration::GGS_unaryMinusExpressionForGeneration (const cPtr_unaryMinusExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_unaryMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unaryMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

void cPtr_unaryMinusExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryMinusExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryMinusExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ("unaryMinusExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionForGeneration_2E_weak::objectCompare (const GGS_unaryMinusExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_unaryMinusExpressionForGeneration_2E_weak::GGS_unaryMinusExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak & GGS_unaryMinusExpressionForGeneration_2E_weak::operator = (const GGS_unaryMinusExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak::GGS_unaryMinusExpressionForGeneration_2E_weak (const GGS_unaryMinusExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak GGS_unaryMinusExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryMinusExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_unaryMinusExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryMinusExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration_2E_weak::bang_unaryMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryMinusExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryMinusExpressionForGeneration) ;
      result = GGS_unaryMinusExpressionForGeneration ((cPtr_unaryMinusExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ("unaryMinusExpressionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @notExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionAST::objectCompare (const GGS_notExpressionAST & inOperand) const {
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

GGS_notExpressionAST::GGS_notExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_notExpressionAST GGS_notExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_notExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_notExpressionAST (inCompiler COMMA_THERE)) ;
  object->notExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_notExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::
notExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                               const GGS_semanticExpressionAST & in_mExpression,
                               Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST::GGS_notExpressionAST (const cPtr_notExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_notExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_notExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_notExpressionAST::cPtr_notExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_notExpressionAST::cPtr_notExpressionAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mExpression,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_notExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

void cPtr_notExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@notExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_notExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @notExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionAST ("notExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionAST_2E_weak::objectCompare (const GGS_notExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_notExpressionAST_2E_weak::GGS_notExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST_2E_weak & GGS_notExpressionAST_2E_weak::operator = (const GGS_notExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST_2E_weak::GGS_notExpressionAST_2E_weak (const GGS_notExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST_2E_weak GGS_notExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_notExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST GGS_notExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_notExpressionAST result ;
  if (isValid ()) {
    const cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_notExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST GGS_notExpressionAST_2E_weak::bang_notExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_notExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notExpressionAST) ;
      result = GGS_notExpressionAST ((cPtr_notExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @notExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionAST_2E_weak ("notExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @notExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionForGeneration::objectCompare (const GGS_notExpressionForGeneration & inOperand) const {
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

GGS_notExpressionForGeneration::GGS_notExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_notExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_notExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->notExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_notExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::
notExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                             const GGS_location & in_mLocation,
                                             const GGS_semanticExpressionForGeneration & in_mExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration::GGS_notExpressionForGeneration (const cPtr_notExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_notExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                  const GGS_location & in_mLocation,
                                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_notExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

void cPtr_notExpressionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@notExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_notExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @notExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionForGeneration ("notExpressionForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionForGeneration_2E_weak::objectCompare (const GGS_notExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_notExpressionForGeneration_2E_weak::GGS_notExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration_2E_weak & GGS_notExpressionForGeneration_2E_weak::operator = (const GGS_notExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration_2E_weak::GGS_notExpressionForGeneration_2E_weak (const GGS_notExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration_2E_weak GGS_notExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_notExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_notExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_notExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration_2E_weak::bang_notExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_notExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notExpressionForGeneration) ;
      result = GGS_notExpressionForGeneration ((cPtr_notExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @notExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionForGeneration_2E_weak ("notExpressionForGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @unaryWrappingMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionAST::objectCompare (const GGS_unaryWrappingMinusExpressionAST & inOperand) const {
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

GGS_unaryWrappingMinusExpressionAST::GGS_unaryWrappingMinusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryWrappingMinusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryWrappingMinusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryWrappingMinusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryWrappingMinusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::
unaryWrappingMinusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST::GGS_unaryWrappingMinusExpressionAST (const cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryWrappingMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryWrappingMinusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                            const GGS_semanticExpressionAST & in_mExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unaryWrappingMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

void cPtr_unaryWrappingMinusExpressionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryWrappingMinusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryWrappingMinusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryWrappingMinusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ("unaryWrappingMinusExpressionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionAST_2E_weak::objectCompare (const GGS_unaryWrappingMinusExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_unaryWrappingMinusExpressionAST_2E_weak::GGS_unaryWrappingMinusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak & GGS_unaryWrappingMinusExpressionAST_2E_weak::operator = (const GGS_unaryWrappingMinusExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak::GGS_unaryWrappingMinusExpressionAST_2E_weak (const GGS_unaryWrappingMinusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak GGS_unaryWrappingMinusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryWrappingMinusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryWrappingMinusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST_2E_weak::bang_unaryWrappingMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryWrappingMinusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryWrappingMinusExpressionAST) ;
      result = GGS_unaryWrappingMinusExpressionAST ((cPtr_unaryWrappingMinusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ("unaryWrappingMinusExpressionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @unaryWrappingMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionForGeneration::objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration & inOperand) const {
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

GGS_unaryWrappingMinusExpressionForGeneration::GGS_unaryWrappingMinusExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_unaryWrappingMinusExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_unaryWrappingMinusExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->unaryWrappingMinusExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_unaryWrappingMinusExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::
unaryWrappingMinusExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_mExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration::GGS_unaryWrappingMinusExpressionForGeneration (const cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionForGeneration::cPtr_unaryWrappingMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionForGeneration::cPtr_unaryWrappingMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                const GGS_location & in_mLocation,
                                                                                                const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unaryWrappingMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

void cPtr_unaryWrappingMinusExpressionForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryWrappingMinusExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryWrappingMinusExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryWrappingMinusExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ("unaryWrappingMinusExpressionForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::operator = (const GGS_unaryWrappingMinusExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (const GGS_unaryWrappingMinusExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_unaryWrappingMinusExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryWrappingMinusExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::bang_unaryWrappingMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryWrappingMinusExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
      result = GGS_unaryWrappingMinusExpressionForGeneration ((cPtr_unaryWrappingMinusExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ("unaryWrappingMinusExpressionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperObjectInstanciationInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperObjectInstanciationInExpressionAST::objectCompare (const GGS_filewrapperObjectInstanciationInExpressionAST & inOperand) const {
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

GGS_filewrapperObjectInstanciationInExpressionAST::GGS_filewrapperObjectInstanciationInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST GGS_filewrapperObjectInstanciationInExpressionAST::
init_21_ (const GGS_lstring & in_mFilewrapperName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperObjectInstanciationInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperObjectInstanciationInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperObjectInstanciationInExpressionAST_init_21_ (in_mFilewrapperName, inCompiler) ;
  const GGS_filewrapperObjectInstanciationInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::
filewrapperObjectInstanciationInExpressionAST_init_21_ (const GGS_lstring & in_mFilewrapperName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST::GGS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperObjectInstanciationInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperObjectInstanciationInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (const GGS_lstring & in_mFilewrapperName,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperObjectInstanciationInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

void cPtr_filewrapperObjectInstanciationInExpressionAST::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperObjectInstanciationInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperObjectInstanciationInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperObjectInstanciationInExpressionAST (mProperty_mFilewrapperName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperObjectInstanciationInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperObjectInstanciationInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ("filewrapperObjectInstanciationInExpressionAST",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperObjectInstanciationInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::objectCompare (const GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak & GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::operator = (const GGS_filewrapperObjectInstanciationInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak (const GGS_filewrapperObjectInstanciationInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperObjectInstanciationInExpressionAST result ;
  if (isValid ()) {
    const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperObjectInstanciationInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::bang_filewrapperObjectInstanciationInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperObjectInstanciationInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
      result = GGS_filewrapperObjectInstanciationInExpressionAST ((cPtr_filewrapperObjectInstanciationInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperObjectInstanciationInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2E_weak ("filewrapperObjectInstanciationInExpressionAST.weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionAST::objectCompare (const GGS_filewrapperInExpressionAST & inOperand) const {
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

GGS_filewrapperInExpressionAST::GGS_filewrapperInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperInExpressionAST GGS_filewrapperInExpressionAST::
init_21__21_ (const GGS_lstring & in_mFilewrapperName,
              const GGS_lstring & in_mFilewrapperPath,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_filewrapperInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperInExpressionAST_init_21__21_ (in_mFilewrapperName, in_mFilewrapperPath, inCompiler) ;
  const GGS_filewrapperInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::
filewrapperInExpressionAST_init_21__21_ (const GGS_lstring & in_mFilewrapperName,
                                         const GGS_lstring & in_mFilewrapperPath,
                                         Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST::GGS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperInExpressionAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (const GGS_lstring & in_mFilewrapperName,
                                                                  const GGS_lstring & in_mFilewrapperPath,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

void cPtr_filewrapperInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperPath, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ("filewrapperInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionAST_2E_weak::objectCompare (const GGS_filewrapperInExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_filewrapperInExpressionAST_2E_weak::GGS_filewrapperInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST_2E_weak & GGS_filewrapperInExpressionAST_2E_weak::operator = (const GGS_filewrapperInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST_2E_weak::GGS_filewrapperInExpressionAST_2E_weak (const GGS_filewrapperInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST_2E_weak GGS_filewrapperInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST GGS_filewrapperInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperInExpressionAST result ;
  if (isValid ()) {
    const cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST GGS_filewrapperInExpressionAST_2E_weak::bang_filewrapperInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperInExpressionAST) ;
      result = GGS_filewrapperInExpressionAST ((cPtr_filewrapperInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2E_weak ("filewrapperInExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionForGeneration::objectCompare (const GGS_filewrapperInExpressionForGeneration & inOperand) const {
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

GGS_filewrapperInExpressionForGeneration::GGS_filewrapperInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration GGS_filewrapperInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_unifiedTypeMapEntry & in_filewrapperType,
                          const GGS_string & in_mFilewrapperName,
                          const GGS_string & in_mFilewrapperPath,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_filewrapperType, in_mFilewrapperName, in_mFilewrapperPath, inCompiler) ;
  const GGS_filewrapperInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::
filewrapperInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                               const GGS_location & in_mLocation,
                                                               const GGS_unifiedTypeMapEntry & in_filewrapperType,
                                                               const GGS_string & in_mFilewrapperName,
                                                               const GGS_string & in_mFilewrapperPath,
                                                               Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_filewrapperType = in_filewrapperType ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration::GGS_filewrapperInExpressionForGeneration (const cPtr_filewrapperInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_filewrapperInExpressionForGeneration::readProperty_filewrapperType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_filewrapperType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_filewrapperType (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_unifiedTypeMapEntry & in_filewrapperType,
                                                                                      const GGS_string & in_mFilewrapperName,
                                                                                      const GGS_string & in_mFilewrapperPath,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_filewrapperType (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_filewrapperType = in_filewrapperType ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

void cPtr_filewrapperInExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_filewrapperType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_filewrapperType, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_filewrapperType.printNonNullClassInstanceProperties ("filewrapperType") ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ("filewrapperInExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionForGeneration_2E_weak::objectCompare (const GGS_filewrapperInExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_filewrapperInExpressionForGeneration_2E_weak::GGS_filewrapperInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration_2E_weak & GGS_filewrapperInExpressionForGeneration_2E_weak::operator = (const GGS_filewrapperInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration_2E_weak::GGS_filewrapperInExpressionForGeneration_2E_weak (const GGS_filewrapperInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration_2E_weak GGS_filewrapperInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration GGS_filewrapperInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration GGS_filewrapperInExpressionForGeneration_2E_weak::bang_filewrapperInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperInExpressionForGeneration) ;
      result = GGS_filewrapperInExpressionForGeneration ((cPtr_filewrapperInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration_2E_weak ("filewrapperInExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperStaticPathInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperStaticPathInExpressionForGeneration::objectCompare (const GGS_filewrapperStaticPathInExpressionForGeneration & inOperand) const {
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

GGS_filewrapperStaticPathInExpressionForGeneration::GGS_filewrapperStaticPathInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration GGS_filewrapperStaticPathInExpressionForGeneration::
init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                              const GGS_location & in_mLocation,
                              const GGS_unifiedTypeMapEntry & in_filewrapperType,
                              const GGS_string & in_mFilewrapperName,
                              const GGS_uint & in_mFilewrapperFileIndex,
                              const GGS_bool & in_mIsTextFile,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_filewrapperStaticPathInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperStaticPathInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_filewrapperType, in_mFilewrapperName, in_mFilewrapperFileIndex, in_mIsTextFile, inCompiler) ;
  const GGS_filewrapperStaticPathInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::
filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                             const GGS_location & in_mLocation,
                                                                             const GGS_unifiedTypeMapEntry & in_filewrapperType,
                                                                             const GGS_string & in_mFilewrapperName,
                                                                             const GGS_uint & in_mFilewrapperFileIndex,
                                                                             const GGS_bool & in_mIsTextFile,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_filewrapperType = in_filewrapperType ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperFileIndex = in_mFilewrapperFileIndex ;
  mProperty_mIsTextFile = in_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration::GGS_filewrapperStaticPathInExpressionForGeneration (const cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_filewrapperStaticPathInExpressionForGeneration::readProperty_filewrapperType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_filewrapperType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperFileIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperFileIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperStaticPathInExpressionForGeneration::readProperty_mIsTextFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mIsTextFile ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperStaticPathInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_filewrapperType (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperFileIndex (),
mProperty_mIsTextFile () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                          const GGS_location & in_mLocation,
                                                                                                          const GGS_unifiedTypeMapEntry & in_filewrapperType,
                                                                                                          const GGS_string & in_mFilewrapperName,
                                                                                                          const GGS_uint & in_mFilewrapperFileIndex,
                                                                                                          const GGS_bool & in_mIsTextFile,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_filewrapperType (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperFileIndex (),
mProperty_mIsTextFile () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_filewrapperType = in_filewrapperType ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperFileIndex = in_mFilewrapperFileIndex ;
  mProperty_mIsTextFile = in_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperStaticPathInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

void cPtr_filewrapperStaticPathInExpressionForGeneration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperStaticPathInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_filewrapperType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperFileIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsTextFile.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperStaticPathInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperStaticPathInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_filewrapperType, mProperty_mFilewrapperName, mProperty_mFilewrapperFileIndex, mProperty_mIsTextFile, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperStaticPathInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_filewrapperType.printNonNullClassInstanceProperties ("filewrapperType") ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperFileIndex.printNonNullClassInstanceProperties ("mFilewrapperFileIndex") ;
    mProperty_mIsTextFile.printNonNullClassInstanceProperties ("mIsTextFile") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperStaticPathInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ("filewrapperStaticPathInExpressionForGeneration",
                                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperStaticPathInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::objectCompare (const GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak & GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::operator = (const GGS_filewrapperStaticPathInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak (const GGS_filewrapperStaticPathInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperStaticPathInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperStaticPathInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::bang_filewrapperStaticPathInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperStaticPathInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
      result = GGS_filewrapperStaticPathInExpressionForGeneration ((cPtr_filewrapperStaticPathInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperStaticPathInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration_2E_weak ("filewrapperStaticPathInExpressionForGeneration.weak",
                                                                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @initializerCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallAST::objectCompare (const GGS_initializerCallAST & inOperand) const {
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

GGS_initializerCallAST::GGS_initializerCallAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS__5B_actualOutputArgumentAST_5D_ & in_mExpressions,
                  const GGS_location & in_mEndOfExpressions,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_initializerCallAST * object = nullptr ;
  macroMyNew (object, cPtr_initializerCallAST (inCompiler COMMA_THERE)) ;
  object->initializerCallAST_init_21__21__21_ (in_mTypeName, in_mExpressions, in_mEndOfExpressions, inCompiler) ;
  const GGS_initializerCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::
initializerCallAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS__5B_actualOutputArgumentAST_5D_ & in_mExpressions,
                                     const GGS_location & in_mEndOfExpressions,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_mEndOfExpressions = in_mEndOfExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST::GGS_initializerCallAST (const cPtr_initializerCallAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initializerCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_initializerCallAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualOutputArgumentAST_5D_ GGS_initializerCallAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualOutputArgumentAST_5D_ () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_initializerCallAST::readProperty_mEndOfExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mEndOfExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @initializerCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_initializerCallAST::cPtr_initializerCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressions (),
mProperty_mEndOfExpressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_initializerCallAST::cPtr_initializerCallAST (const GGS_lstring & in_mTypeName,
                                                  const GGS__5B_actualOutputArgumentAST_5D_ & in_mExpressions,
                                                  const GGS_location & in_mEndOfExpressions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressions (),
mProperty_mEndOfExpressions () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_mEndOfExpressions = in_mEndOfExpressions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_initializerCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST ;
}

void cPtr_initializerCallAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@initializerCallAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_initializerCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_initializerCallAST (mProperty_mTypeName, mProperty_mExpressions, mProperty_mEndOfExpressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_initializerCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_mEndOfExpressions.printNonNullClassInstanceProperties ("mEndOfExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @initializerCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallAST ("initializerCallAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallAST_2E_weak::objectCompare (const GGS_initializerCallAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_initializerCallAST_2E_weak::GGS_initializerCallAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak & GGS_initializerCallAST_2E_weak::operator = (const GGS_initializerCallAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak::GGS_initializerCallAST_2E_weak (const GGS_initializerCallAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak GGS_initializerCallAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_initializerCallAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST_2E_weak::unwrappedValue (void) const {
  GGS_initializerCallAST result ;
  if (isValid ()) {
    const cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_initializerCallAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST_2E_weak::bang_initializerCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_initializerCallAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerCallAST) ;
      result = GGS_initializerCallAST ((cPtr_initializerCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerCallAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallAST_2E_weak ("initializerCallAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @initializerCallForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallForGeneration::objectCompare (const GGS_initializerCallForGeneration & inOperand) const {
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

GGS_initializerCallForGeneration::GGS_initializerCallForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_initializerName,
                      const GGS__5B_semanticExpressionForGeneration_5D_ & in_mEffectiveParameterList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_initializerCallForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_initializerCallForGeneration (inCompiler COMMA_THERE)) ;
  object->initializerCallForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_initializerName, in_mEffectiveParameterList, inCompiler) ;
  const GGS_initializerCallForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::
initializerCallForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_string & in_initializerName,
                                                   const GGS__5B_semanticExpressionForGeneration_5D_ & in_mEffectiveParameterList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_initializerName = in_initializerName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration::GGS_initializerCallForGeneration (const cPtr_initializerCallForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initializerCallForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_initializerCallForGeneration::readProperty_initializerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallForGeneration) ;
    return p->mProperty_initializerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticExpressionForGeneration_5D_ GGS_initializerCallForGeneration::readProperty_mEffectiveParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticExpressionForGeneration_5D_ () ;
  }else{
    cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallForGeneration) ;
    return p->mProperty_mEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @initializerCallForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_initializerCallForGeneration::cPtr_initializerCallForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_initializerName (),
mProperty_mEffectiveParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_initializerCallForGeneration::cPtr_initializerCallForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_string & in_initializerName,
                                                                      const GGS__5B_semanticExpressionForGeneration_5D_ & in_mEffectiveParameterList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_initializerName (),
mProperty_mEffectiveParameterList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_initializerName = in_initializerName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_initializerCallForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration ;
}

void cPtr_initializerCallForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@initializerCallForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_initializerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_initializerCallForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_initializerCallForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_initializerName, mProperty_mEffectiveParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_initializerCallForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_initializerName.printNonNullClassInstanceProperties ("initializerName") ;
    mProperty_mEffectiveParameterList.printNonNullClassInstanceProperties ("mEffectiveParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @initializerCallForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallForGeneration ("initializerCallForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallForGeneration_2E_weak::objectCompare (const GGS_initializerCallForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_initializerCallForGeneration_2E_weak::GGS_initializerCallForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak & GGS_initializerCallForGeneration_2E_weak::operator = (const GGS_initializerCallForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak::GGS_initializerCallForGeneration_2E_weak (const GGS_initializerCallForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak GGS_initializerCallForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_initializerCallForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_initializerCallForGeneration result ;
  if (isValid ()) {
    const cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_initializerCallForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration_2E_weak::bang_initializerCallForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_initializerCallForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerCallForGeneration) ;
      result = GGS_initializerCallForGeneration ((cPtr_initializerCallForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerCallForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallForGeneration_2E_weak ("initializerCallForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @multiplicationExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionAST::objectCompare (const GGS_multiplicationExpressionAST & inOperand) const {
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

GGS_multiplicationExpressionAST::GGS_multiplicationExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_multiplicationExpressionAST GGS_multiplicationExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_multiplicationExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_multiplicationExpressionAST (inCompiler COMMA_THERE)) ;
  object->multiplicationExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_multiplicationExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::
multiplicationExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST::GGS_multiplicationExpressionAST (const cPtr_multiplicationExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_multiplicationExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionAST::cPtr_multiplicationExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionAST::cPtr_multiplicationExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                    const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                    const GGS_semanticExpressionAST & in_mRightExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_multiplicationExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

void cPtr_multiplicationExpressionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@multiplicationExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_multiplicationExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_multiplicationExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_multiplicationExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ("multiplicationExpressionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionAST_2E_weak::objectCompare (const GGS_multiplicationExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_multiplicationExpressionAST_2E_weak::GGS_multiplicationExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST_2E_weak & GGS_multiplicationExpressionAST_2E_weak::operator = (const GGS_multiplicationExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST_2E_weak::GGS_multiplicationExpressionAST_2E_weak (const GGS_multiplicationExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST_2E_weak GGS_multiplicationExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_multiplicationExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST GGS_multiplicationExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_multiplicationExpressionAST result ;
  if (isValid ()) {
    const cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_multiplicationExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST GGS_multiplicationExpressionAST_2E_weak::bang_multiplicationExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_multiplicationExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_multiplicationExpressionAST) ;
      result = GGS_multiplicationExpressionAST ((cPtr_multiplicationExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST_2E_weak ("multiplicationExpressionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @multiplicationExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionNoOverflowAST::objectCompare (const GGS_multiplicationExpressionNoOverflowAST & inOperand) const {
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

GGS_multiplicationExpressionNoOverflowAST::GGS_multiplicationExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST GGS_multiplicationExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_multiplicationExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_multiplicationExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->multiplicationExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_multiplicationExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::
multiplicationExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST::GGS_multiplicationExpressionNoOverflowAST (const cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_multiplicationExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionNoOverflowAST::cPtr_multiplicationExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionNoOverflowAST::cPtr_multiplicationExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
                                                                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_multiplicationExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

void cPtr_multiplicationExpressionNoOverflowAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@multiplicationExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_multiplicationExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_multiplicationExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_multiplicationExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ("multiplicationExpressionNoOverflowAST",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_multiplicationExpressionNoOverflowAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_multiplicationExpressionNoOverflowAST_2E_weak::GGS_multiplicationExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST_2E_weak & GGS_multiplicationExpressionNoOverflowAST_2E_weak::operator = (const GGS_multiplicationExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST_2E_weak::GGS_multiplicationExpressionNoOverflowAST_2E_weak (const GGS_multiplicationExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST_2E_weak GGS_multiplicationExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_multiplicationExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST GGS_multiplicationExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_multiplicationExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_multiplicationExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST GGS_multiplicationExpressionNoOverflowAST_2E_weak::bang_multiplicationExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_multiplicationExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_multiplicationExpressionNoOverflowAST) ;
      result = GGS_multiplicationExpressionNoOverflowAST ((cPtr_multiplicationExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2E_weak ("multiplicationExpressionNoOverflowAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @divisionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionAST::objectCompare (const GGS_divisionExpressionAST & inOperand) const {
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

GGS_divisionExpressionAST::GGS_divisionExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_divisionExpressionAST GGS_divisionExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_divisionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_divisionExpressionAST (inCompiler COMMA_THERE)) ;
  object->divisionExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_divisionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::
divisionExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST::GGS_divisionExpressionAST (const cPtr_divisionExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_divisionExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionAST::cPtr_divisionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionAST::cPtr_divisionExpressionAST (const GGS_location & in_mOperatorLocation,
                                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_divisionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

void cPtr_divisionExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@divisionExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_divisionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_divisionExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_divisionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionAST ("divisionExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionAST_2E_weak::objectCompare (const GGS_divisionExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_divisionExpressionAST_2E_weak::GGS_divisionExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST_2E_weak & GGS_divisionExpressionAST_2E_weak::operator = (const GGS_divisionExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST_2E_weak::GGS_divisionExpressionAST_2E_weak (const GGS_divisionExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST_2E_weak GGS_divisionExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_divisionExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST GGS_divisionExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_divisionExpressionAST result ;
  if (isValid ()) {
    const cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_divisionExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST GGS_divisionExpressionAST_2E_weak::bang_divisionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_divisionExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divisionExpressionAST) ;
      result = GGS_divisionExpressionAST ((cPtr_divisionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionAST_2E_weak ("divisionExpressionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @divisionExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionNoOverflowAST::objectCompare (const GGS_divisionExpressionNoOverflowAST & inOperand) const {
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

GGS_divisionExpressionNoOverflowAST::GGS_divisionExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST GGS_divisionExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_divisionExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_divisionExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->divisionExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_divisionExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::
divisionExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                  const GGS_semanticExpressionAST & in_mLeftExpression,
                                                  const GGS_semanticExpressionAST & in_mRightExpression,
                                                  Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST::GGS_divisionExpressionNoOverflowAST (const cPtr_divisionExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_divisionExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionNoOverflowAST::cPtr_divisionExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionNoOverflowAST::cPtr_divisionExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
                                                                            const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                            const GGS_semanticExpressionAST & in_mRightExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_divisionExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

void cPtr_divisionExpressionNoOverflowAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@divisionExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_divisionExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_divisionExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_divisionExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ("divisionExpressionNoOverflowAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

